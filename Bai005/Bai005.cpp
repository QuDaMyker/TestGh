#include <iostream>
using namespace std;

float TheTich(float);

int main()
{
	float r;
	cout << "Nhap ban kinh r: ";
	cin >> r;
	float tt = TheTich(r);
	cout << "The tich mat cau: " << tt;
	return 1;
}
float TheTich(float rr)
{
	return (float)4 / 3 * 3.14 * rr * rr * rr;
}