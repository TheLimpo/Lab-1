#include <iostream>

using namespace std;


int main()
{

	int n; //User input
	int i = 3; //i is the number to check if prime, starting from 3
	int count;//count how many prime numbers that has been found
	int c;//used to check if i is prime or not

	cout << "How many prime numbers do you want to print?: ";
	cin >> n;

	if (n >= 1)
	{
		cout << "2 ";
	}

	// iteration for n prime numbers
	// i is the number to be checked in each iteration starting from 3
	for (count = 2; count <= n; i++)
	{
		// iteration to check if i is prime or not. (Well, if the rest is 0. The if statement in the first for-loop determines if it's a prime or not)
		for (c = 2; c < i; c++)
		{
			if (i%c == 0)
				break;
		}

		if (c == i) // i is prime number
		{
			cout << i << " ";
			count++; //increment the count of prime numbers

		}
	}

}