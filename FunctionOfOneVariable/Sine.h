#pragma once
#include "FunctionOfOneVariable.h"
class Sine : public FunctionOfOneVariable
{
public:
	Sine(const double x);
	~Sine();
	virtual const double getFunctionValue() override;
};