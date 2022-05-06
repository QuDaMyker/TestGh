#pragma once
#include <iostream>
#include <string>
using namespace std;
class Point
{
private:
	double dTungDo;
	double dHoanhDo;
public:
	void Nhap();
	double Output_dTungDo()
	{
		return dTungDo;
	}
	double Output_dHoanhDo()
	{
		return dHoanhDo;
	}
	Point Tinh_Tien(Point k);
	void Xuat();
};

