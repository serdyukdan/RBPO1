#include <iostream>
#include <string>
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
	cout << "Enter person's height:";
	cin >> height;
}

void ReadPersonWeight(unsigned short& Weight)
{
	cout << "Enter person's weight:";
	cin >> Weight;

}


void ReadPersonSalary(double* Salary)
{
	cin >> *Salary;
}


void ReadPersonData(string& name, unsigned short& age, double& salary)
{
	cout << "Enter person's name:";
	cin >> name;
	cout << "Enter person's age:";
	cin >> age;
	cout << "Enter person's salary:";
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
	cout << endl << "================================================================" << endl;
	cout << "Person's name:" << name << endl;
	cout << "Person's height:" << height << endl;
	cout << "Person's weight:" << weight << endl;
	cout << "Person's age:"<< * age << endl;
	cout << "Person's salary:"<<salary << endl;
}

int main()
{
	string name;
	unsigned short age;
	double salaryD;
	unsigned short weight = 0;
	

	ReadPersonData(name, age, salaryD);

	salary = to_string(salaryD);

	ReadPersonHeight();
	string heightS = to_string(height);

	ReadPersonWeight(weight);
	string weightS = to_string(weight);
	//unsigned short* ageP = age;
	
	WritePersonData(name, heightS, weightS, &age);
}