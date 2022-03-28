#include<iostream>
#include<string>

using namespace std;
class Vehicle {

    private:
        long    price;
        string  manuf;

    public:
        Vehicle();
        Vehicle(long, string);
        Vehicle(const Vehicle &);

        void operator = (const Vehicle &);

        void read();
        void display();
};

class Car : public Vehicle{

    private:

        string  color;
        int     no_of_seats;
        string  model;

    public:

        Car();
        Car(string, int, string);
        Car(const Car &);

        void operator = (const Car &);

        void read();
        void display();
};