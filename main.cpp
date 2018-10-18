// 복소수 a + bi 덧셈 곱셈 계산기 
// a, b 정수버전
 

#include <iostream>
#include "complex.h"

using namespace std;


Complex getComplex(void);


int main(void)
{	
	cout << "복소수 덧셈 곱셈 프로그램입니다." << endl;
	cout << "항 두개만 지원합니다." << endl << endl;

	cout << "첫 번째 복소수 입력입니다." << endl;
	Complex c1 = getComplex();

	cout << "두 번째 복소수 입력입니다." << endl;
	Complex c2 = getComplex();

	cout << endl;
	
	char complexOperator;

	while (true)
	{
		cin.ignore();
		cout << "더하시려면 +, 곱하시려면 *를 입력하세요 : ";
		cin >> complexOperator;

		if (complexOperator == '+')
		{
			cout << '(' << c1 << ") + (" << c2 << ") == " << c1 + c2;
			break;
		}
		else if (complexOperator == '*')
		{
			cout << '(' << c1 << ") * (" << c2 << ") == " << c1 * c2;
			break;
		}
		else
			cout << "연산자가 잘못 입력되었습니다." << endl;
	}

	cout << endl;

	return 0;
}


Complex getComplex(void)
{
	int real, imaginary; 
	
	cout << "실수부를 입력하세요: ";
	cin >> real;

	cout << "허수부를 입력하세요: ";
	cin >> imaginary;

	Complex cReturn(real, imaginary);
	cout << "입력된 복소수는 (" << cReturn << ") 입니다." << endl << endl;
	
	return cReturn;
}
