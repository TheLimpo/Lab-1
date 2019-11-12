#include <stdio.h>

int main()
{

	int i, j, rows, A = 65;
	char ch;

	printf("Create a half pyramid using numbers.\n");
	printf("How many rows should it have?: ");
	scanf_s("%d", &rows);
	//Outer loop responsible for rows
	for (i = 1; i <= rows; i++)
	{	
		//Inner loop responsible for columns
		for (j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}

		printf("\n");
	}
	
	printf("\nCreate a half pyramid using the alphabet.\n");
	printf("What should the last uppercase letter be?: ");
	scanf_s(" %c", &ch, 1);


	for (i = 1; i <= (ch - 'A' +1); i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%c", A);
		}
		A++;//Changing the letter printed out

		printf("\n");
	}
}