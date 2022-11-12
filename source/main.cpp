#include "../header/Complex.hpp"
#include "../header/Engine.hpp"
#include "../header/ElectricEngine.hpp"
#include "../header/Transmission.hpp"
#include "../header/Car.hpp"

#include <iostream>

int main()
{
    // Item 10: = return reference to *this
    Complex a(4, 5);
    Complex b(3, 9);

    std::cout << a << ", " << b << ", " << (a += b) << "\n\n";

    Engine* supra_engine = new Engine(500, "Toyota");
    Engine* opel_engine = new Engine(130, "Opel");
    ElectricEngine* tesla_engine = new ElectricEngine(200, "Tesla", 5.4);
    Transmission* five_gear_t = new Transmission(5);
    Transmission* six_gear_t = new Transmission(6);
    Transmission* seven_gear_t = new Transmission(7);

    Car supra(supra_engine, six_gear_t);
    Car meriva(opel_engine, five_gear_t);
    Car tesla(tesla_engine, seven_gear_t);

    // Item 11;
    std::cout << "Before operations:\n\n" 
                << supra << std::endl 
                << meriva << std::endl 
                << tesla << "\n\n";
    
    supra = meriva;
    std::cout << "Supra after copying (should be meriva):\n\n" 
                << supra << "\n\n";

    Car random_car(tesla);
    std::cout << "Random car (should be tesla):\n\n"
                << random_car << "\n\n";

    // Item 12: creating a new electric engine from an existing one;
    ElectricEngine new_engine(*tesla_engine);
    std::cout << "New engine (should be same as tesla engine):\n\n"
                << new_engine << "\n\n";

    /**
     * deleting engine and transmission pointers here,
     * because we are not using smart pointer, and they
     * might be shared between different cars
     * (double delete is undefined behaviour)
    */
    delete supra_engine;
    delete opel_engine;
    delete five_gear_t;
    delete six_gear_t;

    return 0;
}