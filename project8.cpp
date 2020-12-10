#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
//Part_1
int size;
double bPound,
       cny,
       euro;

bPound = 0.77;
cny = 6.94;
euro = 0.87;

cout << "Enter the table size: ";
cin >> size;
cout << "  $    B.Pound   CNY    Euro   \n";
cout << setw(35) << setfill('-') << "\n";
for(int i = 1 ; i <= size ; i++ , bPound += 0.77, cny += 6.94, euro += 0.87)
{
	cout << " " << i << "\t" << fixed << setprecision(2) << bPound << "\t" << fixed << setprecision(2) << cny << "\t" << fixed << setprecision(2) << euro << endl;
}

cout << "\n";

//Part_2
int numExams,
    score;
double sum,
       average;
cout << "Let's compute your average.\n";
cout << "Enter the number of exams: ";
cin >> numExams;

for(int i = 0; i < numExams ; i++)
	{
	cout << "\tEnter your scores in exam_" << i + 1 << ": ";
	cin >> score;
	sum+=score;
	}
average = sum / numExams;

cout << "\t\tYour average is: " << fixed << showpoint << setprecision(2) << average << endl;;

cout << "\n";

//Part_3

int customers;

double total = 0,
       bill = 0;

int numSoda,
    numWater,
    numJuice,
    numHamburger,
    numTaco,
    numChips;

int chipChoice;

double soda = 1.10,
       water = 1.25,
       juice = 1.80,
       hamburger = 4.10,
       taco = 1.10,
       chips_8 = 0.89,
       chips_10 = 1.20,
       chips_12 = 1.40;


cout << "Enter the number of customers: ";
cin >> customers;

cout << setw(15) << setfill('-')  << "" << "Menu" << setw(15) << setfill('-') << "" <<" \n";
cout << "Drinks\n";
cout << "\tSoda" << setw(18) << setfill('.') << "" << fixed << showpoint << setprecision(2) << soda << endl;
cout << "\tWater" << setw(17) << setfill('.') << "" << fixed << showpoint << setprecision(2) << water << endl;
cout << "\tJuice" << setw(17) << setfill('.') << "" << fixed << showpoint << setprecision(2) << juice << endl;
cout << "Sandwiches\n";
cout << "\tHamburger" << setw(13) << setfill('.') << "" << fixed << showpoint << setprecision(2) << hamburger << endl;
cout << "\tTaco" << setw(18) << setfill('.') << "" << fixed << showpoint << setprecision(2) << taco << endl;
cout << "Chips\n";
cout << "\t8 OZ" << setw(18) << setfill('.') << "" << fixed << showpoint << setprecision(2) << chips_8 << endl;
cout << "\t10 OZ" << setw(17) << setfill('.') << "" << fixed << showpoint << setprecision(2) << chips_10 << endl;
cout << "\t12 OZ" << setw(17) << setfill('.') << "" << fixed << showpoint << setprecision(2) << chips_12 << endl;

for(int i = 0; i < customers; i++)
	{
	cout << "Customer " << i+1 << ":\n";
	cout << "  How many Soda, Water, and Juice bottles?: ";
	cin >> numSoda >> numWater >> numJuice; 
	cout << "  How many Hamburger(s) and Taco(s)?: ";
	cin >> numHamburger >> numTaco;
	cout << "  How many chips? ";
	cin >> numChips;
	cout << "  What size of chips? (8/10/12): ";
	cin >> chipChoice;

	switch(chipChoice)
	{
		case 8:

		bill = (numSoda * soda) + (numWater * water) + (numJuice * juice) + (numHamburger * hamburger) + (numTaco * taco) + (numChips * chips_8);	
		cout << "    Total bill: " << bill << endl;

		break;

		case 10:

		bill = (numSoda * soda) + (numWater * water) + (numJuice * juice) + (numHamburger * hamburger) + (numTaco * taco) + (numChips * chips_10);
                cout << "    Total bill: " << bill << endl;

		break;
		
		case 12:
		
		bill = (numSoda * soda) + (numWater * water) + (numJuice * juice) + (numHamburger * hamburger) + (numTaco * taco) + (numChips * chips_12);
                cout << "    Total bill: " << bill << endl;

	
		break;

	
	}

total += bill;
}


cout << "\n\nWOW! We have collected a total of $" << total << endl;



















return 0;
}
