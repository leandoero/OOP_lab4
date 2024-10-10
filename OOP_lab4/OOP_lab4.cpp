#include <iostream>
using namespace std;

/*
реализуем все операции для Pair все операции которые можно сделать для пар чисел,
а в Complex реализовать дополнительные операции которые как раз для комплексных
умножение на скаляр и модуль пары (расстояние от начала координат до этой точки)

пара это вектор

 создание объекта на основе другого это конструктор копирования
 если просто уже два существовали и надо скопировать характеристики то это присваивание
 если хотим вернуть того который существовал до этого то возвращаем по ссылке

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

	friend ostream& operator<<(ostream&, Pair&);

	~Pair();
};

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
ostream& operator<<(ostream& stream, Pair& pair) {
	stream << *pair.x << " " << *pair.y;
	return stream;
}

class Complex : public Pair {
public:
	Complex(double real = 0.0, double imag = 0.0) : Pair(real, imag) {};
	Complex multiOfComplex(const Complex&);
	Complex divideOfComplex(const Complex&);
	double Module();
};

Complex Complex::multiOfComplex(const Complex& other) {
	double real = (*x) * (*other.x) - (*y) * (*other.y);
	double imag = (*x) * (*other.y) + (*y) * (*other.x);
	return Complex{ real, imag };
}

Complex Complex::divideOfComplex(const Complex& other) {
	double denominator = *other.x * *other.x + *other.y + *other.y;
	double real = (*x * *other.x + *y * *other.y) / denominator;
	double imag = (*y * *other.x - *x * *other.y) / denominator;
	return Complex{ real, imag };
}
double Complex::Module() {
	double res = sqrt(*x * *x + *y * *y);
	return res;
}

void funcForSwitch(int& choice, Complex& firstPair, Complex& secondPair) {
	system("cls");
	switch (choice)
	{
	case 1: {
		cout << "=== Установить новое значение ===\n\n" <<
			"Для какой пары чисел установить значения? (1/2)\n" << endl;
		cout << "Ввод:";
		int choice = 0;
		cin >> choice;
		switch (choice)
		{
		case 1: {
			double first = 0, second = 0;
			firstPair.setX(first);
			firstPair.setY(second);
			system("pause");
			break;
		}
		case 2: {
			double first = 0, second = 0;
			secondPair.setX(first);
			secondPair.setY(second);
			system("pause");
			break;
		}
		default:
			break;
		}
		break;
	}
	case 2: {
		cout << "=== Изменить значение ===\n\n" <<
			"Для какой пары чисел изменить значения? (1/2)\n" << endl;
		cout << "Ввод:";
		int choice = 0;
		cin >> choice;
		switch (choice)
		{
		case 1: {
			cout << "Изменить первое или второе значение? (1 | 2) : " << endl;
			cin >> choice;
			cout << endl;
			switch (choice)
			{
			case 1: {
				double num = 0;
				cout << "Ввод : ";
				cin >> num;
				firstPair.moveX(num);
				break;
			}
			case 2: {
				double num = 0;
				cout << "Ввод : ";
				cin >> num;
				firstPair.moveY(num);
				break;
			}
			default:
				break;
			}
			system("pause");
			break;
		}
		case 2: {
			cout << "Изменить первое или второе значение? (1 | 2) : " << endl;
			cin >> choice;
			cout << endl;
			switch (choice)
			{
			case 1: {
				double num = 0;
				cout << "Ввод : ";
				cin >> num;
				secondPair.moveX(num);
				break;
			}
			case 2: {
				double num = 0;
				cout << "Ввод : ";
				cin >> num;
				secondPair.moveY(num);
				break;
			}
			default:
				break;
			}
			system("pause");
			break;
		}
		default:
			break;
		}
		break;
	}
	case 3: {
		int choice = 0;
		cout << "=== Распечатать значения ===\n\n" << endl;
		cout << "Для какой пары распечатать значение : (1 | 2) ";
		cin >> choice;
		switch (choice)
		{
		case 1: {
			cout << firstPair << endl;
			system("pause");
			break;
		}
		case 2: {
			cout << secondPair << endl;
			system("pause");
			break;
		}
		default:
			break;
		}
		break;
	}
	case 4: {
		cout << "=== Умножить пару на скаляр ===\n\n" << endl;
		int choice = 0;
		cout << "Какую пару умножить на скаляр? : (1 | 2) ";
		cin >> choice;
		switch (choice)
		{
		case 1: {
			double num = 0;
			cout << "Введите значение : ";
			cin >> num;
			firstPair.multiplyPairByScalar(num);
			break;
		}
		case 2: {
			double num = 0;
			cout << "Введите значение : ";
			cin >> num;
			secondPair.multiplyPairByScalar(num);
			break;
		}
		default:
			break;
		}
		break;
	}
	case 5: {
		cout << "=== Выполнить сумму ===\n\n" << endl;
		Pair result = firstPair.sumForPair(secondPair);
		cout << "Результат суммы : " << result << endl;
		system("pause");
		break;
	}
	case 6: {
		cout << "=== Выполнить вычитание ===\n\n" << endl;
		Pair result = firstPair.subForPair(secondPair);
		cout << "Результат вычитания : " << result << endl;
		system("pause");
		break;
	}
	case 7: {
		int index = 0;
		cout << "=== Вычислить расстояние от пары до начала координат ===\n\n" << endl;
		cout << "От какой пары вычислить расстояние? (1 | 2) : ";
		cin >> index;
		switch (index)
		{
		case 1: {
			cout << firstPair.distanceToOrigin() << endl;
			system("pause");
			break;
		}
		case 2: {
			cout << secondPair.distanceToOrigin() << endl;
			system("pause");
			break;
		}
		default:
			break;
		}
		break;
	}
	case 8: {
		cout << "=== Определить расстояние между точками ===\n\n" << endl;
		cout << firstPair.distanceTo(secondPair) << endl;
		system("pause");
		break;
	}
	case 9: {
		int index = 0;
		cout << "=== Присвоить значение пары другой паре ===\n\n" << endl;
		cout << "Присвоить : 1) 1-2 или 2) 2-1 : ";
		cin >> index;
		switch (index)
		{
		case 1: {
			firstPair = secondPair;
			break;
		}
		case 2: {
			secondPair = firstPair;
			break;
		}
		default:
			break;
		}
		break;
	}
	case 10: {
		cout << "=== Выполнить умножение ===\n\n" << endl;
		Complex result = firstPair.multiOfComplex(secondPair);
		cout << "Результат умножения : " << result << endl;
		system("pause");
		break;
	}
	case 11: {
		cout << "=== Выполнить деление ===\n\n" << endl;
		Complex result = firstPair.divideOfComplex(secondPair);
		cout << "Результат деления : " << result << endl;
		system("pause");
		break;
	}
	case 12: {
		cout << "=== Вычислить модуль ===\n\n" << endl;
		cout << "Модуль какой пары вычислить? (1 | 2) : ";
		int index = 0;
		cin >> index;
		switch (index)
		{
		case 1: {
			cout << "Модуль = " << firstPair.Module() << endl;
			system("pause");
			cout << endl;
			break;
		}
		case 2: {
			cout << "Модуль = " << secondPair.Module() << endl;
			system("pause");
			cout << endl;
			break;
		}
		default:
			break;
		}
		break;
	}
	default:
		break;
	}
}

void menu() {
	system("cls");
	double first = 0, second = 0;
	int choice = 0;
	cout << "Введите значения первого числа в формате : (x y)" << endl;
	Complex pairFirst, pairSecond;
	cin >> first >> second;
	pairFirst.setX(first);
	pairFirst.setY(second);
	cout << "Введите значения второго числа в формате : (x y)" << endl;
	cin >> first >> second;
	pairSecond.setX(first);
	pairSecond.setY(second);

	do {
		system("cls");

		cout << "Выберите операцию:\n" <<
			"1. Установить новое значение\n" <<
			"2. Изменить значение (прибавить / отнять)\n" <<
			"3. Распечатать значения\n" <<
			"4. Умножить пару на скаляр\n" <<
			"5. Выполнить сумму\n" <<
			"6. Выполнить вычитание\n" <<
			"7. Вычислить расстояние от пары до начала координат\n" <<
			"8. Определить расстояние между точками\n" <<
			"9. Присвоить значение пары другой паре\n\n" <<
			"-----------------------------------\n\n" <<
			"10. Выполнить умножение\n" <<
			"11. Выполнить деление\n" <<
			"12. Вычислить модуль\n"
			"13. Выход\n" << endl;

		cout << "Ввод : ";
		cin >> choice;
		if (choice == 13) {
			return;
		}
		else {
			funcForSwitch(choice, pairFirst, pairSecond);
		}
	} while (choice != 13);
}

int main() {
	setlocale(LC_ALL, "ru");
	menu();

	return 0;
}