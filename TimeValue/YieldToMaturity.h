#pragma once
#include <iostream>
using namespace std;

enum Type
{
	DueAtEnd,
	DueAtBeginning,
};

double YieldToMaturity(int nper, double fv, double pv, double pmt, int type = DueAtEnd);
