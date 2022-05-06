#include <iostream>
using namespace std;

float DienTich(float);

int main()
{
	float r;
	cout << "Nhap ban kinh r: ";
	cin >> r;
	float s = DienTich(r);
	cout << "Dien tich: " << s;
	return 1;
}
float DienTich(float rr)
{
	return 3.14 * rr * rr;
}