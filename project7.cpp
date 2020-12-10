#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <string.h>

using namespace std;

int main()
{
//Part_1

char choice;

cout << setw(20) << setfill('-') << "" << "MENU" << setw(20) << setfill('-') << "\n";
cout << "a. Compute area of a rectangle\n";
cout << "b. Compute area of a triangle (area and height are given)\n";
cout << "c. Compute area of a triangle (three sides are given)\n";
cout << "d. Compute area of a trapezoid\n";

cout << "\tEnter your choice: ";
cin >> choice;


double rectLength,
       rectWidth,
       rectArea;

double triBase,
       triHeight,
       triArea;

double a,
       b,
       c,
       p,
       pTotal,
       pArea;

double aTrap,
       bTrap,
       hTrap,
       trapArea;

switch(choice)
{
	case 'a':
		cout << setw(21) << setfill('-') << "\n";
		cout << "|" << setw(19) << setfill(' ') << "|" << "\n";
		cout << "|" << setw(19) << setfill(' ') << "|" << " Width"  << "\n";
		cout << "|" << setw(19) << setfill(' ') << "|" << "\n";
		cout << setw(21) << setfill('-') << "\n";
		cout << setw(14) << setfill(' ') << "Length\n";

		cout << "Enter the values of the width and length: ";
		cin >> rectWidth >> rectLength;

		rectArea = rectWidth * rectLength;
		cout << "Area = " << fixed << showpoint << setprecision(2) << rectArea << endl;
			
		break;

	case 'b':
		
		cout << "     /|\\\n";
		cout << "    / | \\\n";
		cout << "   /  |  \\\n";
		cout << "  /   |h  \\\n";
		cout << " /    |    \\\n";
		cout << "/     |     \\\n";
		cout << "-------------\n";
		cout << "      C       \n";

		cout << "Enter values for C and h: ";
		cin >> triBase >> triHeight;	
		
		triArea = (triBase * triHeight)/2;
		cout << "\tArea = " << fixed << showpoint << setprecision(2) << triArea << endl;
		
		break;

	case 'c':
		cout << "     / \\\n";
                cout << "    /   \\\n";
                cout << "   /     \\\n";
                cout << " a/       \\b\n";
                cout << " /         \\\n";
                cout << "/           \\\n";
                cout << "-------------\n";
                cout << "      c       \n";

		cout << "Enter the values of a, b, and c: ";
		cin >> a >> b >> c;
		
		p = ((a + b + c) / 2);	
		pTotal = p * (p - a) * (p - b) * (p - c);
		pArea = sqrt(pTotal);

		cout << "\tArea = " << fixed << showpoint << setprecision(2) <<  pArea << endl;		
		
		break;

	
	case 'd':
		
		cout << "       a     \n ";
		cout << "   -------   \n";
		cout << "   /|      \\ \n";
		cout << "  / |h      \\ \n";
		cout << " /  |        \\ \n";
		cout << " -------------\n";
		cout << "       b       \n";

		cout << "Enter the values of a, b, and h: ";
		cin >> aTrap >> bTrap >> hTrap;

		trapArea = hTrap * ((aTrap + bTrap) / 2);
		cout << "Area = " << fixed << showpoint << setprecision(2) << trapArea << endl;
		
		break;
}	


//Part_2

double adultMale,
       adultFemale,
       teenMale,
       teenFemale,
       children;

int age;
char gender;

adultMale = 200.20;
adultFemale = 250.50;
teenMale = 210.20;
teenFemale = 150.50;
children = 100.25;


cout << setw(15) << setfill('-') << "" << "ACE CLUB FEES" << setw(15) << setfill('-') << "\n";
cout << "Adult\n";
cout << "    Male" << setw(28) << setfill('.') << "" << fixed << showpoint << setprecision(2) << adultMale << endl;
cout << "    Female" << setw(26) << setfill('.') << "" << fixed << showpoint << setprecision(2) << adultFemale << endl;
cout << "Teenagers\n";
cout << "    Male" << setw(28) << setfill('.') << "" << fixed << showpoint << setprecision(2) << teenMale << endl;
cout << "    Female" << setw(26) << setfill('.') << "" << fixed << showpoint << setprecision(2) << teenFemale << endl;
cout << "Children\n";
cout << "    All" << setw(29) << setfill('.') << "" << fixed << showpoint << setprecision(2) << children << endl;;

cout << "\tEnter your age: ";
cin >> age;
cout << "\tEnter your gender(m/f): ";
cin >> gender; 


switch(gender)
{
	case 'm':
		if(age >= 18)
			{
				cout << "Your membership is $" << adultMale << endl;
			}
		else if(age >= 13  && age <= 17)
			{
				cout << "Your memership is $" << teenMale << endl;
			}

		else
			{
				cout << "Your memerhsip is $" << children << endl;
			}

	break;

	case 'f':
		if(age >= 18)
                        {
                                cout << "Your membership is $" << adultFemale << endl;
                        }
                else if(age >= 13  && age <= 17)
                        {
                                cout << "Your memership is $" << teenFemale << endl;
                        }

                else
                        {
                                cout << "Your memerhsip is $" << children << endl;
                        }

}


//Part_3


string date;

int userMonth,
    userDay,
    userYear;

cout << "Enter today's date(mm/dd/yyyy): ";
getline (cin, date);

string month = date.substr(0, 2);
string day = date.substr(3, 2);
string year = date.substr(6, 4);

userMonth = stoi(month);
userDay = stoi(day);
userYear = stoi(year);

switch(userMonth)
{
	case 1:
	  {
		if(userMonth == 1)
		{
			if((userDay == 1 || userDay == 21) || (userDay == 31))
				{
				cout << "Today is" << " Jan " << userDay << "st, " << userYear << endl;
				}
			else if(userDay == 2 || userDay == 22)
				{
				cout << "Today is" << " Jan " << userDay << "nd, " << userYear << endl;
				}
			else if(userDay == 3 || userDay == 23)
                                {
                                cout << "Today is" << " Jan " << userDay << "rd, " << userYear << endl;
                                }
			else if( (userDay >= 4 || userDay <= 20) || (userDay >= 24 || userDay <= 30))
                                {
                                cout << "Today is" << " Jan " << userDay << "th, " << userYear << endl;
                                }
			

	  	}


	 }

		break;


	case 2:
          {
                if(userMonth == 2)
                {
                        if((userDay == 1 || userDay == 21) || (userDay == 31))
                                {
                                cout << "Today is" << " Feb " << userDay << "st, " << userYear << endl;
                                }
                        else if(userDay == 2 || userDay == 22)
                                {
                                cout << "Today is" << " Feb " << userDay << "nd, " << userYear << endl;
                                }
                        else if(userDay == 3 || userDay == 23)
                                {
                                cout << "Today is" << " Feb " << userDay << "rd, " << userYear << endl;
                                }
                        else if( (userDay >= 4 || userDay <= 20) || (userDay >= 24 || userDay <= 30))
                                {
                                cout << "Today is" << " Feb " << userDay << "th, " << userYear << endl;
                                }


                }


         }      

                break;
	
	
	case 3:
          {
                if(userMonth == 3)
                {
                        if((userDay == 1 || userDay == 21) || (userDay == 31))
                                {
                                cout << "Today is" << " Mar " << userDay << "st, " << userYear << endl;
                                }
                        else if(userDay == 2 || userDay == 22)
                                {
                                cout << "Today is" << " Mar " << userDay << "nd, " << userYear << endl;
                                }
                        else if(userDay == 3 || userDay == 23)
                                {
                                cout << "Today is" << " Mar " << userDay << "rd, " << userYear << endl;
                                }
                        else if( (userDay >= 4 || userDay <= 20) || (userDay >= 24 || userDay <= 30))
                                {
                                cout << "Today is" << " Mar " << userDay << "th, " << userYear << endl;
                                }


                }


         }      

                break;

	

	case 4:
          {
                if(userMonth == 4)
                {
                        if((userDay == 1 || userDay == 21) || (userDay == 31))
                                {
                                cout << "Today is" << " Apr " << userDay << "st, " << userYear << endl;
                                }
                        else if(userDay == 2 || userDay == 22)
                                {
                                cout << "Today is" << " Apr " << userDay << "nd, " << userYear << endl;
                                }
                        else if(userDay == 3 || userDay == 23)
                                {
                                cout << "Today is" << " Apr " << userDay << "rd, " << userYear << endl;
                                }
                        else if( (userDay >= 4 || userDay <= 20) || (userDay >= 24 || userDay <= 30))
                                {
                                cout << "Today is" << " Apr " << userDay << "th, " << userYear << endl;
                                }


                }


         }      

                break;


	case 5:
          {
                if(userMonth == 5)
                {
                        if((userDay == 1 || userDay == 21) || (userDay == 31))
                                {
                                cout << "Today is" << " May " << userDay << "st, " << userYear << endl;
                                }
                        else if(userDay == 2 || userDay == 22)
                                {
                                cout << "Today is" << " May " << userDay << "nd, " << userYear << endl;
                                }
                        else if(userDay == 3 || userDay == 23)
                                {
                                cout << "Today is" << " May " << userDay << "rd, " << userYear << endl;
                                }
                        else if( (userDay >= 4 || userDay <= 20) || (userDay >= 24 || userDay <= 30))
                                {
                                cout << "Today is" << " May " << userDay << "th, " << userYear << endl;
                                }


                }


         }      

                break;

	

	case 6:
          {
                if(userMonth == 6)
                {
                        if((userDay == 1 || userDay == 21) || (userDay == 31))
                                {
                                cout << "Today is" << " Jun " << userDay << "st, " << userYear << endl;
                                }
                        else if(userDay == 2 || userDay == 22)
                                {
                                cout << "Today is" << " Jun " << userDay << "nd, " << userYear << endl;
                                }
                        else if(userDay == 3 || userDay == 23)
                                {
                                cout << "Today is" << " Jun " << userDay << "rd, " << userYear << endl;
                                }
                        else if( (userDay >= 4 || userDay <= 20) || (userDay >= 24 || userDay <= 30))
                                {
                                cout << "Today is" << " Jun " << userDay << "th, " << userYear << endl;
                                }


                }


         }      

                break;

	
	case 7:
          {
                if(userMonth == 7)
                {
                        if((userDay == 1 || userDay == 21) || (userDay == 31))
                                {
                                cout << "Today is" << " Jul " << userDay << "st, " << userYear << endl;
                                }
                        else if(userDay == 2 || userDay == 22)
                                {
                                cout << "Today is" << " Jul " << userDay << "nd, " << userYear << endl;
                                }
                        else if(userDay == 3 || userDay == 23)
                                {
                                cout << "Today is" << " Jul " << userDay << "rd, " << userYear << endl;
                                }
                        else if( (userDay >= 4 || userDay <= 20) || (userDay >= 24 || userDay <= 30))
                                {
                                cout << "Today is" << " Jul " << userDay << "th, " << userYear << endl;
                                }


                }


         }      

                break;


	
	case 8:
          {
                if(userMonth == 8)
                {
                        if((userDay == 1 || userDay == 21) || (userDay == 31))
                                {
                                cout << "Today is" << " Aug " << userDay << "st, " << userYear << endl;
                                }
                        else if(userDay == 2 || userDay == 22)
                                {
                                cout << "Today is" << " Aug " << userDay << "nd, " << userYear << endl;
                                }
                        else if(userDay == 3 || userDay == 23)
                                {
                                cout << "Today is" << " Aug " << userDay << "rd, " << userYear << endl;
                                }
                        else if( (userDay >= 4 || userDay <= 20) || (userDay >= 24 || userDay <= 30))
                                {
                                cout << "Today is" << " Aug " << userDay << "th, " << userYear << endl;
                                }


                }


         }      

                break;


	
	case 9:
          {
                if(userMonth == 9)
                {
                        if((userDay == 1 || userDay == 21) || (userDay == 31))
                                {
                                cout << "Today is" << " Sep " << userDay << "st, " << userYear << endl;
                                }
                        else if(userDay == 2 || userDay == 22)
                                {
                                cout << "Today is" << " Sep " << userDay << "nd, " << userYear << endl;
                                }
                        else if(userDay == 3 || userDay == 23)
                                {
                                cout << "Today is" << " Sep " << userDay << "rd, " << userYear << endl;
                                }
                        else if( (userDay >= 4 || userDay <= 20) || (userDay >= 24 || userDay <= 30))
                                {
                                cout << "Today is" << " Sep " << userDay << "th, " << userYear << endl;
                                }


                }


         }      

                break;




	case 10:
          {
                if(userMonth == 10)
                {
                        if((userDay == 1 || userDay == 21) && (userDay || 31))
                                {
                                cout << "Today is" << " Oct " << userDay << "st, " << userYear << endl;
                                }
                        else if(userDay == 2 || userDay == 22)
                                {
                                cout << "Today is" << " Oct " << userDay << "nd, " << userYear << endl;
                                }
                        else if(userDay == 3 || userDay == 23)
                                {
                                cout << "Today is" << " Oct " << userDay << "rd, " << userYear << endl;
                                }
                        else if( (userDay >= 4 || userDay <= 20) || (userDay >= 24 || userDay <= 30))
                                {
                                cout << "Today is" << " Oct " << userDay << "th, " << userYear << endl;
                                }


                }


         }      

                break;


	case 11:
          {
                if(userMonth == 11)
                {
                        if((userDay == 1 || userDay == 21) || (userDay == 31))
                                {
                                cout << "Today is" << " Nov " << userDay << "st, " << userYear << endl;
                                }
                        else if(userDay == 2 || userDay == 22)
                                {
                                cout << "Today is" << " Nov " << userDay << "nd, " << userYear << endl;
                                }
                        else if(userDay == 3 || userDay == 23)
                                {
                                cout << "Today is" << " Nov " << userDay << "rd, " << userYear << endl;
                                }
                        else if( (userDay >= 4 || userDay <= 20) || (userDay >= 24 || userDay <= 30))
                                {
                                cout << "Today is" << " Nov " << userDay << "th, " << userYear << endl;
                                }


                }


         }      

                break;




	case 12:
          {
                if(userMonth == 12)
                {
                        if((userDay == 1 || userDay == 21) || (userDay == 31))
                                {
                                cout << "Today is" << " Dec " << userDay << "st, " << userYear << endl;
                                }
                        else if(userDay == 2 || userDay == 22)
                                {
                                cout << "Today is" << " Dec " << userDay << "nd, " << userYear << endl;
                                }
                        else if(userDay == 3 || userDay == 23)
                                {
                                cout << "Today is" << " Dec " << userDay << "rd, " << userYear << endl;
                                }
                        else if( (userDay >= 4 || userDay <= 20) || (userDay >= 24 || userDay <= 30))
                                {
                                cout << "Today is" << " Dec " << userDay << "th, " << userYear << endl;
                                }


                }


         }      

                break;





}



//Part_4


for(int i = 5; i <= 50 ; i+=5)
	{
	cout << i << " ";
	}

cout << "\n";

for(int j = 10; j <= 100 ; j+=10)
	{
	cout << j << " ";
	}

cout << "\n";

for(int k = 20; k >= 2 ; k-=2)
	{
	cout << k << " ";
	}

cout << "\n";

for(int l = 65 ; l <= 81 ; l+=2)
	{
	cout << (char)l << " ";
	}

cout << "\n";

for(int m = 114; m >= 109 ; m-=1)
	{
	cout << (char)m << " ";
	}


return 0;
}
