#include <iostream>
using namespace std;

/*
реализуем все операции для Pair все операции которые можно сделать для пар чисел,
а в Complex реализовать дополнительные операции которые как раз для комплексных
умножение на скаляр и модуль пары (расстояние от начала координат до этой точки)

пара это вектор для

в производном умножение и деление

*/
class Pair {
protected:
	double* x;
	double* y;
public:
	Pair(double a = 0.0, double b = 0.0);
	Pair(const Pair&);
	Pair& operator=(const Pair&);

	inline void setX(double);
	inline void setY(double);

	inline double* getX();
	inline double* getY();

	inline void moveX(double);
	inline void moveY(double);

	inline void multiplyPairByScalar(double);

	Pair sumForPair(const Pair&);
	Pair subForPair(const Pair&);

	double distanceToOrigin();
	double distanceTo(const Pair&);

	~Pair();
};

class Complex : public Pair {
public:

};

Pair& Pair::operator=(const Pair& other) {
	if (this == &other) {
		return *this;
	}
	
	if (x) {
		delete x;
		x = nullptr;
	}
	if (y) {
		delete y;
		y = nullptr;
	}

	x = new double{ *other.x };
	y = new double{ *other.y };

	return *this;

	/*
	Complex& Complex::operator=(const Complex& other) {
	if (*this == other) {
		return	*this;
	}
	*real = *other.real;
	*imag = *other.imag;

	return *this;	*/
}

Pair::Pair(const Pair& other) {
	x = new double { *other.x };
	y = new double { *other.y };
}

void Pair::multiplyPairByScalar(double scalar) {
	*x *= scalar;
	*y *= scalar;
}

double Pair::distanceToOrigin() {
	return sqrt((*x) * (*x) + (*y) * (*y));
}
double Pair::distanceTo(const Pair& other) {
	return std::sqrt((*x - *other.x) * (*x - *other.x) + (*y - *other.y) * (*y - *other.y));
}

Pair Pair::sumForPair(const Pair& other) {
	Pair pair{ *x + *other.x, *y + *other.y };
	return pair;
}

Pair Pair::subForPair(const Pair& other) {
	Pair pair{ *x - *other.x, *y - *other.y };
	return pair;
}

void Pair::moveX(double moveX) {
	*x += moveX;
}
void Pair::moveY(double moveY) {
	*y += moveY;
}

void Pair::setX(double setX) {
	*x = setX;
}

void Pair::setY(double setY) {
	*y = setY;
}

double* Pair::getX() {
	return x;
}
double* Pair::getY() {
	return y;
}

Pair::Pair(double a, double b) {
	x = new double{ a };
	y = new double{ b };
}

Pair::~Pair() {
	delete x;
	delete y;
	x = nullptr;
	y = nullptr;
}

void menu() {
	system("cls");

}

int main() {

	return 0;
}

