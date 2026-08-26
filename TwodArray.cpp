#include <iostream>
using namespace std;

int main()
{
    int a[10][10];
    int r, c;
    int choice;

    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    do
    {
        // displaying menu here
    cout << "\n\n----- MENU -----\n";
        cout << "1. Accept data\n";
        cout << "2. Display data\n";
        cout << "3. Find maximum number\n";
        cout << "4. Find minimum number\n";
        cout << "5. Addition of all numbers\n";
        cout << "6. Sum of each row\n";
        cout << "7. Sum of each column\n";
        cout << "8. Row wise maximum\n";
        cout << "9. Column wise maximum\n";
        cout << "10. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                // taking array values from user
                cout << "\nEnter array elements:\n";

                for(int i=0; i<r; i++)
                {
                    for(int j=0; j<c; j++)
                    {
                        cin >> a[i][j];
                    }
                }
                break;

            case 2:
                // print the 2d array
                cout << "\nArray is:\n";

                for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                    {
                        cout << a[i][j] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
            {
                // finding maximum value
                int max = a[0][0];

                for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                    {
                        if(a[i][j] > max)
                        {
                            max = a[i][j];
                        }
                    }
                }

                cout << "Maximum number = " << max;
                break;
            }

            case 4:
            {
                // finding minimum number in array
                int min = a[0][0];

                for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                    {
                        if(a[i][j] < min)
                        {
                            min = a[i][j];
                        }
                    }
                }

                cout << "Minimum number = " << min;
                break;
            }

            case 5:
            {
                // add all elements
                int sum = 0;

                for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                    {
                        sum = sum + a[i][j];
                    }
                }

                cout << "Addition of all numbers = " << sum;
                break;
            }

            case 6:
            {
                // calculating sum of every row
                cout << "\nSum of each row:\n";

                for(int i=0;i<r;i++)
                {
                    int sum = 0;

                    for(int j=0;j<c;j++)
                    {
                        sum = sum + a[i][j];
                    }

                    cout << "Row " << i+1 << " = " << sum << endl;
                }
                break;
            }

            case 7:
            {
                // sum of each column
                cout << "\nSum of each column:\n";

                for(int j=0;j<c;j++)
                {
                    int sum = 0;

                    for(int i=0;i<r;i++)
                    {
                        sum = sum + a[i][j];
                    }

                    cout << "Column " << j+1 << " = " << sum << endl;
                }
                break;
            }

            case 8:
            {
                // maximum from each row
                cout << "\nRow wise maximum:\n";

                for(int i=0;i<r;i++)
                {
                    int max = a[i][0];

                    // check all values of current row
                    for(int j=1;j<c;j++)
                    {
                        if(a[i][j] > max)
                        {
                            max = a[i][j];
                        }
                    }

                    cout << "Maximum of Row " << i+1 << " = " << max << endl;
                }
                break;
            }

            case 9:
            {
                // finding max value column wise
                cout << "\nColumn wise maximum:\n";

                for(int j=0;j<c;j++)
                {
                    int max = a[0][j];

                    // checking elements of column
                    for(int i=1;i<r;i++)
                    {
                        if(a[i][j] > max)
                        {
                            max = a[i][j];
                        }
                    }

                    cout << "Maximum of Column " << j+1 << " = " << max << endl;
                }
                break;
            }

            case 10:
                // exit the program
                cout << "Program ended...";
                break;

            default:
                // if user enter wrong choice
                cout << "Wrong choice!";
        }

    } while(choice != 10);

    return 0;
}