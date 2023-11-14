#include<iostream>
using namespace std;
int main() {
	int num1, num2 , x=0;

	do{
		cout << "Enter two  numbers : " << endl;
		cin >> num1 >> num2;
		char operation;
		cout << "Enter operation to be performed on these numbers : " << endl;
		cin >> operation;
		switch (operation) {
		case '+':
			cout << "Sum = " << num1 + num2 << endl;
			break;
		case '-':
			cout << "Subtraction  = " << num1 - num2 << endl;
			break;
		case '*':
			cout << "Product = " << num1 * num2 << endl;
			break;
		case '/':
			cout << "Division = " << num1 / num2 << endl;
			break;
		case '%':
			cout << "Modulus = " << num1 % num2 << endl;
			break;
		default:
			cout << "INVALID Operator " << endl;
		}
		cout << "Enter 0 if you want to quit else press 1 to continue using calculator." << endl;
		cin >> x;
	} while (x != 0);
	return 0;
}
