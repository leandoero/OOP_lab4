#include "otherFunc.h"

ostream& operator<<(ostream& stream, Pair& pair) {
	stream << *pair.x << " " << *pair.y;
	return stream;
}
void funcForSwitch(int& choice, Complex& firstPair, Complex& secondPair) {
	system("cls");
	switch (choice)
	{
	case 1: {
		cout << "=== ���������� ����� �������� ===\n\n" <<
			"��� ����� ���� ����� ���������� ��������? (1/2)\n" << endl;
		cout << "����:";
		int choice = 0;
		cin >> choice;
		switch (choice)
		{
		case 1: {
			double first = 0, second = 0;
			cin >> first >> second;
			firstPair.setX(first);
			firstPair.setY(second);
			system("pause");
			break;
		}
		case 2: {
			double first = 0, second = 0;
			cin >> first >> second;
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
		cout << "=== �������� �������� ===\n\n" <<
			"��� ����� ���� ����� �������� ��������? (1/2)\n" << endl;
		cout << "����:";
		int choice = 0;
		cin >> choice;
		switch (choice)
		{
		case 1: {
			cout << "�������� ������ ��� ������ ��������? (1 | 2) : " << endl;
			cin >> choice;
			cout << endl;
			switch (choice)
			{
			case 1: {
				double num = 0;
				cout << "���� : ";
				cin >> num;
				firstPair.moveX(num);
				break;
			}
			case 2: {
				double num = 0;
				cout << "���� : ";
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
			cout << "�������� ������ ��� ������ ��������? (1 | 2) : " << endl;
			cin >> choice;
			cout << endl;
			switch (choice)
			{
			case 1: {
				double num = 0;
				cout << "���� : ";
				cin >> num;
				secondPair.moveX(num);
				break;
			}
			case 2: {
				double num = 0;
				cout << "���� : ";
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
		cout << "=== ����������� �������� ===\n\n" << endl;
		cout << "������ ���� : " << firstPair << endl;
		cout << "������ ���� : " << secondPair << endl;
		system("pause");
		break;
	}
	case 4: {
		cout << "=== �������� ���� �� ������ ===\n\n" << endl;
		int choice = 0;
		cout << "����� ���� �������� �� ������? : (1 | 2) ";
		cin >> choice;
		switch (choice)
		{
		case 1: {
			double num = 0;
			cout << "������� �������� : ";
			cin >> num;
			firstPair.multiplyPairByScalar(num);
			break;
		}
		case 2: {
			double num = 0;
			cout << "������� �������� : ";
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
		cout << "=== ��������� ����� ===\n\n" << endl;
		Pair result = firstPair.sumForPair(secondPair);
		cout << "��������� ����� : " << result << endl;
		system("pause");
		break;
	}
	case 6: {
		cout << "=== ��������� ��������� ===\n\n" << endl;
		Pair result = firstPair.subForPair(secondPair);
		cout << "��������� ��������� : " << result << endl;
		system("pause");
		break;
	}
	case 7: {
		int index = 0;
		cout << "=== ��������� ���������� �� ���� �� ������ ��������� ===\n\n" << endl;
		cout << "�� ����� ���� ��������� ����������? (1 | 2) : ";
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
		cout << "=== ���������� ���������� ����� ������� ===\n\n" << endl;
		cout << firstPair.distanceTo(secondPair) << endl;
		system("pause");
		break;
	}
	case 9: {
		int index = 0;
		cout << "=== ��������� �������� ���� ������ ���� ===\n\n" << endl;
		cout << "��������� : 1) 1-2 ��� 2) 2-1 : ";
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
		cout << "=== ��������� ��������� ===\n\n" << endl;
		Complex result = firstPair.multiOfComplex(secondPair);
		cout << "��������� ��������� : " << result << endl;
		system("pause");
		break;
	}
	case 11: {
		cout << "=== ��������� ������� ===\n\n" << endl;
		Complex result = firstPair.divideOfComplex(secondPair);
		cout << "��������� ������� : " << result << endl;
		system("pause");
		break;
	}
	case 12: {
		cout << "=== ��������� ������ ===\n\n" << endl;
		cout << "������ ����� ���� ���������? (1 | 2) : ";
		int index = 0;
		cin >> index;
		switch (index)
		{
		case 1: {
			cout << "������ = " << firstPair.Module() << endl;
			system("pause");
			cout << endl;
			break;
		}
		case 2: {
			cout << "������ = " << secondPair.Module() << endl;
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
	cout << "������� �������� ������� ����� � ������� : (x y)" << endl;
	Complex pairFirst, pairSecond;
	cin >> first >> second;
	pairFirst.setX(first);
	pairFirst.setY(second);
	cout << "������� �������� ������� ����� � ������� : (x y)" << endl;
	cin >> first >> second;
	pairSecond.setX(first);
	pairSecond.setY(second);

	do {
		system("cls");

		cout << "�������� ��������:\n" <<
			"1. ���������� ����� ��������\n" <<
			"2. �������� �������� (��������� / ������)\n" <<
			"3. ����������� ��������\n" <<
			"4. �������� ���� �� ������\n" <<
			"5. ��������� �����\n" <<
			"6. ��������� ���������\n" <<
			"7. ��������� ���������� �� ���� �� ������ ���������\n" <<
			"8. ���������� ���������� ����� �������\n" <<
			"9. ��������� �������� ���� ������ ����\n\n" <<
			"-----------------------------------\n\n" <<
			"10. ��������� ���������\n" <<
			"11. ��������� �������\n" <<
			"12. ��������� ������\n"
			"13. �����\n" << endl;

		cout << "���� : ";
		cin >> choice;
		if (choice == 13) {
			return;
		}
		else {
			funcForSwitch(choice, pairFirst, pairSecond);
		}
	} while (choice != 13);
}
