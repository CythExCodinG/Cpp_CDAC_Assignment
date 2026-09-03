#include "Person.h"
#include <iostream>
#include <cstring>
using namespace std;

void addNewPerson(Person* arr[], int &count) {
    if (count >= 50) {
        cout << "Array is full!" << endl;
        return;
    }
    char name[100], street[100], city[100], state[100];
    int pin;
    
    cout << "Enter Name: ";
    cin >> ws; cin.getline(name, 100);
    cout << "Enter Street: ";
    cin.getline(street, 100);
    cout << "Enter City: ";
    cin.getline(city, 100);
    cout << "Enter State: ";
    cin.getline(state, 100);
    cout << "Enter PIN: ";
    cin >> pin;
    
    arr[count++] = new Person(name, street, city, state, pin);
    cout << "Person added successfully!" << endl;
}

void displayAllPersons(Person* arr[], int count) {
    if (count == 0) {
        cout << "No persons to display." << endl;
        return;
    }
    for (int i = 0; i < count; i++) {
        arr[i]->display();
        cout << "----------------------" << endl;
    }
}

void searchById(Person* arr[], int count) {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (arr[i]->getId() == id) {
            arr[i]->display();
            return;
        }
    }
    cout << "Person with ID " << id << " not found." << endl;
}

void searchByName(Person* arr[], int count) {
    char name[100];
    cout << "Enter Name to search: ";
    cin >> ws; cin.getline(name, 100);
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (arr[i]->getName() && strcmp(arr[i]->getName(), name) == 0) {
            arr[i]->display();
            found = true;
        }
    }
    if (!found) cout << "Person with name " << name << " not found." << endl;
}

void modifyAddress(Person* arr[], int count) {
    int id;
    cout << "Enter ID of Person to modify address: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (arr[i]->getId() == id) {
            char street[100], city[100], state[100];
            int pin;
            cout << "Enter New Street: ";
            cin >> ws; cin.getline(street, 100);
            cout << "Enter New City: ";
            cin.getline(city, 100);
            cout << "Enter New State: ";
            cin.getline(state, 100);
            cout << "Enter New PIN: ";
            cin >> pin;
            
            arr[i]->getAddress().modifyAddress(street, city, state, pin);
            cout << "Address updated successfully!" << endl;
            return;
        }
    }
    cout << "Person with ID " << id << " not found." << endl;
}

void findAddressById(Person* arr[], int count) {
    int id;
    cout << "Enter ID to find address: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (arr[i]->getId() == id) {
            arr[i]->getAddress().display();
            return;
        }
    }
    cout << "Person with ID " << id << " not found." << endl;
}

void displayPersonsByCity(Person* arr[], int count) {
    char city[100];
    cout << "Enter City: ";
    cin >> ws; cin.getline(city, 100);
    bool found = false;
    for (int i = 0; i < count; i++) {
        const char* pCity = arr[i]->getAddress().getCity();
        if (pCity && strcmp(pCity, city) == 0) {
            arr[i]->display();
            cout << "----------------------" << endl;
            found = true;
        }
    }
    if (!found) cout << "No person found staying in " << city << "." << endl;
}

int main() {
    Person* arr[50];
    int count = 0;
    int choice;

    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Add new Person" << endl;
        cout << "2. Display All Person" << endl;
        cout << "3. Search by Id" << endl;
        cout << "5. Search by Name" << endl;
        cout << "6. Modify address" << endl;
        cout << "7. Find address by id of Person" << endl;
        cout << "8. Display all Person stay in given city" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addNewPerson(arr, count); break;
            case 2: displayAllPersons(arr, count); break;
            case 3: searchById(arr, count); break;
            case 5: searchByName(arr, count); break;
            case 6: modifyAddress(arr, count); break;
            case 7: findAddressById(arr, count); break;
            case 8: displayPersonsByCity(arr, count); break;
            case 9: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 9);
    
    for (int i = 0; i < count; i++) {
        delete arr[i];
    }
    return 0;
}
