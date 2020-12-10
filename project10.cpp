#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
 using namespace std;
int main()
{
 cout << "Enter five Numbers: ";
 int a[5];
 double total = 0;
 for(int i = 0; i < 5 ; i++)
 {
 cin >> a[i];
 total += a[i];
 }
 int min = a[0],
     max = a[0];
 for (int i = 1; i < 5; i++)
 {
	if (a[i] > max) max = a[i];
	if (a[i] < min) min = a[i];
 }
 cout << "The total is " << total << endl;
 cout << "Max and Min are " << max << ", " <<  min << "respectively.\n";

 cout << "This is the bar graph of array 'a' \n";
for(int i = 0; i < 5; i++)
{
	cout << a[i] << ": ";
	for(int j = 0; j < a[i]; j++) cout << "*";
	cout << endl;
}

 return 0;
}


int main()
 {
 int a[10];
 srand ( time(NULL) );
 // assign 10 random integers between 1 and 100 to array a
 // Display array a
 for(int j = 0; j < 10; j++)
 {
 a[j] = rand() % 100 + 1;
 cout << j+1 << ". " << a[j] << endl;
 }
 //Find the maximum and minimum numbers in array a
 int max = a[0], 
     min = a[0];
 for (int j = 1; j < 10; j++)
 {
        if (a[j] > max) max = a[j];
        if (a[j] < min) min = a[j];
 }
 
 // Show the max and min values.
 cout << "The max is " << max << " and the min is "<< min << endl;
 // find the average of numbers in array a
 float Average; 
 int total;
 total = 0;
 for(int j = 0; j < 10; j++)
 {
 total = total + a[j];
 }
 cout << "The total of array 'a' is " << total << endl;
 Average = total / 10.0;
 cout << "The average of array 'a' is " << fixed << showpoint << setprecision(2) << Average << endl;
 // display numbers in array a whose value is above average
 for(int j = 0; j < 10; j++)
 {
 	if(a[j] > Average)
 		{
  		cout << a[j] << " is larger than the average value of " << showpoint << setprecision(2) << Average << endl;
 		}

 }
 //terminate program
 return 0;
 }


int main()
{
string Future[5] = {"Study more" , "Go to a movie" , "Stay Home" , "Call friend" , "Go to Las Vegas"};
srand ( time(NULL) );
char con;
do{
	int i = 0;
	i = rand() % 5 + 0;
	cout << Future[i] << "\n";
	
	cout << "\tContinue? (y/n)";
	cin >> con;
	} 
while(con == 'y');

if(con == 'n')
cout << "Program Done. Thank You!\n";

return 0;

}
