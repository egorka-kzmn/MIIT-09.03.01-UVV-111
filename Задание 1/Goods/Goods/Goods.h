#pragma once
#include <string>
/**
 * @brief Класс товар
*/
class Goods
{
public:
		/**
	 * @brief Параметризованный конструктор
	 * @param thenameoftheproduct Имя продукта	
	 * @param thepriceoftheproduct Цена продукта
	 * @param numberofunitsofgoods Количество продукта
	 * @param thedateoftheproduct Дата оформления продукта
	 * @param numberofwaybill Номер накладной
	*/
	Goods(const std::string the_name_of_the_product, const double the_price_of_the_product, const int number_of_units_of_goods, const std::string the_date_of_the_product, const std::string number_of_waybill);
	/**
	* @brief Деструктор
	*/
	~Goods();

	/**
	 * @brief Метод возвращающий имя продукта
	 * @return Имя продукта
	*/
	std::string get_name_of_product() const;
	/**
	 * @brief Метод возвращающий дату оформления продукта
	 * @return Дата оформления продукта
	*/
	std::string the_date_of_the_product() const;
	/**
	 * @brief Метод возвращающий цену продукта
	 * @return  Цена продукта
	*/
	double get_the_price_of_the_product() const;
	/**
	 * @brief Метод возвращающий количество продуктов
	 * @return Количество продуктов
	*/
	int get_number_of_units_of_goods() const;
	/**
	 * @brief Метод возвращающий номер накладкой
	 * @return Номер накладной
	*/
	std::string get_number_of_waybillr() const;
	
	/**
	 * @brief Изменения цены продукта
	 * @param thepriceoftheproduct Изменяемая цена продукта
	 * @return Новая цена продукта 
	*/
	double changes_in_the_price_of_goods(const double the_price_of_the_product) const;
	/**
	 * @brief Изменения количества продукта
	 * @param numberofunitsofgoods Изменяемое количество продукта 
	 * @return Новое количество продукта
	*/
	void change_in_the_quantity_of_goods(const unsigned int number_of_units_of_goods) const;
	/**
	 * @brief Вычисления стоимости продуктов
	 	 * @return Суммарная стоимость
	*/
	double calculating_the_cost_of_goods() const;
	/**
	 * @brief Вывод стоимости продуктов в виде строки
	 	 * @return Стоимость продуктов в виде строки
	*/
	std::string output_products () const;


private:
	/**
	 * @brief Имя продукта
	*/
	std::string name_of_product;
	/**
	 * @brief Дата оформления продукта
	*/
	std::tm date_of_product;
	/**
	 * @brief Цена продукта
	*/
	double the_price_of_the_product;
	/**
	 * @brief Количество продукта
	*/
	int number_of_units_of_goods;
	/**
	 * @brief Номер накладной
	*/
	std::string number_of_waybillr;

};
