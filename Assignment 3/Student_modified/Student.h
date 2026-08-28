#ifndef STUDENT_H
#define STUDENT_H

class Student {
private:
    int sid;
    char *sname;
    int age, m1, m2, m3;

public:
    // Constructors & Destructor
    Student();
    Student(int sid, const char *nm, int age, int m1, int m2, int m3);
    ~Student();

    // Rule of Three (Deep Copy Support)
    Student(const Student &other);
    Student& operator=(const Student &other);

    // Setters
    void setSid(int sid);
    void setName(const char *nm);
    void setAge(int age);
    void setM1(int m1);
    void setM2(int m2);
    void setM3(int m3);

    // Getters (Return values instead of printing directly)
    int getSid() const;
    const char* getName() const;
    int getAge() const;
    int getM1() const;
    int getM2() const;
    int getM3() const;

    // Utility Methods
    void display() const;
    void percentage() const;
};

#endif