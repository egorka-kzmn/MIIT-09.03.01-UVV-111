#include"Tangent.h"
Tangent::Tangent(const double x) { x_ = x; }
Tangent::~Tangent(){}
const double Tangent::getFunctionValue() { return tan(x_); }