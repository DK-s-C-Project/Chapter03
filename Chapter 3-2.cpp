/* Arithmetic Operators 산술 연산자*/
#include<iostream>
using namespace std;

int main()
{
	int x = 1;
	int y = 2; // leave a note about the reason of the statement.
	int z = x;// =는 대입 연산자로써 x의 변수가 가르키는 정보(7)을 z의 메모리에 복사해 넣어라 라는 의미이다.
	z += y; // z = z+y;--> 코딩의 양을 줄이기 위해, 오타의 가능성을 줄이기 위해, 간편성을 위해 이렇게 작성을 하게 된다.
	cout << x << endl;
	// 대입연산자에 대해 복습해 보세요
	return 0;
}