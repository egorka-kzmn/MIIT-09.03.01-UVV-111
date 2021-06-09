#include"Cosine.h"
Cosine::Cosine(const double x) { x_ = x; }
Cosine::~Cosine(){}
const double Cosine::getFunctionValue() { return cos(x_); }