// ���Ҽ� a + bi ���� ���� ���� 
// a, b ��������
 

#include <iostream>
#include "complex.h"

using namespace std;


Complex getComplex(void);


int main(void)
{	
	cout << "���Ҽ� ���� ���� ���α׷��Դϴ�." << endl;
	cout << "�� �ΰ��� �����մϴ�." << endl << endl;

	cout << "ù ��° ���Ҽ� �Է��Դϴ�." << endl;
	Complex c1 = getComplex();

	cout << "�� ��° ���Ҽ� �Է��Դϴ�." << endl;
	Complex c2 = getComplex();

	cout << endl;
	
	char complexOperator;

	while (true)
	{
		cin.ignore();
		cout << "���Ͻ÷��� +, ���Ͻ÷��� *�� �Է��ϼ��� : ";
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
			cout << "�����ڰ� �߸� �ԷµǾ����ϴ�." << endl;
	}

	cout << endl;

	return 0;
}


Complex getComplex(void)
{
	int real, imaginary; 
	
	cout << "�Ǽ��θ� �Է��ϼ���: ";
	cin >> real;

	cout << "����θ� �Է��ϼ���: ";
	cin >> imaginary;

	Complex cReturn(real, imaginary);
	cout << "�Էµ� ���Ҽ��� (" << cReturn << ") �Դϴ�." << endl << endl;
	
	return cReturn;
}
