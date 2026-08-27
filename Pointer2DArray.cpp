#include <iostream>
using namespace std;
void acceptData(int **arr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter element for row:" << i << " col:" << j << "=>";
            cin >> arr[i][j];
        }
        cout << endl;
    }
}

void displayData(int **arr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int maxNum(int **arr, int r, int c)
{
    int max = 0;

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    return max;
}
void rowMax(int **arr, int r, int c)
{
    int max = 0;

    for (int i = 0; i < r; i++)
    {

        max = 0;
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
        cout << "Max at row =>" << i << " is:" << max << endl;
    }
}
int sumOfAll(int **arr, int r, int c)
{
    int sum = 0;

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "Sum of all is :" << sum << endl;

    return sum;
}

void sumOfRows(int **arr, int r, int c)
{
    int sum = 0;

    for (int i = 0; i < r; i++)
    {
        sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of elements at row " << i << " is=>" << sum << endl;
    }
}

void sumOfCols(int **arr, int r, int c)
{
    int sum = 0;

    for (int i = 0; i < r; i++)
    {
        sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[j][i];
        }
        cout << "Sum of elements at Col " << i << " is=>" << sum << endl;
    }
}
void maxCols(int **arr, int r, int c)
{
    int max = 0;

    for (int i = 0; i < r; i++)
    {
        max = 0;
        for (int j = 0; j < c; j++)
        {
            if (arr[j][i] > max)
            {
                max = arr[j][i];
            }
        }
        cout << "Max at Col" << i << " is=>" << max << endl;
    }
}

int minNum(int **arr, int r, int c)
{
    int min = INT16_MAX;

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }

    return min;
}

int main()
{
    cout << "enter the number of rows";
    int rows;
    cin >> rows;

    int **arr = new int *[rows];

    cout << "enter the number of cols";
    int cols;
    cin >> cols;

    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    // acceptData(arr, rows, cols);
    // displayData(arr, rows, cols);
    // // maxNum(arr , rows , cols);
    // // minNum(arr,rows,cols);
    // // sumOfAll(arr,rows,cols);
    // // sumOfCols(arr,rows,cols);
    // // sumOfRows(arr,rows,cols);
    // rowMax(arr, rows, cols);
    // maxCols(arr, rows, cols);

    int choice;
    do
    {

        cout << "1) Insert data \n"
             << "2) Display data \n"
             << "3) Max in matrix \n"
             << "4) Min in matrix \n"
             << "5) Sum of matrix \n"
             << "6)Sum of columns \n"
             << "7) Sum of rows \n"
             << "8) Row max \n"
             << "9) Column max \n"
             << "10) Exit \n"

             << "enter the operation you want : ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            acceptData(arr, rows, cols);
            break;

        case 2:
            displayData(arr, rows, cols);
            break;

        case 3:
            cout<<"Max is :"<<maxNum(arr, rows, cols)<<endl;
            break;

        case 4:
            cout<<"Min is :"<<minNum(arr, rows, cols)<<endl;
            break;

        case 5:
            sumOfAll(arr, rows, cols);
            break;

        case 6:
            sumOfCols(arr, rows, cols);
            break;

        case 7:
            sumOfRows(arr, rows, cols);
            break;

        case 8:
            rowMax(arr, rows, cols);
            break;

        case 9:
            maxCols(arr, rows, cols);
            break;
        case 10:
            cout<<"========Thank you for using our code Kishori mam=========";
            break;
        default:
            cout << "Invaild option";
            break;
        }
    } while (choice != 10);
}