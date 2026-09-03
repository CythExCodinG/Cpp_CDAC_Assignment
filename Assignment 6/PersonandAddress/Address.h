#ifndef ADDR_H
#define ADDR_H
class Address{
    private:
    char* street;
    char* city;
    char* state;
    int pin;

    public:
    Address();
    Address(const char* street, const char* city, const char* state, int pin);
    Address(const Address& other);
    Address& operator=(const Address& other);
    ~Address();

    void display() const;
    const char* getCity() const;
    void modifyAddress(const char* street, const char* city, const char* state, int pin);
};
#endif