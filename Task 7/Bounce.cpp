#include <iostream>

using namespace std;


int main()
{

	int n; //User input
	int n2;

	cout << "Give a natural number: ";
	cin >> n;

	n2 = n;  

	if (n < 0) //n is negative
	{
		cout << "Error! Input cannot be negative";
	}
	else
	{
		while (n > 0) //prints out the number in descending order
		{
			cout << n;
			n--;
		}

		cout << n; //prints out 0

		while (n < n2) //prints out the number in ascending order until n = n2
		{
			n++;
			cout << n;
		};
	}

}