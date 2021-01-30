#include <iostream>
#include <fstream>
using namespace std;

//ifstream 은 프로그램에서 받아오는 것이기 때문에 input 이다!
//ofstream 은 프로그램에서 나가는 것이기 때문에 output 이다! 
long getFileSize(ifstream& fin) {
	fin.seekg(0, ios::end); // get pointer를 파일의 맨 끝으로 옮김
	long length = fin.tellg(); // get pointer의 위치를 알아냄
	
	return length; // length는 파일의 크기와 동일
}

int main() {
	const char* file = "c:\\windows\\system.ini";
	ifstream fin(file);
	
	if(!fin) { // 열기 실패 검사
	cout << file << " 열기 오류" << endl;
	return 0;
	}
	
	cout << file << "의 크기는 " << getFileSize(fin);
	
	fin.close();
}
