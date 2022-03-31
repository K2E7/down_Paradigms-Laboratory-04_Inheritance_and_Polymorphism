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

    std::cout<<"Enter the Manufactorer of the Vehicle :   ";
    std::cin >>temp_s;
    manuf = temp_s;

    std::cout<<"Enter the Price of the Vehicle        :   ";
    std::cin >>temp_l;
    price = temp_l;
}

void Vehicle::display(){

    std::cout<< " Manufacturer   :   "<<manuf<<std::endl;
    std::cout<< " Price          :   "<<price<<std::endl;
}

Car::Car(){

    color       = "undefined_color";
    no_of_seats = 0;
    model       = "undefined_model";
}

Car::Car(string c, int n, string m){

    Vehicle::read();
    color       = c;
    no_of_seats = n;
    model       = m;
}

Car::Car(const Car &C){

    Vehicle::read();
    color       = C.color;
    no_of_seats = C.no_of_seats;
    model       = C.model;
}

void Car::operator = (const Car &C){

    color       = C.color;
    no_of_seats = C.no_of_seats;
    model       = C.model;
}

void Car::read(){

    Vehicle::read();
    string temp_s1,temp_s2;
    int temp_i1;

    std::cout<<"Enter the Color of the Car            :   ";
    std::cin >>temp_s1;
    color = temp_s1;

    std::cout<<"Enter the No. of Seats of the Car     :   ";
    std::cin >>temp_i1;
    no_of_seats = temp_i1;

    std::cout<<"Enter the Model of the Car            :   ";
    std::cin >>temp_s2;
    model = temp_s2;
}

void Car::display(){

    std::cout<<endl;
    Vehicle::display();
    std::cout<<" Color          :   "<<color<<endl;
    std::cout<<" No_Of_Seats    :   "<<no_of_seats<<endl;
    std::cout<<" Model          :   "<<model<<endl;
}
