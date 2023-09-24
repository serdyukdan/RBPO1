#include <iostream>
#include "header.h"
using namespace std;

unsigned short height = 0;
string salary = "";

int main()
{
	height = 0;
	salary = "";
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

