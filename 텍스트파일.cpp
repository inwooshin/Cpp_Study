#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// fout 이면은 프로그램에서 나간다는 것이다.
// fin 은 프로그램에 들어온다는 것이다. 

int main() {
	/*
	const char* firstFile = "C:/Users/dkrle/Desktop/song.txt";
	const char* secondFile = "C:/Users/dkrle/Desktop/file.txt";

	fstream fout(firstFile, ios::out | ios::app), fin(secondFile, ios::in);
	
	if(!fout || !fin){
		cout << "err";
		return -1;
	}
	
	int c;
	while((c = fin.get()) != EOF){
		fout.put(c);
		cout << (char)c;
	}
	
	fin.close();
	fout.close();
	*/
	
	const char* secondFile = "C:/Users/dkrle/Desktop/file.txt";
	ifstream fin(secondFile);
	
	if(!fin){
		cout << "열기실패";
		return -1;
	}
	
	char buf[81];
	
	string str;
	//1번째 방법 전역함수 getline 사용! 
	/*
	while(getline(fin, str)){
		cout << str << endl;
	}
	
	cout << endl << endl;
	*/
	//fin.getline(char a[], int number); 이런식으로 구성되어 있어서 a 버퍼에 number 만큼 라인을 읽어온다. 
	while(fin.getline(buf,81)){
		cout << buf << endl;
	}
	
	
}
