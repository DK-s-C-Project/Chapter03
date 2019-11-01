/* 부동 소수점에서 관계 연산자를 사용할 때 유의해야하는 점에 대해*/
#include<iostream>
using namespace std;

int main()
{
 
	double d1(100 - 99.99);
	double d2(10 - 9.99);
	cout << std::abs(d1 - d2) << endl;// 절대 값을 구하는 camth 함수이다. 이 선언문으로 d1과 d2가 다르다는 것을 알 수 있다.

	//if (d1 == d2)
	//	cout << "equal" << endl;
	//else
	//{
	//	cout << "Not equal" << endl;

	//	if (d1 > d2)
	//		cout << "d1 > d2" << endl;
	//	else// if (d1<d2) because d1!=d2
	//		cout << "d1 < d2 " << endl;

	//}

	const double epsilon = 1e-10;// d1과b2의 차이를 epsilon이라는 기준점을 두고 같은지 다른지를 결정한다. epsilon은 프로그래머가 어떤 분야에 있느냐에 따라 결정 된다. 극한을 복습해보아요.

	if (std::abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << " Not equal" << endl;

	// 오차의 한계에 따라 맞느냐 다르냐가 결정이 된다. 수치 최적화의 기본 개념이다. 기억 하도록 하자.

	return 0;
}
// 수치 최적화를 과목을 꼭 들어보자.