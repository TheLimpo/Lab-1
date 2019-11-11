#include <stdio.h>
#include <cstring>


int main()
{
	char name[100];
	int age;
	char gender;
	int married;
	char mar_str[10];
	float height;

	printf("Hi, what's your name?\n");
	scanf_s("%99s", name, sizeof(name));

	printf("How old are you?\n");
	scanf_s("%d", &age);

	printf("What gender are you?(m/f)\n");
	scanf_s(" %c", &gender,1);

	printf("You are married (true/false)\n");
	scanf_s("%9s", mar_str, sizeof(mar_str));

	married = (mar_str == "true"|| mar_str == "True");
	
	
	

	printf("What's your length in meters?\n ");
	scanf_s("%f", &height);


	printf("Name: %s \n", name);
	printf("Age: %d \n", age);
	printf("Gender: %c \n", gender);
	printf("Married: %d \n",married);
	printf("Height in meters: %f \n", height);






}