#include "definitions.h"

int main()
{
    Vehicle V_MAIN;
    V_MAIN.display();
    V_MAIN.read();            //demonstrating the existence
    V_MAIN.display();         //of parent class.
    std::cout<<"--------------------\n";

    Vehicle V_COPY(1500000, "Renault");
    cout<<"V_Copy.../\n";     // parameterized constructor
    V_COPY.display();
    V_COPY = V_MAIN;          // assignment operator
    V_COPY.display();         // demonstrated.
    std::cout<<"--------------------\n";

    cout<<"Copy Constructor.../\n";
    Vehicle V_CONS(V_COPY);   // demonstrating
    V_CONS.display();         // COPY constructor
    std::cout<<"--------------------\n";  

    Car C_MAIN;
    C_MAIN.display();
    C_MAIN.read();            // demonstrating the functionality
    C_MAIN.display();         // of child class.
    std::cout<<"--------------------\n";

    Car C_COPY("Red", 6, "Logan");
    cout<<"C_Copy.../\n";     // parameterized constructor
    C_COPY.display();
    C_COPY = C_MAIN;          // assignment operator
    C_COPY.display();         // demonstrated
    std::cout<<"--------------------\n";

    cout<<"Copy Constructor.../\n";
    Car C_CONS(C_COPY);       // demonstrating
    C_CONS.display();         // COPY constructor
    std::cout<<"--------------------\n";
}
