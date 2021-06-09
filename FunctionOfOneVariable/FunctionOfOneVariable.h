#pragma once
#include<cmath>
class FunctionOfOneVariable
{
public:
	virtual ~FunctionOfOneVariable();
	virtual const double getFunctionValue() = 0;
protected:
	double x_;
};