#include <iostream> //this counts as an object and has methods

using namespace std;

int main()
{
    // the Std specifies the object and the cout is the method,
    //which takes in a string as an argument
    std::cout<<"enter Mileage: "<<std::endl;
    int inputInMiles;
    int outputInKilometers;
    double conversionFactor =1.609;
    std::cin >> inputInMiles;
    outputInKilometers = inputInMiles*conversionFactor;
    std::cout<< inputInMiles<<" Miles is equal to "<<outputInKilometers<<" kilometers"<<std::endl;

    return 0;
}
