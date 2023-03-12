#include <iostream>
#include <cmath>

class eq2
{
private:
	double a, b, c;
	double D;
public:
	eq2();
	eq2(double a1, double b1, double c1);
	void set(double a1, double b1, double c1);
	double find_X();
	double find_Y(double x1);
	friend eq2 operator + (eq2& x, eq2& y);
};
eq2 operator + (eq2& x, eq2& y);