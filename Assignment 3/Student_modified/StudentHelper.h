#ifndef STUDENTHELPER_H
#define STUDENTHELPER_H

#include "Student.h"
#include <iostream>
#include <limits>

using namespace std;

class StudentHelper {
public:
    static bool acceptdata(Student **stuarr, int &count, int max) {
        if (count >= max) {
            cout << "Error: Student array is full!" << endl;
            return false;
        }

        char nm[40];
        int sid, m1, m2, m3, age;

        cout << "Enter your name: ";
        cin.getline(nm, 40); // Fixed buffer size parameter

        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter your id: ";
        cin >> sid;
        cout << "Enter your marks1: ";
        cin >> m1;
        cout << "Enter your marks2: ";
        cin >> m2;
        cout << "Enter your marks3: ";
        cin >> m3;

        // Clear input stream buffer so next cin.getline() works properly
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        stuarr[count] = new Student(sid, nm, age, m1, m2, m3);
        count++;
        return true;
    }
};

#endif