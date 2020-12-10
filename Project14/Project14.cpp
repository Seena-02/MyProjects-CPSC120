#include <iostream>
#include <string>

using namespace std;


void factNum(int num) {
	int fact = 1;
	for (int i = 1; i <= num; i++) {
		fact = fact * i;
	}
	cout << fact;
	//cout << total << endl;
}

int mult(int x, int y) {
	if (y == 0) {
		return 0;
	}
	return x + mult(x, y - 1);

}
void reverse(string str)
{
	if (str.size() == 0)
	{
		return;
	}
	reverse(str.substr(1));
	cout << str[0];
}
int main() {
	/*int num;
	int fact;
	cout << "Enter a num to find factorial: ";
	cin >> num;
	factNum(num);
	int x,y;
	cout << "Enter two ints to multiply together: ";
	cin >> x >> y;
	cout << mult(x, y);*/
	string a;
	cout << "Enter string: ";
	cin >> a;
	reverse(a);
	return 0;
	return 0;

}
