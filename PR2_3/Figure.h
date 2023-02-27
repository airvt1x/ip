#pragma once
class Figure
{
private: 
	float x1, x2, x3, x4;
	float y1, y2, y3, y4;
	float S;
	float P;
	float dist(float x1f, float y1f, float x2f, float y2f);
	double angleBP(float x1f1, float y1f1, float x2f1, float y2f1, float x1f2, float y1f2, float x2f2, float y2f2);
	const double PI = 3.1415;
public:
	Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4);
	void show();
	bool is_prug();
	bool is_square();
	bool is_romb();
	bool is_in_circle();
	bool is_out_circle();
	void set_figure(float X1, float X2, float X3, float X4, float Y1, float Y2, float Y3, float Y4);
};

