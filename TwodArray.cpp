#include<iostream>
using namespace std;   
void display2DArray(int arr[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void inputArray(int arr[][], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}

int main() {
    int cols;
     // Declare the number of columns
    cout << "Enter the number of columns: ";
    cin >> cols;
    int rows;
     // Declare the number of rows
    cout << "Enter the number of rows: ";
    cin >> rows;
    int arr[rows][cols]; // Declare a 2D array with user-defined rows and columns
    inputArray(arr, rows, cols); // Accept values for the 2D array
    cout << "Elements of 2D array are: " << endl;
    display2DArray(arr, rows, cols); // Display the elements of the 2D array
    return 0;
}