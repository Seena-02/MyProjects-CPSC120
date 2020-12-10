#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

double a,
       b,
       c,
       p,
       pTotal,
       area;



cout << "Enter the value of the sides a, b, and c: ";
cin >> a >> b >> c;

p = ( (a + b + c) / 2);
pTotal = (p * (p - a) * (p - b) * (p - c));
area = sqrt(pTotal);

cout << "\tThe area of this triangle is: " << fixed << showpoint << setprecision(2) << area << endl;

cout << "\n";

double time,
       distance;
const double gravity = 9.81;

cout << "Let's find the hright of a bridge.\n";
cout << "Drop a coin and tell me how long\n";
cout << "it took to hit the water: ";
cin >> time;

distance = (gravity * pow(time, 2) ) / 2;

cout << "OK, the heigh of the bridge is\n";
cout << fixed << showpoint << setprecision(2) << distance << " meters\n";

cout << "\n";


int score;

cout << "Enter your score : ";
cin >> score;

	if(score > 0)
	{
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

	       else if(score >= 59)
                {
                cout << "\tYour grade is a \"F\"\n";
                }

	}

	

cout << "0-------------------60---------70-------------80-----------90-------------100\n";
cout << "          F                D            C            B              A        \n";








return 0;
}
