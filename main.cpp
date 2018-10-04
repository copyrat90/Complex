#include "common.h"
#include "complex.h"
#include "rational.h"

using namespace std;


void getNumDen(int& num, int& den)
{
	do
	{
		cout << "���ڸ� �Է��ϼ��� : ";
		cin >> num;
	}
	while (!cin);
	
	do
	{
		cout << "�и� �Է��ϼ��� : ";
		cin >> den;
		if (den == 0)
		{
			cout << "�и�� 0�� �� �����ϴ�." << endl;
			continue;
		}
	}
	while (!cin);
}


Complex getComplex(void)
{
	int num, den;

	cout << "�Ǽ��θ� �Է��մϴ�." << endl;
	getNumDen(num, den);
	Rational realPart(num, den);

	cout << "����θ� �Է��մϴ�." << endl;
	getNumDen(num, den);
	Rational imaginaryPart(num, den);

	return Complex(imaginaryPart, realPart);
}


int main(int argc, char** argv)
{
	cout << "���Ҽ� ���� ���� ���α׷��Դϴ�." << endl;
	cout << "�� �ΰ��� �����մϴ�." << endl << endl;

	cout << "ù ��° ���� �Է��Դϴ�." << endl;
	Complex c1 = getComplex();

	cout << "�� ��° ���� �Է��Դϴ�." << endl;
	Complex c2 = getComplex();

	cout << endl;
	char fractionOperator;
	Complex cResult;

	while (true)
	{
		cin.ignore();
		cout << "���Ͻ÷��� +, ���Ͻ÷��� *�� �Է��ϼ��� : ";
		cin >> fractionOperator;

		if (fractionOperator == '+')
		{
			cResult = c1 + c2;
			break;
		}
		else if (fractionOperator == '*')
		{
			cResult = c1 * c2;
			break;
		}
		else
			cout << "�����ڰ� �߸� �ԷµǾ����ϴ�." << endl;
	}

	cout << "== ";
	cResult.print();
	cout << endl;

	return 0;
}
