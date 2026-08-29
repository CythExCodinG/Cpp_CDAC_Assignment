#include <iostream>
using namespace std;

class Time
{

private:
    int hours;
    int minutes;

public:
    Time() {};
    Time(int h, int m)
    {
        this->hours = h;
        this->minutes = m;

        while (minutes >= 60)
        {
            hours++;
            minutes -= 60;
        }
    }

    Time(Time &obj)
    {
        this->hours = obj.hours;
        this->minutes = obj.minutes;
    }

    void display()
    {
        cout << "hours : " << this->hours<<"\t";
        cout << "minutes : " << this->minutes;
    }

    Time operator+(Time &obj2)
    {
        int totalHours = this->hours + obj2.hours;
        int totalMinutes = this->minutes + obj2.minutes;

        return Time(totalHours, totalMinutes);
    }
    Time& operator=(Time &obj2)
    {
        this->hours=obj2.hours;
        this->minutes=obj2.minutes;

        return *this;
    }
    Time operator-(Time &obj2)
    {
        int totalHoursMin = (this->hours)*60 + this->minutes;
        int totalHoursMin2 = (obj2.hours)*60 + obj2.minutes;
        int totaltime;
        if(totalHoursMin2>totalHoursMin){
            totaltime=totalHoursMin2-totalHoursMin;
        }else{
            totaltime=totalHoursMin-totalHoursMin2;
        }
        int totalHours=totaltime/60;
        int totalMinute=totaltime%60;


        return Time(totalHours, totalMinute);
    }
};

int main()
{

    Time t1(4, 130);
    Time t2(t1);

    t1.display();
    cout << endl;
    t2.display();
    cout<<endl;

    cout << endl;
    Time t3 = t1 + t2;

    t3.display();
    cout<<endl;
    Time t4(1,45);
    Time t5(2,5);
    Time t6=t4-t5;
    t6.display();
    cout<<endl;

    t4=t5=t6;
    t4.display();
    cout<<endl;
    
}