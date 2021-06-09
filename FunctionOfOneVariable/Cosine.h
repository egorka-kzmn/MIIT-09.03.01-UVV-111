#pragma once
#include "FunctionOfOneVariable.h"
class Cosine :public FunctionOfOneVariable
{
public:
	Cosine(const double x);
	~Cosine();
	virtual const double getFunctionValue() override;
};