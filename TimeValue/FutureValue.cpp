#include "FutureValue.h"

double FutureValue(double rate, int nper, double pmt, double pv, int type)
{
	double fv = pv;
	for (int i=0; i<nper; i++)
	{
		fv = fv * (1 + rate) + pmt;
	}

	return fv;
}
