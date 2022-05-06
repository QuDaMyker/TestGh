#include "Week_3_BT2.h"
void Point::Nhap()
{
	cout << "Nhap HoandDo: ";
	cin >> this->dHoanhDo;
	cout << "Nhap TungDo: ";
	cin >> this->dTungDo;
}
void Point::Xuat()
{
	cout << "Diem (" << dHoanhDo << ", " << dTungDo << ")" << " ";
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

Point cTamGiac::Vecto(Point A, Point B)
{
	Point z;
	z.dHoanhDo = B.dHoanhDo - A.dHoanhDo;
	z.dTungDo = (B.dTungDo - A.dTungDo);
	return z;
}

Point Point::Tinh_Tien_Point(Point k)
{
	Point z;
	z.dHoanhDo = dHoanhDo + k.dHoanhDo;
	z.dTungDo = dTungDo + k.dTungDo;
	return z;
}
void cTamGiac::Nhap()
{
	cout << "Nhap diem A: " << endl;
	A.Nhap();
	cout << endl;
	cout << "Nhap diem B: " << endl;
	B.Nhap();
	cout << endl;
	cout << "Nhap diem C: " << endl;
	C.Nhap();
	cout << endl;
}
void cTamGiac::Xuat()
{
	cout << "Tam giac co toa do: " << endl;
	A.Xuat();
	B.Xuat();
	C.Xuat();
}
void cTamGiac::Quay(double k)
{
	cout << "Sau khi quay->" << " ";
	A.Quay(k).Xuat();
	B.Quay(k).Xuat();
	B.Quay(k).Xuat();
}

void cTamGiac::Tinh_Tien_TamGiac(Point k)
{
	cout << "Sau khi tinh tien->" << " ";
	A.Tinh_Tien_Point(k).Xuat();
	B.Tinh_Tien_Point(k).Xuat();
	C.Tinh_Tien_Point(k).Xuat();
}

void cTamGiac::Zoom(double k)
{
	cout << "Sau khi Zoom->" << " ";
	A.Zoom(k).Xuat();
	B.Zoom(k).Xuat();
	B.Zoom(k).Xuat();
}

bool cTamGiac::Kiem_Tra()
{
	if (Vecto(A, B).dHoanhDo * Vecto(A, C).dTungDo != Vecto(A, B).dTungDo * Vecto(A, C).dHoanhDo)
		return true;
	else
		return false;
}

int main()
{
	cTamGiac Delta;
	Delta.Nhap();
	if (Delta.Kiem_Tra() == true)
	{
		cout << "Ban co muon Tinh Tien Tam Giac vua nhap khong?	Nhap y/n" << endl;
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
		cout << "Ban co muon Quay Tam Giac vua nhap khong? Nhap y/n" << endl;
		cin >> Quesion;
		if (Quesion == "y")
		{
			cout << "Nhap gia tri goc quay (tinh theo Do): ";
			double Degree;
			cin >> Degree;
			Delta.Quay(Degree);
			cout << '\n';

		}
		cout << "Ban co muon Phong To Tam Giac vua nhap khong? Nhap y/n" << endl;
		cin >> Quesion;
		if (Quesion == "y")
		{
			cout << "Nhap he so phong to";
			int ind;
			cin >> ind;
			Delta.Zoom(ind);
			cout << '\n';
		}
	}
	else
		cout << "Khong ton tai TamGiac";
	
	return 0;
}
