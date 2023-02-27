#include "Tri_ungl.h"
#include <iostream>
#include <cmath>

using namespace std;

bool Tri_ungl::exst_tr() {
    return ((a + b > c) && (b + c > a) && (a + c > b));
}
void Tri_ungl::set(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
}
void Tri_ungl::show() {
    cout << "1 сторона: " << a << endl;
    cout << "2 сторона: " << b << endl;
    cout << "3 сторона: " << c << endl;
}
double Tri_ungl::perimetr() {
    double p = a + b + c;
    return p;
}
double Tri_ungl::square() {
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}