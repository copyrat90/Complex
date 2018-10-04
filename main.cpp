#include <iostream>

using namespace std;

int main(void)
{
	int 생성개수;

	cout << "생성할 개수 입력! : ";
	cin >> 생성개수;

	// '생성개수'만큼 동적 할당
	int *동적할당배열 = new int[생성개수];

	for (int i = 0; i < 생성개수; ++i)
	{
		// i번 요소에 i를 넣음
		동적할당배열[i] = i;

		// i번 요소의 값을 출력
		cout << 동적할당배열[i] << endl;
	}

	// 해제
	delete[] 동적할당배열;

	return 0;
}