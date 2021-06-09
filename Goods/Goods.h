#pragma once
#include<string>
#include<ctime>
using namespace std;
class Goods
{
public:
	Goods(const string nameOfGood, const tm& dateOfRegistration, const double priceOfGood, const unsigned int numberOfUnitsOfGood, const unsigned long invoiceNumber);
	Goods(Goods& other);
	~Goods();
	const string getNameOfGood();
	const tm& getDateOfRegistration();
	const double getPriceOfGood();
	const unsigned int getNumberOfUnitsOfGood();
	const unsigned long getInvoiceNumber();
	void changePriceOfGood(const double priceOfGood);
	void changeQuantityOfGood(const unsigned int numberOfUnitsOfGood);
	double calculationCostOfGood();
	const string priceOfGoodtoString();
private:
	void setPrice(const double _priceOfGood);
	string nameOfGood_;
	tm dateOfRegistration_;
	double priceOfGood_ = 0.0;
	unsigned int numberOfUnitsOfGood_ = 0;
	unsigned long invoiceNumber_ = 0;
	const double eps = 0.000001;
};