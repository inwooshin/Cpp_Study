#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// fout �̸��� ���α׷����� �����ٴ� ���̴�.
// fin �� ���α׷��� ���´ٴ� ���̴�. 

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
		cout << "�������";
		return -1;
	}
	
	char buf[81];
	
	string str;
	//1��° ��� �����Լ� getline ���! 
	/*
	while(getline(fin, str)){
		cout << str << endl;
	}
	
	cout << endl << endl;
	*/
	//fin.getline(char a[], int number); �̷������� �����Ǿ� �־ a ���ۿ� number ��ŭ ������ �о�´�. 
	while(fin.getline(buf,81)){
		cout << buf << endl;
	}
	
	
}
