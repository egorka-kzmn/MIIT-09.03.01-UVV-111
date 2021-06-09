#pragma once
#include "FunctionOfOneVariable.h"
class Tangent :public FunctionOfOneVariable
{
public:
	Tangent(const double x);
	~Tangent();
	virtual const double getFunctionValue() override;
};