#include "YieldToMaturity.h"
#include <math.h>

double YieldToMaturity(int nper, double fv, double pv, double pmt, int type)
{
	double growth;

	growth = fv/pv;
	growth = pow(growth, double(1)/double(nper));

	growth -= 1;

	return growth;
}
