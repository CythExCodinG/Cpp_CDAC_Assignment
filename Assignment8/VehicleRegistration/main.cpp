#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <stdexcept>
#include <ctime>

using namespace std;

// Template for year validation
template <typename T>
bool validateYear(T year) {
    time_t t = time(nullptr);
    tm* now = localtime(&t);
    int currentYear = now->tm_year + 1900;
    return (year >= 2000 && year <= currentYear);
}

// Inline formatting function
inline string formatDisplay(const string& regNo, const string& model, const string& mfg, int year, const string& extraKey, const string& extraVal) {
    return "RegNo: " + regNo + ", Model: " + model + ", Manufacturer: " + mfg + ", Year: " + to_string(year) + ", " + extraKey + ": " + extraVal;
}

// Abstract Base Class
class Vehicle {
protected:
    char regNo[20];
    char model[50];
    char manufacturer[50];
    int year;
    
    static int count;

public:
    Vehicle() {}
    Vehicle(const string& r, const string& m, const string& mfg, int y) {
        if (r.empty()) throw invalid_argument("Registration number cannot be empty.");
        if (!validateYear(y)) throw invalid_argument("Invalid year. Must be between 2000 and current year.");
        
        strncpy(regNo, r.c_str(), 19); regNo[19] = '\0';
        strncpy(model, m.c_str(), 49); model[49] = '\0';
        strncpy(manufacturer, mfg.c_str(), 49); manufacturer[49] = '\0';
        year = y;
    }
    
    virtual ~Vehicle() {}
    virtual void displayInfo() = 0;
    
    static int getCount() { return count; }
    static void incrementCount() { count++; }
    
    virtual void saveToFile(ofstream& out) = 0;
    virtual void loadFromFile(ifstream& in) = 0;
};

int Vehicle::count = 0;

class Car : public Vehicle {
private:
    char fuelType[20];
public:
    Car() {}
    Car(const string& r, const string& m, const string& mfg, int y, const string& f) 
        : Vehicle(r, m, mfg, y) {
        strncpy(fuelType, f.c_str(), 19); fuelType[19] = '\0';
    }
    
    void displayInfo() override {
        cout << formatDisplay(regNo, model, manufacturer, year, "FuelType", fuelType) << endl;
    }
    
    void saveToFile(ofstream& out) override {
        char type = 'C';
        out.write(&type, sizeof(type));
        out.write(regNo, sizeof(regNo));
        out.write(model, sizeof(model));
        out.write(manufacturer, sizeof(manufacturer));
        out.write(reinterpret_cast<char*>(&year), sizeof(year));
        out.write(fuelType, sizeof(fuelType));
    }
    
    void loadFromFile(ifstream& in) override {
        in.read(regNo, sizeof(regNo));
        in.read(model, sizeof(model));
        in.read(manufacturer, sizeof(manufacturer));
        in.read(reinterpret_cast<char*>(&year), sizeof(year));
        in.read(fuelType, sizeof(fuelType));
    }
};

class Bike : public Vehicle {
private:
    char engineCapacity[20];
public:
    Bike() {}
    Bike(const string& r, const string& m, const string& mfg, int y, const string& e) 
        : Vehicle(r, m, mfg, y) {
        strncpy(engineCapacity, e.c_str(), 19); engineCapacity[19] = '\0';
    }
    
    void displayInfo() override {
        cout << formatDisplay(regNo, model, manufacturer, year, "EngineCapacity", engineCapacity) << endl;
    }
    
    void saveToFile(ofstream& out) override {
        char type = 'B';
        out.write(&type, sizeof(type));
        out.write(regNo, sizeof(regNo));
        out.write(model, sizeof(model));
        out.write(manufacturer, sizeof(manufacturer));
        out.write(reinterpret_cast<char*>(&year), sizeof(year));
        out.write(engineCapacity, sizeof(engineCapacity));
    }
    
    void loadFromFile(ifstream& in) override {
        in.read(regNo, sizeof(regNo));
        in.read(model, sizeof(model));
        in.read(manufacturer, sizeof(manufacturer));
        in.read(reinterpret_cast<char*>(&year), sizeof(year));
        in.read(engineCapacity, sizeof(engineCapacity));
    }
};

int main() {
    int numVehicles;
    cout << "Enter number of vehicles: ";
    cin >> numVehicles;
    
    vector<Vehicle*> vehicles;
    
    for (int i = 0; i < numVehicles; i++) {
        char type;
        cout << "\nEnter type of vehicle (C for Car, B for Bike): ";
        cin >> type;
        
        string regNo, model, mfg, extra;
        int year;
        
        cout << "Enter Registration Number: ";
        cin >> ws; getline(cin, regNo);
        
        cout << "Enter Model Name: ";
        getline(cin, model);
        
        cout << "Enter Manufacturer: ";
        getline(cin, mfg);
        
        cout << "Enter Year: ";
        cin >> year;
        
        try {
            if (type == 'C' || type == 'c') {
                cout << "Enter Fuel Type: ";
                cin >> ws; getline(cin, extra);
                vehicles.push_back(new Car(regNo, model, mfg, year, extra));
            } else if (type == 'B' || type == 'b') {
                cout << "Enter Engine Capacity: ";
                cin >> ws; getline(cin, extra);
                vehicles.push_back(new Bike(regNo, model, mfg, year, extra));
            } else {
                cout << "Invalid vehicle type. Try again." << endl;
                i--;
                continue;
            }
            Vehicle::incrementCount();
        } catch (const exception& e) {
            cout << "Error: " << e.what() << ". Please enter details again." << endl;
            i--;
        }
    }
    
    // Save to binary file
    ofstream outFile("vehicles.dat", ios::binary);
    for (Vehicle* v : vehicles) {
        v->saveToFile(outFile);
    }
    outFile.close();
    
    for (Vehicle* v : vehicles) {
        delete v;
    }
    vehicles.clear();
    
    cout << "\nExpected Output (after reading from file)" << endl;
    
    // Read from binary file
    ifstream inFile("vehicles.dat", ios::binary);
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    
    while (inFile.peek() != EOF) {
        char type;
        if (!inFile.read(&type, sizeof(type))) break;
        
        Vehicle* v = nullptr;
        if (type == 'C') {
            v = new Car();
        } else if (type == 'B') {
            v = new Bike();
        }
        
        if (v) {
            v->loadFromFile(inFile);
            vehicles.push_back(v);
        }
    }
    inFile.close();
    
    // Display read records
    for (Vehicle* v : vehicles) {
        v->displayInfo();
    }
    
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "Total Vehicles stored: " << Vehicle::getCount() << endl;
    
    for (Vehicle* v : vehicles) {
        delete v;
    }
    
    return 0;
}
