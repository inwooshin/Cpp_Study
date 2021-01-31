#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

void showWidth() {
	cout.width(10); // 다음에 출력되는 "hello"를 10 칸으로 지정
	cout << "Hello" << endl;
	cout.width(5); // 다음에 출력되는 정수 12를 5 칸으로 지정
	cout << 12 << endl;
	cout << '%';
	cout.width(10); // 다음에 출력되는 "Korea/"만 10 칸으로 지정
	cout << "Korea/" << "Seoul/" << "City" <<endl;
}


int main (void){
	/*
	//ch의 문자를 스트림에 출력하는 것이다! 
	cout.put('H');
	cout.put('i');
	cout.put(33);
	cout.put('\n');
	
	//메소드를 연결해서 사용할 수 있다. 
	cout.put('C').put('+').put(' ');
	
	char str[] = "I love programming";
	cout.write(str, 6); 
	cout << endl;
	*/
	//istream 멤버 함수!
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
	cout << "cin.get(char*, int)로 문자열을 읽습니다." << endl;
	
	while(true) {
		cout << "종료하려면 exit을 입력하세요 >> ";
		cin.get(cmd, 80); // 79개까지의 영어 문자 읽음.
		
		if(strcmp(cmd, "exit") == 0) {
		cout << "프로그램을 종료합니다....";
		return 0;}
		//get 함수의 디폴트는 1이다! 한문자열을 cin에서 읽어주는 함수이다.
		else cin.get(); // 버퍼에 남아 있는 <Enter> 키 ('\n') 제거
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
	
	//숫자를 표현할 수 있는 것을 5개만 할 수 있도록 해줌! (숫자만!) 
	cout.precision(5);
	cout << 11./3. << endl;
	*/
	
	cout << hex << showbase << 30 << endl;
	cout << setw(10) << setfill('F') << "Hello" << endl;
	cout << "hello " << 40 << endl;
	
	//일회성이 아니다!, setw는 일회성이다. 
	//setfill도 일회성이 아니다. 
	cout << hex << showbase << 30 << endl;
	cout << dec << showpos << 100 << endl;
	cout << true << ' ' << false << endl;
	cout << boolalpha << true << ' ' << false << endl;
	//여기에서 +30으로 나오는거 보면 boolalpha 같은거 써도 계속 중복이 되나봄! 
	//중복이 되는거하고 안되는게 있나봄! 숫자를 표현하는거 중복 당연히 안됨
	//이런식으로 
	cout << 30 << endl;
	cout << setw(10) << setfill('^') << "hello" << endl;
	cout << setw(10) << "hello" << endl; 
	
 
}

