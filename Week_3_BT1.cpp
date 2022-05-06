#include "Week_3_BT1.h"

void Point::Nhap()
{
	cout << "Nhap HoandDo: ";
	cin >> dHoanhDo;
	cout << "Nhap TungDo: ";
	cin >> dTungDo;
}
void Point::Xuat()
{
	cout << "Diem A(" << dHoanhDo << "," << dTungDo << ")";
}
Point Point::Tinh_Tien(Point k)
{
	Point z;
	z.dHoanhDo = dHoanhDo + k.dHoanhDo;
	z.dTungDo = dTungDo + k.dTungDo;
	return z;
}

int main()
{
	Point A;
	A.Nhap();
	cout << "Ban co muon tinh tien Diem A vua nhap khong?	Nhap y/n" << endl;
	string Quesion;
	cin >> Quesion;
	if (Quesion == "y")
	{
		cout << "Nhap gia tri Vecto" << endl;
		Point Vecto;
		Vecto.Nhap();
		A.Tinh_Tien(Vecto).Xuat();
		return 0;
	}
	A.Xuat();
	return 0;
}
