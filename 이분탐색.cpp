#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main (void){
	vector<int> a;
	
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	a.push_back(6);
	a.push_back(7);
	a.push_back(8);
	a.push_back(9);
	a.push_back(9);
	a.push_back(9);
	
	for(int i = 0 ; i < a.size() ; i++){
		cout << a[i];
	}
	cout << endl << "5 �̸��� ���� ���� : "<< lower_bound(a.begin(), a.end(), 5) - a.begin() << endl;
	cout << "5 ������ ���� ���� : " << upper_bound(a.begin(), a.end(), 5) - a.begin() << endl;
	cout << "5 �̻��� ���� ���� : " << a.end() - lower_bound(a.begin(), a.end(), 5) << endl;
	cout << "5 �ʰ��� ���� ���� : " << a.end() - upper_bound(a.begin(), a.end(), 5) << endl; 
}
