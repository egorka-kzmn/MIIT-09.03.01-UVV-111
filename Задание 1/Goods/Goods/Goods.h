#pragma once
#include <string>
/**
 * @brief Класс товар
*/
class Goods
{
public:
	/**
	* @brief Конструктор по умолчанию
	*/
	Goods();
	/**
	 * @brief Параметризованный конструктор
	 * @param thenameoftheproduct Имя продукта	
	 * @param thepriceoftheproduct Цена продукта
	 * @param numberofunitsofgoods Количество продукта
	 * @param thedateoftheproduct Дата оформления продукта
	 * @param numberofwaybill Номер накладной
	*/
	Goods(const std::string thenameoftheproduct, const double thepriceoftheproduct, const int numberofunitsofgoods, const std::string thedateoftheproduct, const std::string numberofwaybill);
	/**
	* @brief Деструктор
	*/
	~Goods();

	/**
	 * @brief Метод возвращающий имя продукта
	 * @return Имя продукта
	*/
	std::string GetNameofproduct() const;
	/**
	 * @brief Метод возвращающий дату оформления продукта
	 * @return Дата оформления продукта
	*/
	std::string thedateoftheproduct() const;
	/**
	 * @brief Метод возвращающий цену продукта
	 * @return  Цена продукта
	*/
	double Getthepriceoftheproduct() const;
	/**
	 * @brief Метод возвращающий количество продуктов
	 * @return Количество продуктов
	*/
	int Getnumberofunitsofgoods() const;
	/**
	 * @brief Метод возвращающий номер накладкой
	 * @return Номер накладной
	*/
	std::string Getnumberofwaybillr() const;
	
	/**
	 * @brief Изменения цены продукта
	 * @param thepriceoftheproduct Изменяемая цена продукта
	 * @return Новая цена продукта 
	*/
	double changesinthepriceofgoods(const double thepriceoftheproduct) const;
	/**
	 * @brief Изменения количества продукта
	 * @param numberofunitsofgoods Изменяемое количество продукта 
	 * @return Новое количество продукта
	*/
	double changeinthequantityofgoods(const int numberofunitsofgoods) const;
	/**
	 * @brief Вычисления стоимости продуктов
	 * @param thepriceoftheproduct Цены продуктов
	 * @return Суммарная стоимость
	*/
	double calculatingthecostofgoods(const double thepriceoftheproduct) const;
	/**
	 * @brief Вывод стоимости продуктов в виде строки
	 * @param thepriceoftheproduct Стоимость продуктов
	 * @return Стоимость продуктов в виде строки
	*/
	std::string toString(const double thepriceoftheproduct) const;


private:
	/**
	 * @brief Имя продукта
	*/
	std::string Nameofproduct;
	/**
	 * @brief Дата оформления продукта
	*/
	std::string dateofproduct;
	/**
	 * @brief Цена продукта
	*/
	double thepriceoftheproduct;
	/**
	 * @brief Количество продукта
	*/
	int numberofunitsofgoods;
	/**
	 * @brief Номер накладной
	*/
	std::string numberofwaybillr;

};
