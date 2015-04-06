#include "YieldToMaturity.h"
#include <iostream>
#include <string.h>
using namespace std;

void PrintUsage(char *name)
{
	cout << name << " <nper> <fv> <pv> [pmt] [type]" << endl;
}

int main(int argc, char *argv[])
{
	if (argc >= 4)
	{
		int nper = atoi(argv[1]);
		double fv = atof(argv[2]);
		double pv = atof(argv[3]);
		int pmt = 0;
		int type = DueAtEnd;

		if (argc >= 5)
			pmt = atof(argv[4]);

		if (argc >= 6)
			type = atoi(argv[5]);

		cout << fixed;
		cout.precision(4);
		cout << YieldToMaturity(nper, fv, pv, pmt, type) << endl;
		return 0;
	}
	else
	{
		PrintUsage(argv[0]);
		return 1;
	}
}
