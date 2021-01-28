#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (void){
	/*
	ofstream fout;
	
	//open 시에 파일이 초기화 된다. 그리고 없을 경우에는 만들어준다. 
	//이렇게 디렉토리 설정을 해줘야 바탕화면의 파일을 읽어올 수 있다. 
	fout.open("C:/Users/dkrle/Desktop/song.txt");
	
	if(!fout){
		cout << "파일을 열 수 없습니다." << endl;
		return -1; 
	}
	
	int age;
	string number, major;
	
	cout << "연령은 어떻게 됩니까? >> ";
	cin >> age;
	cout << "학번은 어떻게 됩니까? >> ";
	cin >> number;
	cout << "학과는 어떻게 됩니까? >> "; 
	cin >> major;
	
	fout << age << '\n';
	fout << number << endl;
	fout << major << endl;
	
	fout.close();
		
	cout << "complete..!" << endl;
	*/
	
	ifstream fin;
	const char * informFile = "C:/Users/dkrle/Desktop/song.txt";
	
	fin.open(informFile);
	
	if(!fin){
		cout << "파일을 읽어올 수 없습니다.";
		return -1;
	}
	/*
	int age;
	string number; 
	string name;
	 
	fin >> age;
	fin >> number;
	fin >> name;
	
	cout << age << endl << number << endl << name << endl;
	*/
	int count = 0;
	int c;
	
	//여기서 get은 \n 의 문자를 \r \n 의 두바이트가 아닌 한 바이트로 리턴한다. 
	while((c = fin.get()) != EOF){
		cout << (char)c;
		count++;
	}
	/* 이런 식으로 코드를 작성하면 EOF를 c가 읽어서 안된다는데 이해가 잘 안간다...!
	??
	 
	while(!fin.eof()){
		int c = fin.get();
	} 
	*/
	cout << "읽은 바이트 수는 " << count << endl;
	fin.close(); 
	
	return 0;
}
