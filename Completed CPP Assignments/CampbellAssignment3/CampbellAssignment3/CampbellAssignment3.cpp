/* Emily Campbell
   9/20/2020
   Assignment 3 
   This code outputs the value of the input file
   and uses manipulators to alter the output
   */


#include <iostream> 
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;


    double fertilizeApplication;
    double areaMowed;
    double treePlanted;
    double costMowing;
    double costFertilizing;
    double costTreePlanted;
    double billAmount;

    inFile.open("lawnbill.txt");
    outFile.open("billtotal.txt");

    inFile >> areaMowed >> fertilizeApplication >> treePlanted;

    costMowing = 35 * (areaMowed / 5000);
    costFertilizing = 30 * (fertilizeApplication);
    costTreePlanted = 50 * (treePlanted);

    billAmount = costMowing + costFertilizing + costTreePlanted;

    outFile << fixed << showpoint;
    outFile << setprecision(2);

    outFile << left;

    outFile << "The bill amount = " << setw(7) << billAmount << endl;

    inFile.close();
    outFile.close();


    system("pause");
    return 0;

}