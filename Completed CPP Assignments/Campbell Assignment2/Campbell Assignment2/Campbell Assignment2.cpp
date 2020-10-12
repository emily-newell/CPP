/* Emily Campbell
   9/12/2020
   Assignment 2 The program outputs the amount of paint needed. */


#include <iostream> 

using namespace std;

int main()
{

    double doorWidth;
    double doorLength;

    double window1Length;
    double window1Width;

    double window2Length;
    double window2Width;

    double shelfLength;
    double shelfWidth;

    double roomWidth;
    double roomHeight;
    double roomLength;

    double roomArea;

    double doorArea;

    double window1Area;

    double window2Area;

    double shelfArea;

    double paintedArea;

    double paintAmount;

    cout << "Enter the height of the room in feet : ";
    cin >> roomHeight;
    cout << endl;

    cout << "Enter the width of the room in feet: ";
    cin >> roomWidth;
    cout << endl;

    cout << "Enter the length of the room in feet: ";
    cin >> roomLength;
    cout << endl;

    cout << "Enter the length of the door: ";
    cin >> doorLength;
    cout << endl;

    cout << "Enter the width of the door: ";
    cin >> doorWidth;
    cout << endl;

    cout << "Enter the length of the first window: ";
    cin >> window1Length;
    cout << endl;

    cout << "Enther the width of the first window: ";
    cin >> window1Width;
    cout << endl;

    cout << "Enter the length of the second window: ";
    cin >> window2Length;
    cout << endl;

    cout << "Enter the width of the second window: ";
    cin >> window2Width;
    cout << endl;

    cout << "Enter the length of the bookshelf: ";
    cin >> shelfLength;
    cout << endl;

    cout << "Enter the width of the bookshelf: ";
    cin >> shelfWidth;
    cout << endl;


    roomArea = (roomLength * roomHeight * 2) + (roomWidth * roomHeight * 2);
    doorArea = doorLength * doorWidth;
    window1Area = window1Length * window1Width;
    window2Area = window2Length * window2Width;
    shelfArea = shelfLength * shelfWidth;
    paintedArea = roomArea - doorArea - window1Area - window2Area - shelfArea;
    paintAmount = paintedArea / 120;

    cout << "The amount of paint needed is " << paintAmount << " gallons. " << endl;

    system("pause");
    return 0;
}