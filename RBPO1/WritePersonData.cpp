
#include "header.h"



void WritePersonData(string& name, string& height, string& weight, unsigned short* age)
{
	cout << endl << "================================================================" << endl;
	cout << "Person's name:" << name << endl;
	cout << "Person's height:" << height << endl;
	cout << "Person's weight:" << weight << endl;
	cout << "Person's age:" << *age << endl;
	cout << "Person's salary:" << salary << endl;
}