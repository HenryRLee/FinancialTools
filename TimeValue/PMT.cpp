#include "Payment.h"
#include <string.h>

void PrintUsage(char *name)
{
	cout << name << " <rate> <nper> <pv> [fv] [type]" << endl;
}

int main(int argc, char *argv[])
{
	if (argc >= 4)
	{
		double rate = atof(argv[1]);
		int nper = atoi(argv[2]);
		double pv = atof(argv[3]);
		double fv = 0;
		int type = DueAtEnd;

		if (argc >= 5)
			fv = atof(argv[4]);

		if (argc >= 6)
			type = atoi(argv[5]);

		cout << fixed;
		cout.precision(2);
		cout << Payment(rate, nper, pv, fv, type) << endl;
		return 0;
	}
	else
	{
		PrintUsage(argv[0]);
		return 1;
	}
}
