#include <iostream>
using namespace std;


void ReadPersonData(string& name, unsigned short& age, double& salary)
{
	cout << "Enter person's name:";
	cin >> name;
	cout << "Enter person's age:";
	cin >> age;
	cout << "Enter person's salary:";
	cin >> salary;
}