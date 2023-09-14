#include <iostream>
using namespace std;
void add(int number1, int number2);
void divide(int number1, int number2);
void subtract(int number1, int number2);
void multiply(int number1, int number2);
main()
{
	int num1, num2;
	char choice;
	while (true)
	{
		cout << "Enter number 1: ";
		cin >> num1;
		cout << "Enter number 2: ";
		cin >> num2;

		cout << "Enter Operator(+,-,*,/): ";
		cin >> choice;

		if (choice == '+')
			add(num1, num2);
		if (choice == '-')
			subtract(num1, num2);
		if (choice == '*')
			multiply(num1, num2);
		if (choice == '/')
			divide(num1, num2);
	}
}
void add(int number1, int number2)
{
	int sum = number1 + number2;
	cout << "Sum=" << sum << endl;
}
void multiply(int number1, int number2)
{
	int multiply = number1 * number2;
	cout << "Multiplication=" << multiply << endl;
}
void divide(int number1, int number2)
{
	int divide = number1 / number2;
	cout << "Division=" << divide << endl;
}
void subtract(int number1, int number2)
{
	int subtract = number1 - number2;
	cout << "subtraction=" << subtract << endl;
}