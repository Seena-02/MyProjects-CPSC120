//Project_4
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
//Part_1 
double width,
       length,
       area,
       perimeter;

cout << "\t" << setw(16) << setfill('-') << "" << "\n";
cout << "\t" << "|" << setw(14) << setfill(' ') << "" << "|" << "\n";
cout << "\t" << "|" << setw(14) << setfill(' ') << "" << "|" << " width" << "\n";
cout << "\t" << "|" << setw(14) << setfill(' ') << "" << "|" << "\n";
cout << "\t" << setw(16) << setfill('-') << "" << "\n";
cout << "\t" << setw(5) << setfill(' ') << "" << "length" << "\n";

cout << "Enter the measure of the width: ";
cin >> width; 
cout << "Enter the measure of the length: ";
cin >> length;

area = length * width;
perimeter = (2 * length) + (2 * width);

cout << "\tArea = " << fixed << showpoint << setprecision(2) << area << endl;
cout << "\tPerimeter = " << fixed << showpoint << setprecision(2) << perimeter << endl;

cout << "\n";

//Part_2
int num1,
    num2,
    total,
    average;

cout << "Enter two integer numbers: ";
cin >> num1 >> num2;

total = num1 + num2;
average = total / 2;

cout << "\t" << num1 << " + " << num2 << " = " << total << endl;
cout << "\tthe total of " << num1 << " and " << num2 << " is " << total << endl;
cout << "\tand their average is " << average << endl;

cout << "\n";

//Part_3
int exam_1,
    exam_2,
    exam_3,
    eAverage;

cout << "I can compute your midterm’s average, try me\n";
cout << "\tEnter your scores in three exams: ";
cin >> exam_1 >> exam_2 >> exam_3;

eAverage = ((exam_1 + exam_2 + exam_3)/3);

cout << "\t\tYour average is: " << eAverage << endl;

cout << "\n";

//Part_4
string firstName,
       lastName;
char intital;

cout << "Give me your name, I will send you a birthday card\n";
cout << "\tWhat is your first name: ";
cin >> firstName;
cout << "\tWhat is your middle intital: ";
cin >> intital;
cout << "\tWhat is your last name: ";
cin >> lastName;

cout << setw(7) << setfill('<') << "" << "Happy Birthday " << firstName << " " << intital << ". " << lastName << setw(7) << setfill('>') << "" << "\n";


cout << "\n";

//Part_5
double drinks,
       chips,
       nuts,
       totalBill;

int numDrinks,
    numChips,
    numNuts;

drinks = 1.25;
chips = 1.09;
nuts = 1.18;

cout << setw(10) << setfill('-') << "" << "MENU" << setw(10) << setfill('-') << "" << endl;
cout << "Drinks" << setw(14) << setfill('.') << "" << drinks << endl;
cout << "Chips" << setw(15) << setfill('.') << "" << chips << endl;
cout << "Nuts" << setw(16) << setfill('.') << "" << nuts  << endl;

cout << setw(3) << setfill(' ') << "" << "How many drinks? ";
cin >> numDrinks;
cout << setw(3) << setfill(' ') << "" << "How many chips? ";
cin >> numChips;
cout << setw(3) << setfill(' ') << "" << "How many nuts? ";
cin >> numNuts;

totalBill = (drinks * numDrinks) + (chips * numChips) + (nuts * numNuts);

cout << "\tYour bill = $" << fixed << showpoint << setprecision(2) << totalBill << endl;

cout << "\n";


//Part_6
double fahrenheit,
       celsius;

cout << "I can convert temperature from degrees Fahrenheit to degrees Celsius. Try me\n";
cout << "\tEnter a temperature in Fahrenheit:";
cin >> fahrenheit;

celsius = (5 * (fahrenheit - 32)) / 9;

cout << "\t" << fahrenheit << " Fahrenheit is " << fixed << showpoint << setprecision(2) << celsius << " Celsius\n";



return 0;
}
