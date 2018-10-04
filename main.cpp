#include "common.h"
#include "complex.h"
#include "rational.h"

using namespace std;


void getNumDen(int& num, int& den)
{
	do
	{
		cout << "분자를 입력하세요 : ";
		cin >> num;
	}
	while (!cin);
	
	do
	{
		cout << "분모를 입력하세요 : ";
		cin >> den;
		if (den == 0)
		{
			cout << "분모는 0일 수 없습니다." << endl;
			continue;
		}
	}
	while (!cin);
}


Complex getComplex(void)
{
	int num, den;

	cout << "실수부를 입력합니다." << endl;
	getNumDen(num, den);
	Rational realPart(num, den);

	cout << "허수부를 입력합니다." << endl;
	getNumDen(num, den);
	Rational imaginaryPart(num, den);

	return Complex(imaginaryPart, realPart);
}


int main(int argc, char** argv)
{
	cout << "복소수 덧셈 뺄셈 프로그램입니다." << endl;
	cout << "항 두개만 지원합니다." << endl << endl;

	cout << "첫 번째 숫자 입력입니다." << endl;
	Complex c1 = getComplex();

	cout << "두 번째 숫자 입력입니다." << endl;
	Complex c2 = getComplex();

	cout << endl;
	char fractionOperator;
	Complex cResult;

	while (true)
	{
		cin.ignore();
		cout << "더하시려면 +, 곱하시려면 *를 입력하세요 : ";
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
			cout << "연산자가 잘못 입력되었습니다." << endl;
	}

	cout << "== ";
	cResult.print();
	cout << endl;

	return 0;
}
