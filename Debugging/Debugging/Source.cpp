#include <iostream>
#include <string>
using namespace std;


int main()
{

	int First;
	int Second;
	int Add;
	int Subtract;
	int Divide;
	int Multiply;
	int Remainder;
	string nameString;
	cout << "What is your name : ";
	cin >> nameString;

cout << "Enter a number: ";
cin >> First;

cout << "Enter a second number: ";
cin >> Second;

Add = First + Second;
Subtract = First - Second;
Divide = First / Second;
Multiply = First * Second;
Remainder = First % Second;

cout << "The sum is of " << First << " and " << Second << " = " << Add << endl;
cout << "The subtraction is " << First << " and " << Second << " = " << Subtract << endl;
cout << "The divided is " << First << " and " << Second << " = " << Divide << endl;
cout << "The mulitiply " << First << " and " << Second << " = " << Multiply << endl;
cout << "The remainder is " << First << " and " << Second << " = " << First % Second << endl;

system("Pause");
return 0;

}