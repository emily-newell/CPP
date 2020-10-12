/* Emily Campbell
   10/1/2020
   Assignment 4
   Program will output royalties under each option
   and give the best option */


#include <iostream> 
#include <iomanip>

using namespace std;

int main()
{
    double netPrice, copiesSold, option1Sum, option2Sum, option3Sum;
    const double finalDelivery = 5000;
    const double publishedNovel = 20000;
    const double option2Rate = .125;
    const double option3RateFirst = .10;
    const double option3RateSecond = .14;
    

     cout << fixed << showpoint << setprecision(2);
     cout << "Enter net price of each copy: ";
     cin >> netPrice;

     cout << "Enter estimated number of copies that will be sold: ";
     cin >> copiesSold;

     option1Sum = finalDelivery + publishedNovel;

     option2Sum = option2Rate * netPrice * copiesSold;

     if (copiesSold < 4000)
         option3Sum = option3RateFirst * netPrice * copiesSold;
     else
         option3Sum = (option3RateFirst * netPrice * 4000) + (option3RateSecond * netPrice * (copiesSold - 4000));
          
     cout << "The royalties received under option one would be $" << option1Sum << endl;
     cout << "The royalties received under option two would be $" << option2Sum << endl;
     cout << "The royalties received under option three would be $" << option3Sum << endl;

     if (option1Sum > option2Sum && option1Sum > option3Sum)
         cout << "The best choice is option 1!" << endl;
     else if (option2Sum > option1Sum && option2Sum > option3Sum)
         cout << "The best choice is option 2!" << endl;
     else
         cout << "The best choice is option 3!" << endl;

    system("pause");

    return 0;                                            
}