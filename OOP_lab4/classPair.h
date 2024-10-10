#pragma once

#include <iostream>

using namespace std;
class Pair {
protected:
	double* x;
	double* y;
public:
	Pair(double a = 0.0, double b = 0.0);
	Pair(const Pair&);
	Pair& operator=(const Pair&);

	void setX(double);
	void setY(double);

	double* getX();
	double* getY();

	void moveX(double);
	void moveY(double);

	void multiplyPairByScalar(double);

	Pair sumForPair(const Pair&);
	Pair subForPair(const Pair&);

	double distanceToOrigin();
	double distanceTo(const Pair&);

	friend ostream& operator<<(ostream&, Pair&);

	~Pair();
};