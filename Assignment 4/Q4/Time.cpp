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
        cout << "hours : " << this->hours << "\t";
        cout << "minutes : " << this->minutes;
    }

    Time operator+(Time &obj2)
    {
        int totalHours = this->hours + obj2.hours;
        int totalMinutes = this->minutes + obj2.minutes;

        return Time(totalHours, totalMinutes);
    }
    Time &operator=(Time &obj2)
    {
        this->hours = obj2.hours;
        this->minutes = obj2.minutes;

        return *this;
    }
    Time &operator++(int)
    {
        cout << "During operation :" << "Hours :" << this->hours << " Minutes:" << this->minutes++ << endl;

        if (this->minutes >= 60)
        {
            this->hours++;
            this->minutes = 0;
            cout << "Done operation :" << "Hours :" << this->hours << " Minutes:" << this->minutes << endl;
        }

        return *this;
    }
    Time &operator++()
    {
        this->minutes++;
        if (this->minutes >= 60)
        {
            ++this->hours;
            this->minutes = 0;
        }

        return *this;
    }
    Time &operator--()
    {
        if (minutes == 0)
        {

            this->minutes = 59;
            this->hours--;
            return *this;
        }
        cout << "During operation :" << "Hours: " << this->hours << " Minutes:" << ++this->minutes<<endl;

        return *this;
    }
    Time &operator--(int)
    {
        if (minutes == 0)
        {

            this->minutes = 59;
            this->hours--;
            return *this;
        }
        cout << "Before operation :" << "Hours: " << this->hours << " Minutes:" << this->minutes<<endl;
    
        cout << "During operation :" << "Hours: " << this->hours << " Minutes:" << --this->minutes<<endl;
        return *this;
    }
    Time operator-(Time &obj2)
    {
        int totalHoursMin = (this->hours) * 60 + this->minutes;
        int totalHoursMin2 = (obj2.hours) * 60 + obj2.minutes;
        int totaltime;
        if (totalHoursMin2 > totalHoursMin)
        {
            totaltime = totalHoursMin2 - totalHoursMin;
        }
        else
        {
            totaltime = totalHoursMin - totalHoursMin2;
        }
        int totalHours = totaltime / 60;
        int totalMinute = totaltime % 60;

        return Time(totalHours, totalMinute);
    }
};

