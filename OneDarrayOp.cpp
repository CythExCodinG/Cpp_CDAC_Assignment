#include <iostream>
using namespace std;

void acceptData(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int a;
        cout << "Enter value for index " << i << ":";
        cin >> a;
        arr[i] = a;
    }
}

void displayData(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Index =>" << i << " = " << arr[i] << endl;
    }
}
bool isEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int countEven(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (isEven(arr[i]))
        {
            sum += arr[i];
        }
    }
    return sum;
}
bool isPrime(int n){
    for (int i = 2; i <= n/2; i++)
    {
            if (n%i==0)
            {
                return false;
            }
            
    }
    return true;
    
}
int countPrime(int arr[],int n){
    int count;
    for (int i = 0; i < n; i++)
    {
        if(isPrime(arr[i])){
            count++;
            cout<<arr[i]<<endl;
        }

    }
    return count;
}
int search(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

bool ifOdd(int n){
    if(n%2 == 0){
        return false;
    }
    return true;
}

int main()
{

    cout << "Enter the size of array :";
    int n;
    cin >> n;
    int arr[n];

    acceptData(arr, n);
    displayData(arr, n);
    int choice;
    do
    {
        cout << "Enter choice form the below menu:\n"
             << "1.Modify num at given position\n"
             << "2.Delete No\n"
             << "3.Search Element\n"
             << "4.Addition of all even no\n"
             << "5.Only prime no's and its count\n"
             << "6.Max odd no\n"
             << "7. Nth Max\n"
             << "8.Exit";
        cin >> choice;
        int index;
        int oddMax=0;

        switch (choice)
        {
        case 1:
            cout << "type the position u want to change";
            cin >> index;
            cout << "type the new value";
            int val;
            cin >> val;
            arr[index] = val;
            break;

        case 2:
            cout << "type the position u want to delete";
            cin >> index;
            for (int i = index; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            arr[n - 1] = 0;
            displayData(arr, n);
            break;

        case 3:

            cout << "type the element you want to search";
            int target;
            cin >> target;
            int position;
            position = search(arr, n, target);

            cout << "element is at position -> " << position << endl;

            break;
        case 4:
            cout << countEven(arr, n);
        cout<<"*******************"<<endl;

            cout << "\n";
            break;

        case 5:
        cout<<countPrime(arr,n)<<endl;
                cout<<"*******************"<<endl;

        break;
        
        case 6:
        for(int i=0 ; i<n ; i++){
            if(ifOdd(arr[i])){
                if(arr[i] > oddMax){
                    oddMax = arr[i];
                }
            }
        }

        cout<<"odd max is -> "<<oddMax<<endl;
        cout<<"*******************"<<endl;

        break;
        default:
            break;
        }
    } while (choice != 8);
}