#pragma once
#include <iostream>

using namespace std;


extern unsigned short height;
extern string salary;

unsigned short ReadPersonAge();
void ReadPersonData(string& name, unsigned short& age, double& salary);
void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight);
void ReadPersonHeight();
string ReadPersonName();
double* ReadPersonSalary();
unsigned short ReadPersonWeight(unsigned short& Weight);
void WritePersonData(string& height, string& weight, const unsigned short* age, string salary);