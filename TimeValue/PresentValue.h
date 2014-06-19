#pragma once
#include <iostream>
using namespace std;

enum Type
{
	DueAtEnd,
	DueAtBeginning,
};

double PresentValue(double rate, int nper, double pmt, double fv = 0, int type = DueAtEnd);
