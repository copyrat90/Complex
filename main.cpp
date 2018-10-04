#include "common.h"
#include "complex.h"

using namespace std;


// �ٽ� ��ġ�� �� 
int main(int argc, char** argv)
{	
	int numTemp, denTemp;
	
	cout << "�м� ���� ���� ���α׷��Դϴ�." << endl;
	cout << "�� �ΰ��� �����մϴ�." << endl << endl;
	
	cout << "ù ��° ���� �Է��Դϴ�." << endl;
	do
	{
		cout << "���ڸ� �Է��ϼ��� : ";
		cin >> numTemp;
	} while (!cin);
	do
	{
		cout << "�и� �Է��ϼ��� : ";
		cin >> denTemp;
		if (denTemp == 0)
		{
			cout << "�и�� 0�� �� �����ϴ�." << endl;
			continue;
		}
	} while (!cin);
	
#ifdef _DEBUG_MODE_
	cout << "Rational r1(" << numTemp << ", " << denTemp << ")\n";
#endif
	Rational r1(numTemp, denTemp);
	
	cout << "�� ��° ���� �Է��Դϴ�." << endl;
	do
	{
		cout << "���ڸ� �Է��ϼ��� : ";
		cin >> numTemp;
	} while (!cin);
	do
	{
		cout << "�и� �Է��ϼ��� : ";
		cin >> denTemp;
		if (denTemp == 0)
		{
			cout << "�и�� 0�� �� �����ϴ�." << endl;
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
		cout << "���Ͻ÷��� +, ���Ͻ÷��� *�� �Է��ϼ��� : ";
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
			cout << "�����ڰ� �߸� �ԷµǾ����ϴ�." << endl;
	}
	
	cout << "== ";
	rResult.print();
	cout << endl;
	
	return 0;
}
