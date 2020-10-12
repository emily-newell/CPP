/* Emily Campbell 
   9/1/2020 
   Assignment 1 */


#include <iostream> 

using namespace std;

int main()
{
    double fertilizeApplication;
    double areaMowed;
    double treePlanted;
    double costMowing;
    double costFertilizing;
    double costTreePlanted;
    double billAmount;

    cout << "Enter the square footage of the lawn: ";
    cin >> areaMowed;
    cout << endl;

    cout << "Enter the number of fertilizing applications: ";
    cin >> fertilizeApplication;
    cout << endl;

    cout << "Enter number of trees to be planted: ";
    cin >> treePlanted;
    cout << endl;


    costMowing = 35 * (areaMowed/5000);
    costFertilizing = 30 * (fertilizeApplication);
    costTreePlanted = 50 * (treePlanted);

    billAmount = costMowing + costFertilizing + costTreePlanted;

    cout << "The bill amount = " << billAmount << endl;
 
    system("pause");
    return 0;
}