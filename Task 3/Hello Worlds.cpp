#include <iostream>

using namespace std;

int main()
{

	// for loop of Hello World!
	int x;

	cout << "How many time do you want Hello World! to print?: ";
	cin >> x;

	for (int i = 0; i < x; i++)
	{
		cout << "Hello World!" << endl;
	}

	// while loop of Hello World!
	cout << "How many time do you want Hello World! to print?: ";
	cin >> x;

	int i = 0;
	while (i < x)
	{

		cout << "Hello World!" << endl;
		i++;

	}

	// do-while loop of Hello World!
	cout << "How many time do you want Hello World! to print?: ";
	cin >> x;

	i = 0;
	do {

		cout << "Hello World!" << endl;
		i++;

	} while (i < x);
}