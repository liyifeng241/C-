#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	cout.setf(ios::showpoint);
	if (a == 0)
	{
		return 0;
	}
	if (b * b == 4 * a * c)
	{
		cout << setprecision(6) << "x1=x2=" << (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	}
	else if (b*b>4*a*c)
	{
		cout << setprecision(6) << "x1=" << (-b + sqrt(b * b - 4 * a * c)) / (2 * a) << ";" << "x2=" << (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	}
	else if (b * b < 4 * a * c)
	{
		float r1 = 0, r2 = 0,i=0;
		r1 = -b / (2 * a);
		r2 = -b / (2 * a);
		if (-b / (2 * a) == 0)
		{
			r1 = 0;
			r2 = 0;
		}
		i = sqrt(4 * a * c - b * b) / (2 * a);
		cout << setprecision(6) << "x1=" << r1 << "+" << i << "i" << ";" << "x2=" << r2 << "-" << i << "i";
	}
}