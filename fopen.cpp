#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (void){
	/*
	ofstream fout;
	
	//open �ÿ� ������ �ʱ�ȭ �ȴ�. �׸��� ���� ��쿡�� ������ش�. 
	//�̷��� ���丮 ������ ����� ����ȭ���� ������ �о�� �� �ִ�. 
	fout.open("C:/Users/dkrle/Desktop/song.txt");
	
	if(!fout){
		cout << "������ �� �� �����ϴ�." << endl;
		return -1; 
	}
	
	int age;
	string number, major;
	
	cout << "������ ��� �˴ϱ�? >> ";
	cin >> age;
	cout << "�й��� ��� �˴ϱ�? >> ";
	cin >> number;
	cout << "�а��� ��� �˴ϱ�? >> "; 
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
		cout << "������ �о�� �� �����ϴ�.";
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
	
	//���⼭ get�� \n �� ���ڸ� \r \n �� �ι���Ʈ�� �ƴ� �� ����Ʈ�� �����Ѵ�. 
	while((c = fin.get()) != EOF){
		cout << (char)c;
		count++;
	}
	/* �̷� ������ �ڵ带 �ۼ��ϸ� EOF�� c�� �о �ȵȴٴµ� ���ذ� �� �Ȱ���...!
	??
	 
	while(!fin.eof()){
		int c = fin.get();
	} 
	*/
	cout << "���� ����Ʈ ���� " << count << endl;
	fin.close(); 
	
	return 0;
}
