#include<iostream>
#include<cstring>
#ifndef Share_H
#define Share_H
class Share {
public:
    char *name;
    int noofshares;
    double buyingPrice;
    char *purchaseDate;
    double sellingPrice;
    char *sellingDate;

    Share() : name(nullptr), noofshares(0), buyingPrice(0.0),
              purchaseDate(nullptr), sellingPrice(0.0), sellingDate(nullptr) {}

    Share(char *name, int noofshares, double buyingPrice,
          char *purchaseDate, double sellingPrice, char *sellingDate)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->purchaseDate = new char[strlen(purchaseDate) + 1];
        strcpy(this->purchaseDate, purchaseDate);
        this->sellingDate = new char[strlen(sellingDate) + 1];
        strcpy(this->sellingDate, sellingDate);
        this->noofshares = noofshares;
        this->buyingPrice = buyingPrice;
        this->sellingPrice = sellingPrice;
    }

    // Copy constructor (deep copy)
    Share(const Share &other)
        : noofshares(other.noofshares), buyingPrice(other.buyingPrice),
          sellingPrice(other.sellingPrice)
    {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        purchaseDate = new char[strlen(other.purchaseDate) + 1];
        strcpy(purchaseDate, other.purchaseDate);
        sellingDate = new char[strlen(other.sellingDate) + 1];
        strcpy(sellingDate, other.sellingDate);
    }

    // Copy assignment (deep copy, self-assignment safe)
    Share& operator=(const Share &other)
    {
        if (this == &other) return *this;

        delete[] name;
        delete[] purchaseDate;
        delete[] sellingDate;

        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        purchaseDate = new char[strlen(other.purchaseDate) + 1];
        strcpy(purchaseDate, other.purchaseDate);
        sellingDate = new char[strlen(other.sellingDate) + 1];
        strcpy(sellingDate, other.sellingDate);

        noofshares = other.noofshares;
        buyingPrice = other.buyingPrice;
        sellingPrice = other.sellingPrice;

        return *this;
    }

    ~Share() {
        delete[] name;
        delete[] purchaseDate;
        delete[] sellingDate;
    }
};

#endif