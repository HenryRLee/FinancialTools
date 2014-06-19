#include "Payment.h"
#include <math.h>

double Payment(double rate, int nper, double pv, double fv, int type)
{
	double pmt;

	pmt = fv * rate / (pow(1+rate, nper) - 1) + pv * rate / (1 - 1/pow(1+rate, nper));

	return pmt;
}
