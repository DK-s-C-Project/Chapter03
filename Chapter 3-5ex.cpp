/* �ε� �Ҽ������� ���� �����ڸ� ����� �� �����ؾ��ϴ� ���� ����*/
#include<iostream>
using namespace std;

int main()
{
 
	double d1(100 - 99.99);
	double d2(10 - 9.99);
	cout << std::abs(d1 - d2) << endl;// ���� ���� ���ϴ� camth �Լ��̴�. �� �������� d1�� d2�� �ٸ��ٴ� ���� �� �� �ִ�.

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

	const double epsilon = 1e-10;// d1��b2�� ���̸� epsilon�̶�� �������� �ΰ� ������ �ٸ����� �����Ѵ�. epsilon�� ���α׷��Ӱ� � �о߿� �ִ��Ŀ� ���� ���� �ȴ�. ������ �����غ��ƿ�.

	if (std::abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << " Not equal" << endl;

	// ������ �Ѱ迡 ���� �´��� �ٸ��İ� ������ �ȴ�. ��ġ ����ȭ�� �⺻ �����̴�. ��� �ϵ��� ����.

	return 0;
}
// ��ġ ����ȭ�� ������ �� ����.