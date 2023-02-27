
#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
	Circle A(0, 0, 0);
	Circle B(0, 0, 0);
	Circle C(0, 0, 0);

	float i, j, k;

	cout << "Радиус x и y окружности А\n";
	cin >> i >> j >> k;
	A.set_circle(i, j, k);

	cout << "Радиус x и y окружности B\n";
	cin >> i >> j >> k;
	B.set_circle(i, j, k);

	cout << "Радиус x и y окружности C\n";
	cin >> i >> j >> k;
	C.set_circle(i, j, k);

	cout << "\n";

	cout << "Площадь окружности A - " << A.square() << "\n";
	cout << "Площадь окружности B - " << B.square() << "\n";
	cout << "Площадь окружности C - " << C.square() << "\n";
	float a, b, c;

	cout << "Введите треугольник (a,b,c)\n";
	cin >> a >> b >> c;

	if (A.triangle_around(a, b, c)) cout << "Окружность A можно вписать треугольник\n";
	else cout << "Окружность A нельзя вписать треугольник\n";

	if (B.triangle_around(a, b, c)) cout << "Окружность B можно вписать треугольник\n";
	else cout << "Окружность B нельзя вписать треугольник\n";

	if (C.triangle_around(a, b, c)) cout << "Окружность C можно вписать треугольник\n";
	else cout << "Окружность C нельзя вписать треугольник\n";

	if (A.triangle_in(a, b, c)) cout << "В окружность A можно вписать треугольник\n";
	else cout << "В окружность A нельзя вписать треугольник\n";

	if (B.triangle_in(a, b, c)) cout << "В окружность B можно вписать треугольник\n";
	else cout << "В окружность B нельзя вписать треугольник\n";

	if (C.triangle_in(a, b, c)) cout << "В окружность C можно вписать треугольник\n";
	else cout << "В окружность C нельзя вписать треугольник\n";

	return 0;
    
}
