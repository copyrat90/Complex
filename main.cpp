#include <iostream>

using namespace std;

int main(void)
{
	int ��������;

	cout << "������ ���� �Է�! : ";
	cin >> ��������;

	// '��������'��ŭ ���� �Ҵ�
	int *�����Ҵ�迭 = new int[��������];

	for (int i = 0; i < ��������; ++i)
	{
		// i�� ��ҿ� i�� ����
		�����Ҵ�迭[i] = i;

		// i�� ����� ���� ���
		cout << �����Ҵ�迭[i] << endl;
	}

	// ����
	delete[] �����Ҵ�迭;

	return 0;
}