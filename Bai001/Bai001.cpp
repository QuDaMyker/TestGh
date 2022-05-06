#include <iostream>
using namespace std;

void Nhap(float&, float&);
void Xuat(float, float);
float Khoang_Cach(float, float, float, float);
int main()
{
	float x1, y1, x2, y2;
	Nhap(x1, y1);
	Nhap(x2, y2);

	Xuat(x1, y1);
	Xuat(x2, y2);

	float d = Khoang_Cach(x1, y1, x2, y2);
	cout << "Khoang cach: " << d;
	return 1;
}
void Nhap(float& xx, float& yy)
{
	cout << "Nhap x: ";
	cin >> xx;
	cout << "Nhap y: ";
	cin >> yy;
}
void Xuat(float xx, float yy)
{
	cout << "\n x: " << xx;
	cout << "\n y: " << yy;
}
float Khoang_Cach(float xA, float yA, float xB, float yB)
{
	return sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));
}


// đã sửa vài chỗ
