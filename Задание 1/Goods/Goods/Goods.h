#pragma once
#include <string>
/**
 * @brief ����� �����
*/
class Goods
{
public:
	/**
	* @brief ����������� �� ���������
	*/
	Goods();
	/**
	 * @brief ����������������� �����������
	 * @param thenameoftheproduct ��� ��������	
	 * @param thepriceoftheproduct ���� ��������
	 * @param numberofunitsofgoods ���������� ��������
	 * @param thedateoftheproduct ���� ���������� ��������
	 * @param numberofwaybill ����� ���������
	*/
	Goods(const std::string thenameoftheproduct, const double thepriceoftheproduct, const int numberofunitsofgoods, const std::string thedateoftheproduct, const std::string numberofwaybill);
	/**
	* @brief ����������
	*/
	~Goods();

	/**
	 * @brief ����� ������������ ��� ��������
	 * @return ��� ��������
	*/
	std::string GetNameofproduct() const;
	/**
	 * @brief ����� ������������ ���� ���������� ��������
	 * @return ���� ���������� ��������
	*/
	std::string thedateoftheproduct() const;
	/**
	 * @brief ����� ������������ ���� ��������
	 * @return  ���� ��������
	*/
	double Getthepriceoftheproduct() const;
	/**
	 * @brief ����� ������������ ���������� ���������
	 * @return ���������� ���������
	*/
	int Getnumberofunitsofgoods() const;
	/**
	 * @brief ����� ������������ ����� ���������
	 * @return ����� ���������
	*/
	std::string Getnumberofwaybillr() const;
	
	/**
	 * @brief ��������� ���� ��������
	 * @param thepriceoftheproduct ���������� ���� ��������
	 * @return ����� ���� �������� 
	*/
	double changesinthepriceofgoods(const double thepriceoftheproduct) const;
	/**
	 * @brief ��������� ���������� ��������
	 * @param numberofunitsofgoods ���������� ���������� �������� 
	 * @return ����� ���������� ��������
	*/
	double changeinthequantityofgoods(const int numberofunitsofgoods) const;
	/**
	 * @brief ���������� ��������� ���������
	 * @param thepriceoftheproduct ���� ���������
	 * @return ��������� ���������
	*/
	double calculatingthecostofgoods(const double thepriceoftheproduct) const;
	/**
	 * @brief ����� ��������� ��������� � ���� ������
	 * @param thepriceoftheproduct ��������� ���������
	 * @return ��������� ��������� � ���� ������
	*/
	std::string toString(const double thepriceoftheproduct) const;


private:
	/**
	 * @brief ��� ��������
	*/
	std::string Nameofproduct;
	/**
	 * @brief ���� ���������� ��������
	*/
	std::string dateofproduct;
	/**
	 * @brief ���� ��������
	*/
	double thepriceoftheproduct;
	/**
	 * @brief ���������� ��������
	*/
	int numberofunitsofgoods;
	/**
	 * @brief ����� ���������
	*/
	std::string numberofwaybillr;

};
