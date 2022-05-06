#include <iostream>
#include <math.h>
#include <string>
using namespace std;
constexpr auto PI = 3.14;
#pragma once
class Point
{
private:
	double dTungDo;
	double dHoanhDo;
public:
	friend class cTamGiac;
	void Nhap();
	double Output_dTungDo()
	{
		return dTungDo;
	}
	double Output_dHoanhDo()
	{
		return dHoanhDo;
	}
	Point Tinh_Tien_Point(Point k);
	void Xuat();
	Point Quay(double k);
	Point Zoom(double k);
	
};
class cTamGiac
{
private:
	Point A;
	Point B;
	Point C;
public:
	friend class Point;
	void Nhap();
	void Xuat();
	void Quay(double k);
	void Tinh_Tien_TamGiac(Point k);
	void Zoom(double k);
	Point Vecto(Point, Point);
	bool Kiem_Tra();
};

