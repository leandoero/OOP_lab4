#include "classPair.h"

Pair& Pair::operator=(const Pair& other) {
	if (this == &other) {
		return	*this;
	}
	*x = *other.x;
	*y = *other.y;

	return *this;
}

Pair::Pair(const Pair& other) {
	x = new double{ *other.x };
	y = new double{ *other.y };
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
	return Pair{ *x + *other.x, *y + *other.y };
}

Pair Pair::subForPair(const Pair& other) {
	return Pair{ *x - *other.x, *y - *other.y };
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