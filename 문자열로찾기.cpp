#include <iostream>
#include <fstream>
#include <string>
#include <vector>
 
using namespace std;

// fout 이면은 프로그램에서 나간다는 것이다.
// fin 은 프로그램에 들어온다는 것이다. 

void fileRead(fstream& fin, vector<string> &v){
	string tmp;
	while(getline(fin,tmp)){
		v.push_back(tmp);
	}
}

void search(vector<string> &v, string word){
	for(int i = 0 ; i < v.size() ; i++){
		if(v[i].find(word) != -1){
			cout << v[i] << endl;
		}
	}
}

int main() {
	/*
	const char* file = "C:/Users/dkrle/Desktop/file.txt";
	vector<string> v;
	string word;
	
	fstream fin(file, ios::in);

	if(!fin) return -1;

	fileRead(fin, v);
	fin.close();
	
	/*
	while(1){
		cout << "찾을실 문자열을 입력하세요 >> ";
		getline(cin, word);
		if(word == "exit") break;
		search(v, word);
	}
	*/
	
	const char* own = "C:/Users/dkrle/Desktop/1.jpg";
	const char* dest = "C:/Users/dkrle/Desktop/3.jpg";
	
	fstream fin(own, ios::binary | ios::in);
	fstream fout(dest, ios::binary | ios::out);
	
	if(!fin || !fout) return -1;
	
	char buf[1024];
	while(!fin.eof()){
		fin.read(buf, 1024);
		int n = fin.gcount();
		fout.write(buf, n);
	}
	
	fin.close();
	fout.close();
}
