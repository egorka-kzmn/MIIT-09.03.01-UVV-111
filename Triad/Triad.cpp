#include "Triad.h"

Triad::Triad(const double a = 0.0, const double b = 0.0, const double c = 0.0) : a_{ a }, b_{ b }, c_{ c } {}

void Triad::additionWith(Triad& triad)
{
	a_ += triad.getA();
	b_ += triad.getB();
	c_ += triad.getC();
}

void Triad::multiplicationBy(Triad& triad)
{
	a_ *= triad.getA();
	b_ *= triad.getB();
	c_ *= triad.getC();
}

bool Triad::isEqual(Triad& triad) { return triad.getA() == a_ && triad.getB() == b_ && triad.getC() == c_; }
void Triad::changeA(const double a) { a_ = a; }
void Triad::changeB(const double b) { b_ = b; }
void Triad::changeC(const double c) { c_ = c; }
double Triad::getA(){return a_;}
double Triad::getB(){return b_;}
double Triad::getC(){return c_;}
Triad::~Triad(){}