#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main (void){
	map <string, string> m;
	
	//map 에서의 insert 는 특정주소로 값을 쓰는 것이 아니라 이진 탐색트리에 자동으로
	//정렬되서 저장된다. 
	m.insert(make_pair("love", "사랑"));
	m["love"] = "사랑";
	
	string kor = m["love"];
	
	cout << kor << endl; 
	
	vector<int> v;
	
	vector<int>::iterator it = v.begin();
	
	it++;
	v.insert(it, 3);
	//여기서는 메모리를 할당해주지 않았기 때문에 값이 뜨지 않는다. 
	
	cout << v[1] << endl;
}
