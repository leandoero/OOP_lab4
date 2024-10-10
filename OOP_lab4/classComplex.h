#pragma once
#include "classPair.h"
#include <iostream>
class Complex : public Pair {
public:
	Complex(double real = 0.0, double imag = 0.0) : Pair(real, imag) {};
	Complex multiOfComplex(const Complex&);
	Complex divideOfComplex(const Complex&);
	double Module();
};