#include "Vector3D.h"

Vector3D::Vector3D(const double a, const double b, const double c) 
{
	a_ = a;  
	b_ = b;  
	c_ = c;
}

Vector3D::~Vector3D(){}
double Vector3D::getScalarComposition(Vector3D& vector) { return a_ * vector.getA() + b_ * vector.getB() + c_ * vector.getC(); }