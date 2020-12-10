#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
//Part_1
int choice;

double exam1,
       exam2,
       exam3,
       exam4,
       mAverage,
       cAverage,
       pAverage;
	
cout << setw(9) << setfill('-') << "" << "Student's Evaluation Center" << setw(9) << setfill('-') << "\n";
cout << "1. Compute 2 Math exams average\n";
cout << "2. Compute 3 Computer Sc. exams average\n";
cout << "3. Compute 4 Physics exams average\n";
cout << "\n";

cout << "Please enter your choice: ";
cin >> choice;

	if (choice == 1)
		{
		cout << "Enter your 2 Math exam scores: ";
		cin >> exam1 >> exam2;
		
		mAverage = ((exam1 + exam2)/2);
		cout << "Your average is " << fixed << showpoint << setprecision(2) << mAverage << endl;
			}	

	else if(choice == 2)
		{	
		cout << "Enter your 3 computer science exam scores: ";
        	cin >> exam1 >> exam2 >> exam3;

        	cAverage = ((exam1 + exam2 + exam3)/3);
        	cout << "Your average is " << fixed << showpoint << setprecision(2) << cAverage << endl;
			}

	else if (choice == 3)
		{	
		cout << "Enter your 4 Physics exam scores: ";
        	cin >> exam1 >> exam2 >> exam3 >> exam4;

        	pAverage = ((exam1 + exam2 + exam3 + exam4)/4);
        	cout << "Your average is " << fixed << showpoint << setprecision(2) << pAverage << endl;
			}		
	
cout << "\n";

//Part_2

int age;

string clubChoice,
       gender;



cout << setw(5) << setfill(' ') << "" <<  setw(9) << setfill('-') << "" << "Club Requirements" << setw(9) << setfill('-') << "\n";
cout << "a. Sigma Club(you must be a male and over 21)\n";
cout << "b. Omega Club(you must be female and a teenager)\n";
cout << "c. Kapa Club(you must be male or female and over 30)\n\n";

cout << "Which club do you want to be a member of (a,b,c)?";
cin >> clubChoice;
	if (clubChoice == "a")
	{
		{
		cout << "\tEnter your gender: ";
		cin >> gender;
		cout << "\tEnter your age: ";
		cin >> age;
			}

		if (gender == "M" && age >= 21)
			{
			cout << "\tCongrats! You are qualified to be a member of Sigma club\n";
				}

			else
				{
				cout <<	"\tSorry! You are not qualified to be a member of Sigma club\n";
	
				}
	}
	if (clubChoice == "b")
	{	
		{
		cout << "\tEnter your gender: ";
                cin >> gender;
                cout << "\tEnter your age: ";
                cin >> age;
			}

		if (gender == "F" && age >= 13 && age <= 19)
			{
			
			cout << "\tCongrats! You are qualified to be a member of Omega club\n";
                                }

                        else
                                {
                                cout << "\tSorry! You are not qualified to be a member of Omega club\n";
                                        }
	}
	if (clubChoice == "c")
	{
		{
		cout << "\tEnter your gender: ";
                cin >> gender;
                cout << "\tEnter your age: ";
                cin >> age;
			}
		if (gender == "F" && age >= 30)
			{
			cout << "\tCongrats! You are qualified to be a member of Kapa club\n";
                                }

                        else
                                {
                                cout << "\tSorry! You are not qualified to be a member of Kapa club\n";
                                        }
	}



//Part_3

int numDrinks;
int numSandwiches;
double drinkTotal;
double sandwichTotal;
double totalBill;

const double soda = 1.35;
const double water = 1.10;
const double sand_10 = 3.45;
const double sand_12 = 3.85;

char drink;
string sandwichSize;

cout << setw(10) << setfill('-') << "" << "7-11 Convenient Store" << setw(10) << setfill('-') << "\n";
cout << "Drinks\n";
cout << setw(3) << setfill(' ') << "" << "Soda(S)" << setw(26) << setfill('.') << "" << soda << endl;
cout << setw(3) << setfill(' ') << "" << "Water(W)" << setw(25) << setfill('.') << "" << fixed << showpoint << setprecision(2) << water << endl;
cout << "Sandwiches\n";
cout << setw(3) << setfill(' ') << "" << "10 inches" << setw(24) << setfill('.') << "" << sand_10 << endl;
cout << setw(3) << setfill(' ') << "" << "12 inches" << setw(24) << setfill('.') << "" << sand_12 << endl;

cout << "How many Drinks? ";
cin >> numDrinks;
cout << "   What kind of drink(S=Soda, W=Water)";
cin >> drink;
	if(drink == 'S')
	{
	drinkTotal = numDrinks * soda;
	}
	else if(drink == 'W')
	{
	drinkTotal = numDrinks * water;
	}
cout << "How many Sandwiches? ";
cin >> numSandwiches;
cout << "  What size of Sandiwches (10/12 inches)? ";
cin >> sandwichSize;
	if(sandwichSize == "10")
	{
	sandwichTotal = numSandwiches * sand_10;
	}
	else if (sandwichSize == "12")
	{
	sandwichTotal = numSandwiches * sand_12;
	}

totalBill = drinkTotal + sandwichTotal;

cout << "Your total bill = " << fixed << showpoint << setprecision(2) << totalBill << endl; 

//Part_4

int score;

cout << "Enter your score : ";
cin >> score;
	if(score >= 90)
		{
		cout << "\tYour grade is a \"A\"\n";
		}
	else if(score >= 80)
		{	
		cout << "\tYour grade is a \"B\"\n";
		}
	else if(score >= 70)
        	{
        	cout << "\tYour grade is a \"C\"\n";
        	}
	else if(score >= 60)
		{
		cout << "\tYour grade is a \"D\"\n";
		}
	else if(score <= 59)
		{
		cout << "\tYour grade is a \"F\"\n";
		}

cout << "0-------------------60---------70-------------80-----------90-------------100\n";
cout << "          F                D            C            B              A        \n";

return 0;
}
