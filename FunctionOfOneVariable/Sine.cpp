#include "Sine.h"
Sine::Sine(const double x) { x_ = x; }
Sine::~Sine(){}
const double Sine::getFunctionValue() { return sin(x_); }
