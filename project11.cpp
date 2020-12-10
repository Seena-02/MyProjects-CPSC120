#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <fstream>
#include <algorithm>
 using namespace std;
/*
 void copyData(string filename, string names[])
{
	string name;
	ifstream inFile; //read
	inFile.open(filename);

	for(int i = 0; inFile >> name; i++)
	{
	names[i] = name;
        }

}

void displaynames(string names[])
{
for (int i = 0; i < 10; i++) 
	cout << names[i] << endl;
}


 int main()
{
 string names[10];
 copyData("data.txt", names);
 //for (int i = 0; i < 10; i++) cout << names[i] << endl;
 displaynames(names);
 cout << endl;
 sort(names, names + 10);
 displaynames(names);


return 0;

}

void displayArray(int a[], int k)
{
 for (int i =0; i<k;i++)  cout << a[i]<<" ";
}

void findMaxMin(int a[], int k, int &max, int &min)
{
	max = a[0];
	min = a[0];
 for(int i = 1 ; i < k ; i++)
 {
  if (a[i] > max) max = a[i];
  if (a[i] < min) min = a[i];
 }
}

float findAverage(int a[], int k)
{
int total = 0;
float average;
for(int i = 0; i < k; i++ )
	{
	total += a[i];
	}
average = total / k;
return average;
}

void displayMaxMinAve(int max, int min, double average)
{
cout << "\nMaximum: " << max << endl;
cout << "Minimum: " << min << endl;
cout << "Average: " << average << endl;
}


int main()
{
 //display array a
 int a[7] = {9,11,15,7,20,30,26};
 cout << "This is the original array a\n";
 displayArray(a , 7 );
 //find the maximum and minimum data in array a
 int max, min;
 findMaxMin( a, 7, max, min);
 //find the average of data in array a
 float average;
 average = findAverage( a, 7);
 //display max, min, and average
 displayMaxMinAve(max, min, average);
 //sort and display the sorted array a
 sort( a, a+7);
 cout << "This is the sorted form of array a\n";
 displayArray(a, 7);
 //terminate program
 return 0;
}
*/


class Car
{
	private:
		int year;
		int speed = 0;
		string make;
		string model;
	public:
		void setYear(int);
		void setMake(string);
		void setModel(string);
		void setSpeed(int);

		int getYear();
		string getMake();
		string getModel();
		int getSpeed();

		void accelerate();
		void brake();
};

void Car::setYear(int y)
{
year = y;
	}
int Car::getYear()
{
return year;
	}

void Car::setMake(string m)
{
make = m;
	}
string Car::getMake()
{
return make;
	}

void Car::setModel(string mm)
{
model = mm;
	}
string Car::getModel()
{
return model;
	}

void Car::setSpeed(int s)
{
speed = s;
	}
int Car::getSpeed()
{
return speed;
	}

void Car::accelerate()
{
speed += 10;
}

void Car::brake()
{
speed -= 10;
}


int main()
{
Car myCar;
int myYear = 0;
string myMake;
string myModel;

cout << "Enter the year of the car.\n";
cin >> myYear;
cout << "Enter the make of the car.\n";
cin >> myMake;
cout << "Enter the model of the car.\n";
cin >> myModel;

myCar.setYear(myYear);
cout << "Year: " << myCar.getYear() << endl;
myCar.setMake(myMake);
cout << "Make: " << myCar.getMake() << endl;
myCar.setModel(myModel);
cout << "Model: " << myCar.getModel() << endl;


for(int i = 0; i < 23; i++)
{
myCar.accelerate();
cout << "Accelerating...The Speed is " << myCar.getSpeed() << endl;
}

for(int j = 0; j < 23; j++)
{
myCar.brake();
cout << "Decelerating...The Speed is " << myCar.getSpeed() << endl;
}

return 0;
}



