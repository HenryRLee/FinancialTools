#pragma once
#include <iostream>
using namespace std;

enum Type
{
	DueAtEnd,
	DueAtBeginning,
};

double Payment(double rate, int nper, double pv, double fv = 0, int type = DueAtEnd);
