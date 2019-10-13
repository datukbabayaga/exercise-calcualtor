// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int display() 
{
	cout << "Menu\n1.Enter 1 for addition\n2.Enter 2 for subtraction\n3.Enter  3 for multiplication\n4.Enter 4 for division\n";
	int n;
	cin >> n;
	return n;
}
int addition(int  n1, int  n2) {
	return (n1 + n2);
}
int  subtraction(int  n1, int  n2) {
	return (n1 - n2);
}
int  multiply(int n1, int  n2) {
	return(n1 * n2);
}
double division(double n1, double n2) {
	return (n1 / n2);
}


int main()
{
	int n = display();
	double  n1 = 0, n2 = 0;
	cout << "enter two integer numbers\n";
	cin >> n1 >> n2;
	switch (n) {

	case 1: {
		cout << "Addition of numbers " << n1 << " and " << n2 << "=" << addition(n1, n2);
		break;
	}
	case 2: {
		cout << "Subtraction of numbers " << n1 << " and " << n2 << "=" << subtraction(n1, n2);
		break;
	}
	case 3: {
		cout << "Multiplication of numbers " << n1 << " and " << n2 << "=" << multiply(n1, n2);
		break;
	}
	case 4: {
		cout << "Division of numbers " << n1 << " and " << n2 << "=" << division(n1, n2);
		break;
	}
	}


}
