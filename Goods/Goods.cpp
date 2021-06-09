#include"Goods.h"

Goods::Goods(const string nameOfGood, const tm& dateOfRegistration, const double priceOfGood, const unsigned int numberOfUnitsOfGood, const unsigned long invoiceNumber)
	:nameOfGood_{ nameOfGood }, numberOfUnitsOfGood_{ numberOfUnitsOfGood }, invoiceNumber_{ invoiceNumber } 
{setPrice(priceOfGood);
dateOfRegistration_ = dateOfRegistration; }

Goods::Goods(Goods& other) {}
Goods::~Goods() {}

const string Goods::getNameOfGood() { return nameOfGood_; }
const tm& Goods::getDateOfRegistration() { return dateOfRegistration_; }
const double Goods::getPriceOfGood() { return priceOfGood_; }
const unsigned int Goods::getNumberOfUnitsOfGood() { return numberOfUnitsOfGood_; }
const unsigned long Goods::getInvoiceNumber() { return invoiceNumber_; }
void Goods::changePriceOfGood(const double priceOfGood) { setPrice(priceOfGood); }
void Goods::changeQuantityOfGood(const unsigned int numberOfUnitsOfGood) { numberOfUnitsOfGood_ = numberOfUnitsOfGood; }
double Goods::calculationCostOfGood() { return double(numberOfUnitsOfGood_) * priceOfGood_; }

const string Goods::priceOfGoodtoString()
{
	return to_string(priceOfGood_);
}

void Goods::setPrice(const double _priceOfGood)
{
	if (_priceOfGood > eps) priceOfGood_ = _priceOfGood;
	else throw - 1;
}