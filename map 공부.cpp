#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main (void){
	map <string, string> m;
	
	//map ������ insert �� Ư���ּҷ� ���� ���� ���� �ƴ϶� ���� Ž��Ʈ���� �ڵ�����
	//���ĵǼ� ����ȴ�. 
	m.insert(make_pair("love", "���"));
	m["love"] = "���";
	
	string kor = m["love"];
	
	cout << kor << endl; 
	
	vector<int> v;
	
	vector<int>::iterator it = v.begin();
	
	it++;
	v.insert(it, 3);
	//���⼭�� �޸𸮸� �Ҵ������� �ʾұ� ������ ���� ���� �ʴ´�. 
	
	cout << v[1] << endl;
}
