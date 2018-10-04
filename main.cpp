#include "common.h"
#include "complex.h"

using namespace std;


// 다시 고치는 중 
int main(int argc, char** argv)
{	
	int numTemp, denTemp;
	
	cout << "분수 덧셈 뺄셈 프로그램입니다." << endl;
	cout << "항 두개만 지원합니다." << endl << endl;
	
	cout << "첫 번째 숫자 입력입니다." << endl;
	do
	{
		cout << "분자를 입력하세요 : ";
		cin >> numTemp;
	} while (!cin);
	do
	{
		cout << "분모를 입력하세요 : ";
		cin >> denTemp;
		if (denTemp == 0)
		{
			cout << "분모는 0일 수 없습니다." << endl;
			continue;
		}
	} while (!cin);
	
#ifdef _DEBUG_MODE_
	cout << "Rational r1(" << numTemp << ", " << denTemp << ")\n";
#endif
	Rational r1(numTemp, denTemp);
	
	cout << "두 번째 숫자 입력입니다." << endl;
	do
	{
		cout << "분자를 입력하세요 : ";
		cin >> numTemp;
	} while (!cin);
	do
	{
		cout << "분모를 입력하세요 : ";
		cin >> denTemp;
		if (denTemp == 0)
		{
			cout << "분모는 0일 수 없습니다." << endl;
			continue;
		}
	} while (!cin);
	
#ifdef _DEBUG_MODE_
	cout << "Rational r2(" << numTemp << ", " << denTemp << ")\n";
#endif
	Rational r2(numTemp, denTemp);
	
	cout << endl;
	char fractionOperator;
	Rational rResult;

	while (true)
	{
		cin.ignore();
		cout << "더하시려면 +, 곱하시려면 *를 입력하세요 : ";
		cin >> fractionOperator;

		if (fractionOperator == '+')
		{
			rResult = r1.add(r2);
			break;
		}
		else if (fractionOperator == '*')
		{
			rResult = r1.multiply(r2);
			break;
		}
		else
			cout << "연산자가 잘못 입력되었습니다." << endl;
	}
	
	cout << "== ";
	rResult.print();
	cout << endl;
	
	return 0;
}
