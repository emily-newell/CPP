/* Emily Campbell
* 10/10/2020
* Assignment 5
*/

#include <iostream>

using namespace std;

int main()
{
    int populationA, populationB, year = 0;
    double growthRateA, growthRateB;

    cout << "Enter the population of Town A: ";
    cin >> populationA;
    cout << endl;

    cout << "Enter the growth rate of Town A: ";
    cin >> growthRateA;
    cout << endl;

    cout << "Enter the population of Town B: ";
    cin >> populationB;
    cout << endl;

    cout << "Enter the growth rate of Town B: ";
    cin >> growthRateB;
    cout << endl;

 
    while (populationA < populationB && growthRateA > growthRateB)
    {
        (populationA = ((growthRateA / 100) * populationA) + populationA); 
        (populationB = ((growthRateB / 100) * populationB) + populationB);
        year++;
    }

   

        cout << "Town A's population will be higher than town B's population after " << year << " years.\n" << endl;
        cout << "The population of town A when it becomes greater than town B is: " << populationA << ".\n" << endl;
        cout << "The popluation of town B at this time will be: " << populationB << ".\n" << endl;
        
    system("pause");
    return 0;
}