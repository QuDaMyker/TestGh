#include <iostream>
using namespace std;

float DienTich(float);

int main()
{
	float r;
	cout << "Nhap ban kinh r: ";
	cin >> r;
	float dt = DienTich(r);
	cout << "Dien tich xung quanh mat cau: " << dt;
	return 1;
}
float DienTich(float rr)
{
	return 4 * 3.14 * rr * rr;
}