#include "Week_3_BT3.h"
void Point::Nhap()
{
	cout << "Nhap HoandDo: ";
	cin >> this->dHoanhDo;
	cout << "Nhap TungDo: ";
	cin >> this->dTungDo;
}
void Point::Xuat()
{
	cout << "(" << dHoanhDo << ", " << dTungDo << ")" << '\t';
}
Point Point::Quay(double k)
{
	Point z;
	z.dHoanhDo = dHoanhDo * cos((double)k * PI / 180) - dTungDo * sin((double)k * PI / 180);
	z.dTungDo = dHoanhDo * sin((double)k * PI / 180) + dTungDo * cos((double)k * PI / 180);
	return z;
}
Point Point::Zoom(double k)
{
	Point z;
	z.dHoanhDo = dHoanhDo * k;
	z.dTungDo = dTungDo * k;
	return z;
}

Point Point::Tinh_Tien_Point(Point k)
{
	Point z;
	z.dHoanhDo = dHoanhDo + k.dHoanhDo;
	z.dTungDo = dTungDo + k.dTungDo;
	return z;
}
void cDaGiac::Nhap()
{
	cout << "Nhap so Dinh cua DaGiac: ";
	int n;
	cin >> n;
	Dinh = new Point[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap Dinh thu " << i + 1 << '\n';
		Dinh[i].Nhap();
		cout << '\n';
	}
}
void cDaGiac::Xuat()
{
	cout << "Tam giac co toa do: " << endl;
	for (int i = 0; i < n; i++)
	{
		Dinh[i].Xuat();
	}
}
void cDaGiac::Quay(double k)
{
	cout << "Sau khi quay->" << " ";
	for (int i = 0; i < n; i++)
	{
		Dinh[i].Quay(k).Xuat();
	}
}

void cDaGiac::Tinh_Tien_TamGiac(Point k)
{
	cout << "Sau khi tinh tien->" << " ";
	for (int i = 0; i < n; i++)
	{
		Dinh[i].Tinh_Tien_Point(k).Xuat();
	}
}

void cDaGiac::Zoom(double k)
{
	cout << "Sau khi Zoom->" << " ";
	for (int i = 0; i < n; i++)
	{
		Dinh[i].Zoom(k).Xuat();
	}
}

int main()
{
	cDaGiac Delta;
	Delta.Nhap();
	cout << "Ban co muon Tinh Tien DaGiac vua nhap khong?	Nhap y/n" << endl;
	string Quesion;
	cin >> Quesion;
	if (Quesion == "y")
	{
		cout << "Nhap gia tri Vecto" << endl;
		Point Vecto;
		Vecto.Nhap();
		Delta.Tinh_Tien_TamGiac(Vecto);
		cout << '\n';
	}
	cout << "Ban co muon Quay DaGiac vua nhap khong? Nhap y/n" << endl;
	cin >> Quesion;
	if (Quesion == "y")
	{
		cout << "Nhap gia tri goc quay (tinh theo Do): ";
		double Degree;
		cin >> Degree;
		Delta.Quay(Degree);
		cout << '\n';

	}
	cout << "Ban co muon Phong To DaGiac vua nhap khong? Nhap y/n" << endl;
	cin >> Quesion;
	if (Quesion == "y")
	{
		cout << "Nhap he so phong to: ";
		int ind;
		cin >> ind;
		Delta.Zoom(ind);
		cout << '\n';
	}
	return 0;
}
