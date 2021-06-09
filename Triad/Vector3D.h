#pragma once
#include"Triad.h"
class Vector3D : public Triad
{
public:
	Vector3D(const double a, const double b, const double c);
	~Vector3D();
	double getScalarComposition(Vector3D& vector);
private:
	double scalarComposition;
};