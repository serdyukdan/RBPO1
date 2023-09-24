#include <iostream>
#include "header.h"
using namespace std;


void WritePersonData(string& height, string& weight, unsigned short* age)
{
	string salary = "";
	cin >> height;
	cin >> weight;
	cin >> *age;
	cin >> salary;
}