#include <iostream>
using namespace std;

extern unsigned short height = 0;
extern string salary = "";


unsigned short ReadPersonAge()
{
	unsigned short age;
	cin >> age;
	return age;
}

string ReadPersonName()
{
	string Name;
	cin >> Name;
	return Name;
}

void ReadPersonHeight()
{
	cin >> height;
}

void ReadPersonWeight(unsigned short& Weight)
{
	cin >> Weight;

}


void ReadPersonSalary(double* Salary)
{
	cin >> *Salary;
}


void ReadPersonData(string& name, unsigned short& age, double& salary)
{
	cin >> name;
	cin >> age;
	cin >> salary;
}


void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight)
{
	cin >> name;
	cin >> age;
	cin >> height;
	cin >> weight;
}


void WritePersonData(string& name, string& height, string& weight, unsigned short* age)
{
	cout << name;
	cout << height;
	cout << weight;
	cout << *age;
	cout << salary;
}

int main()
{
	string name;
	unsigned short age;
	double salary;
	
	ReadPersonData(name, age, salary);
}