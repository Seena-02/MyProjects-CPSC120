#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
//Part_1
int exam_1,
    exam_2,
    exam_3,
    eAverage;

cout << "Enter your scores in three exams: ";
cin >> exam_1 >> exam_2 >> exam_3;

eAverage = ((exam_1 + exam_2 + exam_3)/3);

cout << "Your average is: " << eAverage << endl;

cout << "\n";

//Part_2
double shirts,
       pants,
       socks,
       totalCost;

int numberShirts,
    numberPants,
    numberSocks;



shirts = 33.15;
pants = 75.99;
socks = 5.15;

cout << setw(10) << setfill('.') << "" << "Target Store" << setw(10) << setfill('.') << "" << endl;
cout << "Shirts" << setw(18) << setfill('.') << "" << shirts << endl;
cout << "Pants" << setw(19) << setfill('.') << "" << pants << endl;
cout << "Socks" << setw(20) << setfill('.') << "" << socks << endl;

cout << "\tEnter the number of shirts: ";
cin >> numberShirts;
cout << "\tEnter the number of pants: ";
cin >> numberPants;
cout << "\tEnter the number of socks: ";
cin >> numberSocks;

totalCost = (shirts * numberShirts) + (pants * numberPants) + (socks * numberSocks);

cout << "\t\tYour total bill = $" << totalCost << endl;

cout << "\n";

//Part_3
double pennies,
       nickels,
       dimes,
       quarters,
       totalCoins;

int numberPennies,
    numberNickels,
    numberDimes,
    numberQuarters;

pennies = 0.01;
nickels = 0.05;
dimes = 0.10;
quarters = 0.25;

cout << "Check your pockets and tell me: \n";
cout << "\tHow many pennies do you have? ";
cin >> numberPennies;
cout << "\tHow many nickels do you have? ";
cin >> numberNickels;
cout << "\tHow many dimes do you have? ";
cin >> numberDimes;
cout << "\tHow many quarters do you have? ";
cin >> numberQuarters;

totalCoins = (pennies * numberPennies) + (nickels * numberNickels) + (dimes * numberDimes) + (quarters * numberQuarters);

cout << "\t\tYou have a total of $" << totalCoins << endl;

cout << "\n";

//Part_4
string firstName,
       lastName;

int userAge;

cout << "What is your first name? ";
cin >> firstName;
cout << "What is your last name? ";
cin >> lastName;
cout << "How old are you " << firstName << " " << lastName << "? ";
cin >> userAge;

cout << "\tHello " << firstName << " " << lastName << endl;
cout << "\tAt age " << userAge << " " << "you are the governor of California.\n";
cout << "\tGood Luck!\n";
cout << "\tStudents in CS-120 class" << endl;

cout << "\n";

//Part_5
string yourName,
       mathGrade,
       computerGrade,
       biologyGrade;

cout << "Enter your name: ";
cin >> yourName;
cout << "Enter your grade in Math course: ";
cin >> mathGrade;
cout << "Enter your grade in Computer course: ";
cin >> computerGrade;
cout << "Enter your grade in Biology course: ";
cin >> biologyGrade;

cout << "\tGeorge, this is your grade report:\n";
cout << "\tCOURSE" << setw(23) << setfill(' ') << "" << "GRADE\n";
cout << "\t" << setw(34) << setfill('-') << "" << endl;

cout << "\tMathematics" << setw(22) << setfill('.') << "" << mathGrade << endl;
cout << "\tComputer" << setw(25) << setfill('.') << "" << computerGrade << endl;
cout << "\tBiology" << setw(26) << setfill('.') << "" << biologyGrade << endl;



return 0;	
}
