#include <iostream>
#include <string>
using namespace std;


int main()
{
	double Money;
	double US;
	double Cash;
	cout << "Enter your US standard amount";
	cin >> US;

	cout << " Enter other country standard";
	cin >> Money;

	Cash = US * Money;

	cout << "Us " << US << " and other country standard" << Money << " = " << Cash << endl;

	system("pause");



	return 0;














}
