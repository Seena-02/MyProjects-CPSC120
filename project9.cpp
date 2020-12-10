#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;


void Read(int &x, int &y, int &z)
{
	cout << "Enter three int numbers: ";
	cin >> x >> y >> z;
}

int CompSum(int x, int y, int z)
{
	int Sum = x + y + z;
	return Sum;
}

void CompAve(int x, int y, int z, float &Average)
{
	Average = (x + y + z) / 3.0;

}

int Display(int x, int y, int z, int Sum, float Average)
{
	cout << "Sum -> " << x << "+" << y << "+" << z << " = " << Sum << endl;
	cout << "Average -> " << "(" << x << " + " << y << " + " << z << ")"<< "/3" << " = " << fixed << showpoint << setprecision(2) << Average << endl;	
	return 0;
}


int main()
{
 //declare identifiers
 int x, y, z, Sum; 
 float Average;
 //read three integer numbers into x , y, and z
 Read (x, y,z);
 //compute x+y
 Sum = CompSum(x,y,z);
 //compute the average of x, y, and z
 CompAve(x,y,z, Average);
 //display Sum and Average
 Display(x,y,z,Sum,Average);
 //terminate program
 
 return 0;
}



void ReadData(int &x, int &y, int &z)
{
	cout << "Enter 3 integer numbers: ";
	cin >> x >> y >> z;
}

int FindSumAve(int x, int y, int z, int &Sum, float &Average)
{
	Sum = x + y + z;
	Average = (x + y + z) / 3.0;
	return Sum;
	return Average;
}

void ShowSumAve(int Sum, float Average)
{
	cout << "\tSum = " << Sum << endl;
	cout << "\tAverage = " << Average << endl;
	cout << "\n\n";
}

void FindMaxMin(int &max, int &min, int x, int y, int z)
{
 if((x > y && x > z))
        {
         max = x;
        }
 if(x < y && x < z)
        {
         min = x;
        }
 if(y > x && y > z)
        {
        max = y;
        }
 if(y < x && y < z)
        {
        min = y;
        }
 if(z > x && z > y)
        {
        max = z;
        }
 if(z < x && z < y)
        {
        min = z;
        }
}

int ShowMaxMin(int max, int min)
{
 cout << "\tMaximum = " << max << endl;
 cout << "\tMinimum = " << min << endl;
 return 0;
}


int main()
{
 //declare identifiers
 int x, 
     y, 
     z, 
     max, 
     min;
 //read three integer numbers into x,y,z
 ReadData(x,y,z);
 //find and display the sum and average of x,y,z
 int Sum; 
 float Average;
 FindSumAve(x, y, z, Sum, Average);
 ShowSumAve(Sum, Average);
 //find and display the max. and min. of x,y,z
 FindMaxMin(max, min, x, y, z);
 ShowMaxMin(max, min);
 //terminate program

 return 0;
}






void DisplayMenu()
{
cout << setw(10) << setfill('-') << ""  <<"Practice Artihmetic" << setw(10) << setfill('-') << "\n";
cout << "\t1.  Addition\n";
cout << "\t2.  Subtraction\n";

}

void Select(int &choice)
{
 cout << "\n  Enter your choice (1/2): ";
 cin >> choice;
}

int PracticeAdd()
{

srand ( time(NULL) );

string con;

int answer;
int num1;
int num2;
int sum;
int numCorrect = 0;
int numWrong = 0;

do{

	num1 = rand() % 100 + 1;
 	num2 = rand() % 100 +1;
 	sum = num1 + num2;


	cout << "  " << num1 << " + " << num2 << " =? ";
	cin >> answer;

if(answer == sum)
        {
        cout << "\tCorrect\n";
        numCorrect += 1;
        }
else
        {
        cout << "\tWRONG\n";
        numWrong += 1;
        }

cout << "\t\tContinue? (y/n) ";
cin >> con;



}
while(con == "y");

if(con == "n")
{

	cout << "No. of Correct answers = " << numCorrect << endl;
	cout << "No. of Wrong answers = " << numWrong << endl;
}
return 0;
}






int PracticeSub()
{

srand ( time(NULL) );

string con;

int answer;
int num1;
int num2;
int diff;
int numCorrect = 0;
int numWrong = 0;

do{

        num1 = rand() % 100 + 1;
        num2 = rand() % 100 +1;
        diff = num1 - num2;


        cout << "  " << num1 << " - " << num2 << " =? ";
        cin >> answer;

if(answer == diff)
        {
        cout << "\tCorrect\n";
        numCorrect += 1;
        }
else
        {
        cout << "\tWRONG\n";
        numWrong += 1;
        }

cout << "\t\tContinue? (y/n) ";
cin >> con;



}
while(con == "y");

if(con == "n")
{

        cout << "No. of Correct answers = " << numCorrect << endl;
        cout << "No. of Wrong answers = " << numWrong << endl;
}
return 0;
}

int main()
{ 
 // display menu
 DisplayMenu();
 //select your choice
 int choice;
 Select( choice);
 // test your choice
 switch( choice )
 { 
   case 1: PracticeAdd();
	   break;
   case 2: PracticeSub();
	   break;
 }

 return 0;
}

