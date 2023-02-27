#include <iostream>
#include "Figure.h"
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Figure A(0, 0, 0, 0, 0, 0, 0, 0);
	Figure B(0, 0, 0, 0, 0, 0, 0, 0);
	Figure C(0, 0, 0, 0, 0, 0, 0, 0);

	float X1, X2, X3, X4, Y1, Y2, Y3, Y4;

	cout << "Координаты фигуры А ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
	A.set_figure(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << "Координаты фигуры В ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
	B.set_figure(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << "Координаты фигуры С ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
	C.set_figure(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << "Координаты фигуры A: "; A.show();
	cout << "Координаты фигуры B: "; B.show();
	cout << "Координаты фигуры C: "; C.show();

	cout << "\n";

	if (A.is_prug()) cout << "А - четырехугольник\n";
	if (B.is_prug()) cout << "В - четырехугольник\n";
	if (C.is_prug()) cout << "С - четырехугольник\n";

	cout << "\n";

	if (A.is_square()) cout << "А - квадрат\n";
	if (B.is_square()) cout << "В - квадрат\n";
	if (C.is_square()) cout << "С - квадрат\n";

	cout << "\n";

	if (A.is_romb()) cout << "А - ромб\n";
	if (B.is_romb()) cout << "В - ромб\n";
	if (C.is_romb()) cout << "С - ромб\n";

	cout << "\n";

	if (A.is_in_circle()) cout << "А можно вписать в окружность\n";
	if (B.is_in_circle()) cout << "В можно вписать в окружность\n";
	if (C.is_in_circle()) cout << "С можно вписать в окружность\n";

	cout << "\n";

	if (A.is_out_circle()) cout << "В А может быть вписана окружность\n";
	if (B.is_out_circle()) cout << "В В может быть вписана окружность\n";
	if (C.is_out_circle()) cout << "В С может быть вписана окружность\n";
}