#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

void showWidth() {
	cout.width(10); // ������ ��µǴ� "hello"�� 10 ĭ���� ����
	cout << "Hello" << endl;
	cout.width(5); // ������ ��µǴ� ���� 12�� 5 ĭ���� ����
	cout << 12 << endl;
	cout << '%';
	cout.width(10); // ������ ��µǴ� "Korea/"�� 10 ĭ���� ����
	cout << "Korea/" << "Seoul/" << "City" <<endl;
}


int main (void){
	/*
	//ch�� ���ڸ� ��Ʈ���� ����ϴ� ���̴�! 
	cout.put('H');
	cout.put('i');
	cout.put(33);
	cout.put('\n');
	
	//�޼ҵ带 �����ؼ� ����� �� �ִ�. 
	cout.put('C').put('+').put(' ');
	
	char str[] = "I love programming";
	cout.write(str, 6); 
	cout << endl;
	*/
	//istream ��� �Լ�!
	/*
	int ch;
	while((ch = cin.get()) != EOF){
		cout.put(ch);
		if(ch == '\n')
			break;
	}
	*/
	
	/*
	char cmd[80];
	cout << "cin.get(char*, int)�� ���ڿ��� �н��ϴ�." << endl;
	
	while(true) {
		cout << "�����Ϸ��� exit�� �Է��ϼ��� >> ";
		cin.get(cmd, 80); // 79�������� ���� ���� ����.
		
		if(strcmp(cmd, "exit") == 0) {
		cout << "���α׷��� �����մϴ�....";
		return 0;}
		//get �Լ��� ����Ʈ�� 1�̴�! �ѹ��ڿ��� cin���� �о��ִ� �Լ��̴�.
		else cin.get(); // ���ۿ� ���� �ִ� <Enter> Ű ('\n') ����
	}
	*/
	
	/*
	cout.unsetf(ios::dec);
	cout.setf(ios::hex);
	
	cout << 20 << endl;
	
	cout.setf(ios::dec | ios::showpoint);
	cout << 30.2 << endl;

	cout.setf(ios::showpos);
	cout << 23.5<< endl;
	
	cout.width(10);
	cout << "Hello" << endl;
	
	cout.precision(4);
	cout.fill('^');
	cout.width(20);
	cout << 12.222222 << endl;
	*/
	
	/*
	showWidth();
	cout << endl;
	
	cout.fill('^');
	showWidth();
	cout << endl;
	
	//���ڸ� ǥ���� �� �ִ� ���� 5���� �� �� �ֵ��� ����! (���ڸ�!) 
	cout.precision(5);
	cout << 11./3. << endl;
	*/
	
	cout << hex << showbase << 30 << endl;
	cout << setw(10) << setfill('F') << "Hello" << endl;
	cout << "hello " << 40 << endl;
	
	//��ȸ���� �ƴϴ�!, setw�� ��ȸ���̴�. 
	//setfill�� ��ȸ���� �ƴϴ�. 
	cout << hex << showbase << 30 << endl;
	cout << dec << showpos << 100 << endl;
	cout << true << ' ' << false << endl;
	cout << boolalpha << true << ' ' << false << endl;
	//���⿡�� +30���� �����°� ���� boolalpha ������ �ᵵ ��� �ߺ��� �ǳ���! 
	//�ߺ��� �Ǵ°��ϰ� �ȵǴ°� �ֳ���! ���ڸ� ǥ���ϴ°� �ߺ� �翬�� �ȵ�
	//�̷������� 
	cout << 30 << endl;
	cout << setw(10) << setfill('^') << "hello" << endl;
	cout << setw(10) << "hello" << endl; 
	
 
}

