#pragma once
class Triad
{
public:
	Triad(const double a = 0.0, const double b = 0.0, const double c = 0.0);
	void additionWith(Triad& triad);
	void multiplicationBy(Triad& triad);
	bool isEqual(Triad& triad);
	void changeA(const double a);
	void changeB(const double b);
	void changeC(const double c);
	double getA();
	double getB();
	double getC();
	virtual ~Triad();

protected:
	double a_, b_, c_;
};