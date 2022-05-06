#include <iostream>
using namespace std;

float ChuVi(float);

int main()
{
	float r;
	cout << "Nhap ban kinh r: ";
	cin >> r;
	float cv = ChuVi(r);
	cout << "Chu vi: " << cv;
	return 1;
}
float ChuVi(float rr)
{
	return 3.14 * rr * 2;
}