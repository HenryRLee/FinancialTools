#pragma once

enum Type
{
	DueAtEnd,
	DueAtBeginning,
};

double PresentValue(double rate, int nper, double pmt, double fv = 0, int type = DueAtEnd);
