#pragma once
#include <iostream>
#include <string>

using namespace std;


extern unsigned short height;
extern string salary;

unsigned short ReadPersonAge();
void ReadPersonData(string& name, unsigned short& age, double& salary);
void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight);
void ReadPersonHeight();
string ReadPersonName();
void ReadPersonSalary(double* Salary);
void ReadPersonWeight(unsigned short& Weight);
void WritePersonData(string& name, string& height, string& weight, unsigned short* age);