#include "otherFunc.h"

ostream& operator<<(ostream& stream, Pair& pair) {
	stream << "( " << *pair.x << " ; " << *pair.y << " )";
	return stream;
}
ostream& operator<<(ostream& stream, Complex& complex) {
	stream << *complex.x << " + " << *complex.y << "i";
	return stream;
}
void funcForSwitch(int& choice, Complex& firstComplex, Complex& secondComplex) {
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
			firstComplex.setX(first);
			firstComplex.setY(second);
			system("pause");
			break;
		}
		case 2: {
			double first = 0, second = 0;
			cin >> first >> second;
			secondComplex.setX(first);
			secondComplex.setY(second);
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
			"��� ������ ����� �������� ��������? (1/2)\n" << endl;
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
				firstComplex.moveX(num);
				break;
			}
			case 2: {
				double num = 0;
				cout << "���� : ";
				cin >> num;
				firstComplex.moveY(num);
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
				secondComplex.moveX(num);
				break;
			}
			case 2: {
				double num = 0;
				cout << "���� : ";
				cin >> num;
				secondComplex.moveY(num);
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
		cout << "������ ���� : " << firstComplex << endl;
		cout << "������ ���� : " << secondComplex << endl;
		system("pause");
		break;
	}
	case 4: {
		cout << "=== �������� ����� �� ������ ===\n\n" << endl;
		int choice = 0;
		cout << "����� ����� �������� �� ������? : (1 | 2) ";
		cin >> choice;
		switch (choice)
		{
		case 1: {
			double num = 0;
			cout << "������� �������� : ";
			cin >> num;
			firstComplex.multiplyPairByScalar(num);
			break;
		}
		case 2: {
			double num = 0;
			cout << "������� �������� : ";
			cin >> num;
			secondComplex.multiplyPairByScalar(num);
			break;
		}
		default:
			break;
		}
		break;
	}
	case 5: {
		cout << "=== ��������� ����� ===\n\n" << endl;
		Pair result = firstComplex.sumForPair(secondComplex);
		cout << "��������� ����� : " << result << endl;
		system("pause");
		break;
	}
	case 6: {
		cout << "=== ��������� ��������� ===\n\n" << endl;
		Pair result = firstComplex.subForPair(secondComplex);
		cout << "��������� ��������� : " << result << endl;
		system("pause");
		break;
	}
	case 7: {
		int index = 0;
		cout << "=== ��������� ���������� �� ����� �� ������ ��������� ===\n\n" << endl;
		cout << "�� ����� ���� ��������� ����������? (1 | 2) : ";
		cin >> index;
		switch (index)
		{
		case 1: {
			cout << firstComplex.distanceToOrigin() << endl;
			system("pause");
			break;
		}
		case 2: {
			cout << secondComplex.distanceToOrigin() << endl;
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
		cout << firstComplex.distanceTo(secondComplex) << endl;
		system("pause");
		break;
	}
	case 9: {
		int index = 0;
		cout << "=== ��������� �������� ����� ������� ����� ===\n\n" << endl;
		cout << "��������� : 1) 1-2 ��� 2) 2-1 : ";
		cin >> index;
		switch (index)
		{
		case 1: {
			firstComplex = secondComplex;
			break;
		}
		case 2: {
			secondComplex = firstComplex;
			break;
		}
		default:
			break;
		}
		break;
	}
	case 10: {
		cout << "=== ��������� ��������� ===\n\n" << endl;
		Complex result = firstComplex.multiOfComplex(secondComplex);
		cout << "��������� ��������� : " << result << endl;
		system("pause");
		break;
	}
	case 11: {
		cout << "=== ��������� ������� ===\n\n" << endl;
		Complex result = firstComplex.divideOfComplex(secondComplex);
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
			cout << "������ = " << firstComplex.Module() << endl;
			system("pause");
			cout << endl;
			break;
		}
		case 2: {
			cout << "������ = " << secondComplex.Module() << endl;
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

void funcForSwitch(int& choice, Pair& firstPair, Pair& secondPair) {
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
		cout << "=== ���������� ���������� ����� ������ ===\n\n" << endl;
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
	default:
		break;
	}
}

void menu() {
	system("cls");
	int choice = 0;
	cout << "������� ����������� �����? (y | n)" << endl;
	string ans;
	cin >> ans;

	system("cls");
	if (ans == "y" || ans == "Y") {
		double first = 0, second = 0;
		int choiceForComplex = 0;
		cout << "������� �������� ������� ����� � ������� : (x y)" << endl;
		Complex complexFirst, complexSecond;
		cin >> first >> second;
		complexFirst.setX(first);
		complexFirst.setY(second);
		cout << "������� �������� ������� ����� � ������� : (x y)" << endl;
		cin >> first >> second;
		complexSecond.setX(first);
		complexSecond.setY(second);
		do {
			system("cls");
			if (ans == "y" || ans == "Y") {
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
					"13. �����\n" <<
					"14. ����� ��������\n" << endl;
				cout << "���� : ";
				cin >> choice;
				if (choice == 13) {
					return;
				}
				else if (choice == 14) {
					menu();
					choice = 13;
				}
				else {
					funcForSwitch(choice, complexFirst, complexSecond);
				}
				
			}

		} while (choice != 13);
	}
	else if(ans == "n" || ans == "N") {
		double first = 0, second = 0;
		int choiceForPair = 0;
		cout << "������� �������� ������� ����� � ������� : (x y)" << endl;
		Pair pairFirst, pairSecond;
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
				"9. ��������� �������� ���� ������ ����\n" <<
				"10. �����\n" <<
				"11. ����� ��������\n" << endl;
			cout << "���� : ";
			cin >> choice;
			if (choice == 10) {
				return;
			}
			else if (choice == 11) {
				menu();
				choice = 10;
			}
			else {
				funcForSwitch(choice, pairFirst, pairSecond);
			}
		} while (choice != 10);
	}
	else {
		cout << "������������ ����! " << endl;
	}
}