#include <iostream>
#include <string>
using namespace std;


int main()
{
	string nameString;

	int firstNum;
	int secondNum;
	int add;
	int subtract;
	int multiply;
	int divide;
	int remainder;

	cout << "What is your name?";
	cin >> nameString;

	cout << "Please enter your first number";
	cin >> firstNum;

	cout << "Please enter your another number";
	cin >> secondNum;

	add = firstNum + secondNum;
	
	cout << "the sum of " << firstNum << " and " << secondNum << " = " << add << endl;

	subtract = firstNum - secondNum;

	cout << "the diffrence of " << firstNum<<  " and " << secondNum << " = "<< subtract << endl;

	multiply = firstNum * secondNum;

	cout << "the product of " << firstNum << " and " << secondNum << " = " << multiply  << endl;

	divide = firstNum / secondNum;
		cout << "the quotient of " << firstNum << " and " << secondNum << " = " << divide << endl;
		remainder = firstNum % secondNum;
		cout << "the remainder of " << firstNum << " and " << secondNum << " = " << remainder << endl;
		system("pause");

		

	return 0;
}