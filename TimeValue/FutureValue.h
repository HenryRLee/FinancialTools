#pragma once

enum Type
{
	DueAtEnd,
	DueAtBeginning,
};

double FutureValue(double rate, int nper, double pmt, double pv = 0, int type = DueAtEnd);
