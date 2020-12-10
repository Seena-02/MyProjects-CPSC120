//Project_2
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
//Part_1
string myFullName,
       myAddress,
       myPhoneNumber;

myFullName = "Seena Mohajeran";
myAddress = "38 Vista Del Cerro";
myPhoneNumber = "(949)-315-8990";

cout << setw(5) << setfill(' ') << "" << "My personal information:\n";
cout << setw(10) << setfill(' ') << "" << "My full name" << setw(15) << setfill('.') << "" << myFullName <<  endl;
cout << setw(10) << setfill(' ') << "" << "My address" << setw(15) << setfill('.') << "" << myAddress << endl;
cout << setw(10) << setfill(' ') << "" << "My phone number" << setw(15) << setfill('.') << "" << myPhoneNumber << endl;

cout << "\n";

//Part_2
double sodaPrice,
       juicePrice,
       hamburgerPrice,
       fishPrice;

sodaPrice = 1.25;
juicePrice = 1.75;
hamburgerPrice = 2.35;
fishPrice = 1.55;

cout << setw(15) << setfill('.') << "" << "Menu" << setw(15) << setfill('.') << "" << endl;
cout << "Drinks\n";
cout << setw(5) << setfill(' ') << "" << "Soda" << setw(20) << setfill('.') << "" << sodaPrice << endl;
cout << setw(5) << setfill(' ') << "" << "Juice" << setw(19) << setfill('.') << "" << juicePrice << endl;
cout << "Sandwiches\n";
cout << setw(5) << setfill(' ') << "" << "Hamburger" << setw(15) << setfill('.') << "" << hamburgerPrice << endl;
cout << setw(5) << setfill(' ') << "" << "Fish" << setw(20) << setfill('.') << "" << fishPrice << endl;

cout << "\n";

//Part_3
double score_1,
       score_2,
       score_3,
       examAverage;
string fullName;

score_1 = 80;
score_2 = 92;
score_3 = 77;
fullName = "Bill Gates";

examAverage = ((score_1+score_2+score_3)/3);

cout << "Hello Mr/Mrs " << fullName <<  endl;
cout << "You have recived " << score_1 << ", " << score_2 << ", and " << score_3 << " in\n";
cout << "three exams. Your average is " << examAverage << ".\n";

//Part_4
double rectWidth,
       rectLength,
       perimeter,
       area;

rectWidth = 12.34;
rectLength = 33.05;

area = rectWidth * rectLength;
perimeter = ((2 * rectWidth) + (2 * rectLength));

cout << setw(18) << setfill('-') << "\n";
cout << "|" << setw(15) << setfill(' ') << "" << "|\n";
cout << "|" << setw(16) << setfill(' ') << "|" << "" << "width=" << rectWidth << "\n";
cout << "|" << setw(15) << setfill(' ') << "" << "|\n";
cout << setw(18) << setfill('-') << "\n";
cout << setw(4) << setfill(' ') << "" << "lenth=" << rectLength << setw(4) << setfill(' ') << "\n";
cout << setw(7) << setfill(' ') << "" << "Area=" << area << "\n";
cout << setw(7) << setfill(' ') << "" << "Perimeter=" << perimeter << "\n";





return 0;
}

