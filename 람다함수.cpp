#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void print(int n) {
	cout << n << "\t";
}

int main() {
	// 람다식의 형식은 컴파일러만 알기 때문에, 개발자가 람다식을 저장하는 변수의 타입을 선언할 수 없음!
	// visual studio 에서는 지원을 한다. 이후에 생긴 것이기 때문에 dev 에서는 지원하지 않는 모양이다. 
	auto love = [](string x, string y) {
		cout << "x : " << x << ", y : " << y << endl;
	};

	auto printAll = [](int n) {
		cout << n << "\t";
	};

	//변수 형식으로 선언할 경우에는 바로 사용은 안된다 위의 코드에서 ("인우", "천재") 와 같은 인수를
	//넣으려고 하면 에러가 난다! 
	[](string x, string y) {
		cout << "x : " << x << ", y : " << y << endl;
	}("인우", "천재");

	love("돈", "너"); // 람다식 호출
	love("냉면", "만두"); // 람다식 호출

	cout << endl;

	double pi = 3.14;

	auto cal = [pi](int r) -> double {
		return pi * r * r;
	}; //변수 선언이기 때문에 세미콜론이 필요하다!

	cout << cal(3) << endl;

	int sum = 0;

	[&sum](int x, int y) {
		sum = x + y;
	}(2, 3);

	cout << endl << "합은 " << sum << endl << endl;

	vector <int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	for_each(v.begin(), v.end(), print);

	cout << endl;
	//이렇게 바로 만들어서 쓸 수도 있고
	for_each(v.begin(), v.end(), [](int n) {cout << n << "\t";});

	cout << endl;
	//변수에 저장되어 있는 함수를 출력시켜줄 수 있다.
	for_each(v.begin(), v.end(), printAll);
}
