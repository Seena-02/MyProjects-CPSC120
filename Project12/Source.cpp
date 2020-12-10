#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

struct PersonInfo {
	string name,
		address,
		city;
};
struct Student {
	int studentID;
	PersonInfo pData;
	short year;
	double gpa;
};

void fillArray(Student Students[]) {
	for (int i = 0; i < 10 ; i++) {
		cout << "Student " << i<< " Enter your name: " << endl;
		getline(cin, Students[i].pData.name);
		cout << "Student " << i << " Enter your address " << endl;
		getline(cin, Students[i].pData.address);
		cout << "Student " << i << " Enter your city "  << endl;
		getline(cin, Students[i].pData.city);
		cout << "Student " << i << " Enter your studentID " << endl;
		cin >> Students[i].studentID;
		cout << "Student " << i << " Enter your graduation year " << endl;
		cin >> Students[i].year;
		cout << "Student " << i << " Enter your gpa " << endl;
		cin >> Students[i].gpa;
		cin.ignore(INT_MAX, '\n');
		cout << endl;
	}

}

void displayArray(Student Students[]) {
	for (int i = 0; i < 10; i++) {
		cout << "Student " << i << " Here is the information you entered: \n" << Students[i].pData.name << "\n"
			<< Students[i].pData.address << "\n" << Students[i].pData.city << "\n" << Students[i].studentID << "\n"
			<< Students[i].year << "\n" << Students[i].gpa << endl;

	}
	
}

int linearSearch(Student Students[], int size, string searchName) {
	for (int i = 0; i <= size; i++)
		if (searchName == Students[i].pData.name)
			return i;
			/*cout << "Student " << i << " here is your information \nName: " << Students[i].pData.name << "\nAddress: "
				<< Students[i].pData.address << "\nCity: " << Students[i].pData.city << "\nstudentID: " << Students[i].studentID << "\nYear: "
				<< Students[i].year << "\nGPA: " << Students[i].gpa << endl;*/
			return -1;
}

/*int binarySearch(Student Students[10], int size, string searchCity) {
	//cout << "Student, enter your city to pull up the information you enentered earlier. ";
	//cin >> searchCity;
	
	int low = 0;
	int high = size - 1;

	int mid;
	while (low <= high) {
		//mid = (low + high) / 2;
		mid = low + (high - low) / 2;

		if (searchCity == Students[mid].pData.city) {
			return mid;
		}
		else if (searchCity > Students[mid].pData.city) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;

}*/

	int binarySearch(string name[], int first, int last, string searchCity)
	{
			int mid ;
			if (last >= first) {
				mid = first+last / 2;

				// If the element is present at the middle 
				// itself 
				if (name[mid] == searchCity)
					return mid +1;

				// If element is smaller than mid, then 
				// it can only be present in left subarray 
				else if (name[mid] < searchCity)
					return binarySearch(name, mid + 1, last, searchCity);

				// Else the element can only be present 
				// in right subarray
				else {
					return binarySearch(name,  first, mid - 1, searchCity);
				}
			}

		// We reach here when element is not 
		// present in array 
		return -1;
	}

int main() {
	string searchName;
	string searchCity;
	Student Students[10];
	//	string name[10];
	fillArray(Students);
	displayArray(Students);

	cout << "Student, enter your name to pull up the information you enentered earlier. ";
	cin >> searchName;
	int result = linearSearch(Students, 10, searchName);
	if (result > 0) {
		cout << "Student " << result << " here is your information..... \nName: " << Students[result].pData.name << "\nAddress: "
			<< Students[result].pData.address << "\nCity: " << Students[result].pData.city << "\nstudentID: " << Students[result].studentID << "\nYear: "
			<< Students[result].year << "\nGPA: " << Students[result].gpa << endl;
	}
	else {
		cout << "The name " << searchName << " was not found." << endl;
	}

	cout << "Student, enter your city to pull up the information you enentered earlier. ";
	cin >> searchCity;
	string name[10] = {};
	for (int i = 0; i < 10; i++) {
		name[i] = Students[i].pData.city;
	}

	cout << "-------Unsorted Data-------" << endl;
	for (int i = 0; i < 10; i++) {
		cout << name[i] << endl;
	}
	int z = sizeof(name) / sizeof(name[0]); //Get the array size
	sort(name, name + z); //Use the start and end like this
	//int x = 10;
	int n = sizeof(name) / sizeof(name[0]);
	//int result2 = binarySearch(Students, 0, n - 1, searchNum);
	int result2 = binarySearch(name, 0, n-1, searchCity);
	if (result2 == -1) {
		cout << "The array was sorted and the Element is not present in array";
	}
	else cout << "The array was sorted and the Element is present at index " << result2;
	
	/*if (result2 > 0) {
		cout << "Student " << result2 << " here is your information..... \nName: " << Students[result2].pData.name << "\nAddress: "
			<< Students[result2].pData.address << "\nCity: " << Students[result2].pData.city << "\nstudentID: " << Students[result2].studentID << "\nYear: "
			<< Students[result2].year << "\nGPA: " << Students[result2].gpa << endl;
	}
	else {
		cout << "The studentID " << searchNum << " was not found." << endl;
	}*/
	return 0;
}