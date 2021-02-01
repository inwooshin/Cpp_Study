#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void print(int n) {
	cout << n << "\t";
}

int main() {
	// ���ٽ��� ������ �����Ϸ��� �˱� ������, �����ڰ� ���ٽ��� �����ϴ� ������ Ÿ���� ������ �� ����!
	// visual studio ������ ������ �Ѵ�. ���Ŀ� ���� ���̱� ������ dev ������ �������� �ʴ� ����̴�. 
	auto love = [](string x, string y) {
		cout << "x : " << x << ", y : " << y << endl;
	};

	auto printAll = [](int n) {
		cout << n << "\t";
	};

	//���� �������� ������ ��쿡�� �ٷ� ����� �ȵȴ� ���� �ڵ忡�� ("�ο�", "õ��") �� ���� �μ���
	//�������� �ϸ� ������ ����! 
	[](string x, string y) {
		cout << "x : " << x << ", y : " << y << endl;
	}("�ο�", "õ��");

	love("��", "��"); // ���ٽ� ȣ��
	love("�ø�", "����"); // ���ٽ� ȣ��

	cout << endl;

	double pi = 3.14;

	auto cal = [pi](int r) -> double {
		return pi * r * r;
	}; //���� �����̱� ������ �����ݷ��� �ʿ��ϴ�!

	cout << cal(3) << endl;

	int sum = 0;

	[&sum](int x, int y) {
		sum = x + y;
	}(2, 3);

	cout << endl << "���� " << sum << endl << endl;

	vector <int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	for_each(v.begin(), v.end(), print);

	cout << endl;
	//�̷��� �ٷ� ���� �� ���� �ְ�
	for_each(v.begin(), v.end(), [](int n) {cout << n << "\t";});

	cout << endl;
	//������ ����Ǿ� �ִ� �Լ��� ��½����� �� �ִ�.
	for_each(v.begin(), v.end(), printAll);
}
