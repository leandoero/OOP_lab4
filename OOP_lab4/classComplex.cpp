#include "classComplex.h"

Complex Complex::multiOfComplex(const Complex& other) {
	double real = (*x) * (*other.x) - (*y) * (*other.y);
	double imag = (*x) * (*other.y) + (*y) * (*other.x);
	return Complex{ real, imag };
}

Complex Complex::divideOfComplex(const Complex& other) {
	double denominator = *other.x * *other.x + *other.y * *other.y;
	double real = (*x * *other.x + *y * *other.y) / denominator;
	double imag = (*y * *other.x - *x * *other.y) / denominator;
	return Complex{ real, imag };
}
double Complex::Module() {
	double res = sqrt(*x * *x + *y * *y);
	return res;
}