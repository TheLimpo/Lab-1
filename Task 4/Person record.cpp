#include <iostream>
#include <string>


using namespace std;

int main()
{
	string name;
	int age;
	char gender;
	bool married;
	string mar_str;
	float height;

	cout << "Hi, what's your name?" << endl;
	cin >> name;

	cout << "How old are you?" << endl;
	cin >> age;

	cout << "What gender are you? (m/f)" << endl;
	cin >> gender;

	cout << "You are married (true/false)" << endl;
	cin >> mar_str;

	if (mar_str == "true")
	
		 married = true;
	
	else
		married = false;

	cout << "What's your length in meters?" << endl;
	cin >> height;



	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Gender: " << gender << endl;
	cout << "Married: " << (married ? "True" : "False") << endl;
	cout << "Height in meters: " << height << endl;







}