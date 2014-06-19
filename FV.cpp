#include "FutureValue.h"
#include <string.h>

void PrintUsage(char *name)
{
	cout << name << " <rate> <nper> <pmt> [pv] [type]" << endl;
}

int main(int argc, char *argv[])
{
	if (argc >= 4)
	{
		double rate = atof(argv[1]);
		int nper = atoi(argv[2]);
		double pmt = atof(argv[3]);
		double pv = 0;
		int type = DueAtEnd;

		if (argc >= 5)
			pv = atof(argv[4]);

		if (argc >= 6)
			pv = atof(argv[5]);

		cout << fixed;
		cout.precision(2);
		cout << "pv " << FutureValue(rate, nper, pmt, pv, type) << endl;
		return 0;
	}
	else
	{
		PrintUsage(argv[0]);
		return 1;
	}
}
