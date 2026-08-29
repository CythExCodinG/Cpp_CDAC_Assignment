#include <iostream>
#include "Time.cpp"
using namespace std;

int main()
{

    Time t1(4, 130);
    Time t2(t1);

    t1.display();
    cout<<endl <<"---------------------------------------------------"<< endl;

    t2.display();
    cout <<endl<<"---------------------------------------------------"<< endl;


    cout << "Addition of time object ===>";
    Time t3 = t1 + t2;
    t3.display();

    cout<<endl <<"---------------------------------------------------"<< endl;
    Time t4(1, 45);
    Time t5(2, 5);
    cout << "Subtract time object ===>";
    Time t6 = t4 - t5;
    t6.display();
        cout<<endl <<"------------------------------------------------"<< endl;


    t4 = t5 = t6;
    t4.display();
    cout<<endl <<"----------------------------------------------------"<< endl;


    Time t7(1, 59); // real clock short explanation
    t7++;
    // for (int i = 0; i <=60; i++)
    // {
    //     t7++;
    //     t7.display();
    //     cout<<endl;
    // }
    cout <<"---------------------------------------------------"<< endl;

    --t7;
    t7.display();
    cout << endl;
    cout <<"-----------------------------------------------------"<< endl;

    t7--;
    t7.display();
    cout << endl;
}