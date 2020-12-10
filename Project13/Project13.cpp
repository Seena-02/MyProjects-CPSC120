#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h> 
using namespace std;
void fillArray(int a[]) {
	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 100 + 1;
		cout << a[i] << " ";
	}
}

int linearSearch(int a[], int n, int searchNumLinear) {
	for (int i = 0; i < n; i++)
		if (a[i] == searchNumLinear)
			return i;
	return -1;
}

int binarySearch(int a[], int l, int r, int searchNumBinary)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle 
		// itself 
		if (a[mid] == searchNumBinary)
			return mid;

		// If element is smaller than mid, then 
		// it can only be present in left subarray 
		if (a[mid] > searchNumBinary)
			return binarySearch(a, l, mid - 1, searchNumBinary);

		// Else the element can only be present 
		// in right subarray 
		return binarySearch(a, mid + 1, r, searchNumBinary);
	}

	// We reach here when element is not 
	// present in array 
	return -1;
}

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int a[], int n) 
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray  
	for (i = 0; i < n - 1; i++)
	{
		// Find the minimum element in unsorted array  
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < a[min_idx])
				min_idx = j;

		// Swap the found minimum element with the first element  
		swap(&a[min_idx], &a[i]);
	}
}
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place  
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

//print Array
void printArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
}



int main() {
	//display and fill the array with random numbers from 1 - 100
	int a[10];
	srand(time(NULL));
	cout << "Here is your array of 10 random numbers.\n";
	fillArray(a);

	//Menu
	int search;
	cout << "\n 1. Linear Search\n 2. Binary Search\n 3. Selection Sort\n 4. Bubble Sort\n 5. Display Data\n ";
	cout << "Choose your search/sort method (1,2,3,4,5)";
	cin >> search;

	//linear search
	if (search == 1) {
		int searchNumLinear;
		cout << "Enter a number you wish to search for (Linear Search): ";
		cin >> searchNumLinear;
		int n = sizeof(a) / sizeof(a[0]);
		int result = linearSearch(a, n, searchNumLinear);

		if (result == -1)
			cout << "Element is not present in array";
		else
			cout << "Element is present at index " << result << endl;
	}
	//binary search
	else if (search == 2) {
		int searchNumBinary;
		cout << "Enter a number you wish to search for (Binary Search): ";
		cin >> searchNumBinary;
		int z = sizeof(a) / sizeof(a[0]);
		sort(a, a + z);
		int result2 = binarySearch(a, 0, z - 1, searchNumBinary);

		if (result2 == -1)
			cout << "Element is not present in array";
		else
			cout << "Element is present at index " << result2 << endl;
	}
	//selection sort
	else if (search == 3) {
		int n = sizeof(a) / sizeof(a[0]);
		selectionSort(a, n);
		cout << "Sorted array: \n";
		printArray(a, n);
		return 0;

	
	}
	else if (search == 4) {
		int n = sizeof(a) / sizeof(a[0]);
		bubbleSort(a, n);
		cout << "Sorted array: \n";
		printArray(a, n);
		return 0;
	}

	return 0;


int main()
{
	int array[10], * max, * min, i; //pointer variables declared for max and min
	//cout << "Enter the number of elements in array\n";
	//cin >> size;
	cout << "Enter array elements\n";
	for (i = 0; i < 10; i++)
		cin >> array[i];
	max = array; //assigning max pointer to the address of the first element
	min = array; //assigning min pointer to the address of the first element
	for (i = 0; i < 10; i++)
	{
		//Finding the largest element in the array
		if (*(array + i) > *max)//check if the value stored at array+i is greater than value stored at max
			*max = *(array + i);
	}
	cout << "Maximum element in the array is " << *max << "\n";
	for (i = 0; i < 10; i++)
	{
		//Finding the smallest element in the array
		if (*(array + i) < *min)//check if the value stored at array+i is lesser than value stored at min
			*min = *(array + i);
	}
	cout << "Minimum element in the array is " << *min << "\n";
	return 0;
}

void swap(int* a, int* b) {
	int x = *a;
	*a = *b;
	*b = x;
}
int main() {
	int n1 = 0, n2 = 0;
	cout << "Please enter n1: ";
	cin >> n1;
	cout << "and n2: ";
	cin >> n2;


	swap(&n1, &n2);

	cout << "After swapping, n1=" << n1 << " and n2=" << n2 << "";

	return 0;
}
