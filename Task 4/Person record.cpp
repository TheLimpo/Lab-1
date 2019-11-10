#include <iostream>
#include <string>


using namespace std;

int main()
{
	string name;
	int age;
	string gender;
	bool marry;
	string married;
	float height;

	cout << "Hi what's your name?" << endl;
	cin >> name;

	cout << "How old are you?" << endl;
	cin >> age;

	cout << "What gender are you? (male/female)" << endl;
	cin >> gender;

	cout << "You are married(true or false)" << endl;
	cin >> married;

	if (married == "true")
	
		 marry = true;
	

	else
		marry = false;

	cout << "What's your length in meters?" << endl;
	cin >> height;



	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Gender: " << gender << endl;
	cout << "Married: " << marry << endl;
	cout << "Height in meters: " << height << endl;







}