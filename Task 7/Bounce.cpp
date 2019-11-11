#include <iostream>

using namespace std;


int main()
{

	int n;
	int n2;

	cout << "Give a natural number: ";
	cin >> n;

	n2 = n;

	if (n < 0)
	{
		cout << "Error! Input cannot be negative";
	}
	else
	{
		while (n > 0)
		{
			cout << n;
			n--;
		}

		cout << n;

		while (n < n2)
		{
			n++;
			cout << n;
		};
	}

}