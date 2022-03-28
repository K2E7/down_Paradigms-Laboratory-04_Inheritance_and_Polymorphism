#include "definitions.h" 

Vehicle::Vehicle(){

    price = 0;
    manuf = "Undefined";
}

Vehicle::Vehicle(long p, string m){

    price = p;
    manuf = m;
}

Vehicle::Vehicle(const Vehicle &V){

    price = V.price;
    manuf = V.manuf;
}

void Vehicle::operator = (const Vehicle &V){

    price = V.price;
    manuf = V.manuf;
}

void Vehicle::read(){

    long    temp_l;
    string  temp_s;

    std::cout<<"Enter the Manufactorer of the Vehicle";
    std::cin >>temp_s;
    manuf = temp_s;

    std::cout<<"Enter the Price of the Vehicle";
    std::cin >>temp_l;
    price = temp_l;
}

void Vehicle::display(){

    std::cout<< " Manufacturer   :   "<<price<<std::endl;
    std::cout<< " Price          :   "<<manuf<<std::endl;
}