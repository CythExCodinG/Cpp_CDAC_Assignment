#ifndef Adrr_H
#define Adrr_H
class Address{
    private:
    char* street;
    char* city;
    char* state;
    int pin;

    public:

    Address();

    Address(char* street , char* city , char* state , int pin);
};
#endif