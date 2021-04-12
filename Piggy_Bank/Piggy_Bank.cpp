#include <iostream>

int main()
{
    int pesos;
    int reals;
    int soles;
    int dollars;
    int convPeso = 3665; //Conversion rate for Colombian Pesos to US Dollars as at 12/04/2021
    int convReal = 6; //Conversion rate for Brazilian Reals to US Dollars as at 12/04/2021
    int convSol = 4; //Conversion rate for Peruvian Soles to US Dollars as at 12/04/2021

    std::cout << "Enter number of Colombian Pesos: ";
    std::cin >> pesos;

    std::cout << "Enter number of Brazilian Reals: ";
    std::cin >> reals;

    std::cout << "Enter number of Peruvian Soles: ";
    std::cin >> soles;

    //Calulates the total dollars from the sum of all three currencies converted
    dollars = (pesos / convPeso) + (reals / convReal) + (soles / convSol);

    std::cout << "US Dollars = $" << dollars;
}
