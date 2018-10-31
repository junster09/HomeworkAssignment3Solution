/*
print welcome group 1's calculator
unsigned int Choice
int numA
int numB

while(5 != Choice){
printmenu()

"What would you like to do: "
input: Choice
while (choice is not between 1-5){
	"Invalid argument, reenter: "
	input: Choice
} 

"please enter 2 numbers: "
cin >> numA >> numB;

switch(choice)
case 1:
	addition(numA, numB)
	break
case 2:
	subtraction
	break
case 3:
	multiplication
	break
case 4:
	division
	break
case 5:
	"thank u for using!"
	break
}
*/
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
void printmenu();
void addition(double a, double b);
void subtraction(double a, double b);
void multiplication(double a, double b);
void division(double a, double b);

int main() {
	double numA{ 0 };
	double numB{ 0 };
	unsigned int choice{ 0 };

	cout << "Welcome to Group 1's Handy Calculator!";

	while (choice != 5) {
		printmenu();
		
		cout << "What would you like to do? ";
		cin >> choice;

		while (choice < 1 || choice > 5) {
			cout << "Invalid, please reenter: ";
			cin >> choice;
		}


		switch (choice) {
		case 1:
			cout << "Please enter 2 numbers, separated by a space: ";
			cin >> numA >> numB;
			addition(numA, numB);
			break;
		case 2:
			cout << "Please enter 2 numbers, separated by a space: ";
			cin >> numA >> numB;
			subtraction(numA, numB);
			break;
		case 3:
			cout << "Please enter 2 numbers, separated by a space: ";
			cin >> numA >> numB;
			multiplication(numA, numB);
			break;
		case 4:
			cout << "Please enter 2 numbers, separated by a space: ";
			cin >> numA >> numB;
			while (0 == numB) {
				cout << "YOU CANNOT divide by 0\nPlease reenter the number";
				cin >> numB;
			}
			division(numA, numB);
			break;
		case 5:
			cout << "Thank you for using Group 1's Handy Calculator!";
			break;
		}
	}

	string str;
	getline(cin, str);
	cout << "The Program Has Ended...";
	return 0;
}

void printmenu() {
	cout 
		<< "\n\n"
		<< "\t1.  Addition\n"
		<< "\t2.  Subtraction\n"
		<< "\t3.  Multiplication\n"
		<< "\t4.  Division\n"
		<< "\t5.  Exit\n\n";
}

void addition(double a, double b) {
	double sum;
	sum = a + b;
	cout << fixed <<setprecision(2) << "Result of adding " << a << " + " << b << " is: " << sum;
}
void subtraction(double a, double b) {
	double sum;
	sum = a - b;
	cout << fixed << setprecision(2) << "Result of subtracting " << a << " - " << b << " is: " << sum;
}
void multiplication(double a, double b) {
	double sum;
	sum = a * b;
	cout << fixed << setprecision(2) << "Result of multiplying " << a << " * " << b << " is: " << sum;
}
void division(double a, double b) {
	double sum;
	sum = a / b;
	cout << fixed << setprecision(2) << "Result of  " << a << " / " << b << " is: " << sum;
}
