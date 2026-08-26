#include <iostream>
using namespace std;

int main()
{
    int a[10][10];
    int r,c,choice;

    cout<<"Enter number of rows : ";
    cin>>r;

    cout<<"Enter number of columns : ";
    cin>>c;

    do
    {
        cout<<"\n\n1. Accept data";
        cout<<"\n2. Display data";
        cout<<"\n3. Find maximum number";
        cout<<"\n4. Find minimum number";
        cout<<"\n5. Find addition of all numbers";
        cout<<"\n6. Find sum of each row";
        cout<<"\n7. Find sum of each column";
        cout<<"\n8. Find row wise maximum";
        cout<<"\n9. Find column wise maximum";
        cout<<"\n10. Exit";

        cout<<"\nEnter choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"\nEnter elements : \n";

                for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                    {
                        cin>>a[i][j];
                    }
                }
                break;

            case 2:
                cout<<"\nArray elements are :\n";

                for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<"\n";
                }
                break;

            case 3:
            {
                int max=a[0][0];
                int temp=0;       // not really needed but kept

                for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                    {
                        if(a[i][j]>max)
                        {
                            max=a[i][j];
                        }
                    }
                }

                cout<<"\nMaximum number is : "<<max;
                break;
            }

            case 4:
            {
                int min=a[0][0];

                for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                    {
                        if(a[i][j]<min)
                        {
                            min=a[i][j];
                        }
                    }
                }

                cout<<"\nMinimum number is : "<<min;
                break;
            }

            case 5:
            {
                int sum=0;

                for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                    {
                        sum=sum+a[i][j];
                    }
                }

                cout<<"\nAddition = "<<sum;
                break;
            }

            case 6:
            {
                cout<<"\nSum of rows :\n";

                for(int i=0;i<r;i++)
                {
                    int sum=0;
                    int j=0;

                    while(j<c)
                    {
                        sum=sum+a[i][j];
                        j++;
                    }

                    cout<<"Row "<<i+1<<" sum = "<<sum<<"\n";
                }

                break;
            }

            case 7:
            {
                cout<<"\nSum of columns :\n";

                for(int j=0;j<c;j++)
                {
                    int sum=0;

                    for(int i=0;i<r;i++)
                    {
                        sum=sum+a[i][j];
                    }

                    cout<<"Column "<<j+1<<" sum = "<<sum<<endl;
                }

                break;
            }

            case 8:
            {
                cout<<"\nRow wise maximum :\n";

                for(int i=0;i<r;i++)
                {
                    int max=a[i][0];

                    // starting j from 0 would also work
                    for(int j=1;j<c;j++)
                    {
                        if(a[i][j]>max)
                        {
                            max=a[i][j];
                        }
                    }

                    cout<<"Maximum of row "<<i+1<<" = "<<max<<endl;
                }

                break;
            }

            case 9:
            {
                cout<<"\nColumn wise maximum :\n";

                for(int j=0;j<c;j++)
                {
                    int max=a[0][j];

                    for(int i=1;i<r;i++)
                    {
                        if(a[i][j]>max)
                        {
                            max=a[i][j];
                        }
                    }

                    cout<<"Maximum of column "<<j+1<<" = "<<max<<endl;
                }

                break;
            }

            case 10:
                cout<<"\nExiting program...";
                break;

            default:
                cout<<"\nInvalid choice...";
        }

    }while(choice!=10);

    return 0;
}