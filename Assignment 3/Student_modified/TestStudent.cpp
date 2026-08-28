#include <iostream>
#include "Student.h"
#include "StudentHelper.h"

using namespace std;

int main() {
    int maxStudents = 2;
    int count = 0;

    // Array of Student pointers
    Student** studentList = new Student*[maxStudents];

    // Accept data
    StudentHelper::acceptdata(studentList, count, maxStudents);
    StudentHelper::acceptdata(studentList, count, maxStudents);

    // Display data
    for (int i = 0; i < count; i++) {
        studentList[i]->display();
        studentList[i]->percentage();
    }

    // Cleanup dynamically allocated memory
    for (int i = 0; i < count; i++) {
        delete studentList[i];
    }
    delete[] studentList;

    return 0;
}