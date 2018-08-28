#include <iostream>
#include <string>
using namespace std;

int main()
{
	

	string color;
	string est;
	string animal;
	string bodypart;
	string noun;
	string plural;
	int a;
	int b;
	int c;

	cout << "Whats your favorite color? ";
	cin >> color;

	cout << "Type a word ending in est. ";
	cin >> est;

	cout << "Name a animal. ";
	cin >> animal;

	cout << "Name a body part plural. ";
	cin >> bodypart;

	cout << "Name a noun. ";
	cin >> noun;

	cout << "Name plural noun. ";
	cin >> plural;

	cout << "type a number. ";
	cin >> a;

	cout << "type another number. ";
	cin >> b;

	c = a - b;

		cout << "The " << color << " " << animal << " is the " << est << " of all " << animal << ". it has " << c << " " << bodypart << " shape like a " << noun << "likes to eat " << plural << "." << endl;

		system("Pause");
		return 0;


}

