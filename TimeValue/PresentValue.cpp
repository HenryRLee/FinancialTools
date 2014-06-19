#include "PresentValue.h"

double PresentValue(double rate, int nper, double pmt, double fv, int type)
{
	double pv = fv;
	for (int i=0; i<nper; i++)
	{
		pv = (pv + pmt)/(1 + rate);
	}

	return pv;
}
