#include <iostream>

using namespace std;

class Point {
	int x, y;
public:
	Point(int x=0, int y=0) { this->x = x; this->y = y; }
	friend ostream& operator << (ostream& stream, Point a);
	friend istream& operator >> (istream& stream, Point &b); // friend 선언
	//단순 호출이 아닌 참조로 원래의 값을 바꿔줘야되서! 
};
//이렇게 직접 사용자가 cout 을 설정해줄 수 있다! 

class Book { // 책을 표현하는 클래스
	string title;
	string press;
	string author;
	public:
	Book(string title="", string press="", string author="") {
	this->title = title;
	this->press = press;
	this->author = author;
	}
	friend ostream& operator << (ostream& stream, Book b); // friend 선언
};

ostream& operator<< (ostream& stream, Point a){
	stream << "(" << a.x << ", " << a.y << ")";
	return stream;
}

ostream& operator << (ostream& stream, Book a){
	stream << a.title << ", " << a.press << ", " << a.author << endl;
	return stream;
}

istream& operator >> (istream& stream, Point& a){
	cout << "x 좌표 >>";
	stream >> a.x;
	cout << "y 좌표 >>";
	stream >> a.y; 
	
	return stream;
}

ostream& fivestar(ostream& outs){
	return outs << "*****";
}

ostream& rightarrow(ostream& outs){
	return outs << " -> ";
}

ostream& beep(ostream& outs){
	return outs << '\a';
}

istream& question(istream& in){
	cout << "거울아 거울아 누가 제일 예쁘니?";
	
	return in;
}

int main(void){
	Point p(3,4);
	
	cout << p << endl;
	
	Book book("임베디드 교과서", "한국출판사", "에리히프롬");
	cout << book; 
	
	//cin >> p;
	cout << p;
	
	cout << "벨이 울립니다." << '\a' << endl;
	cout << "C" << rightarrow << "C++" << rightarrow << "Java" << endl;
	cout << "Visual" << fivestar << "C++" << endl;
	
	string answer;
	cin >> question >> answer;
	cout << "세상에서 제일예쁜건 " << answer << "입니다."<< endl; 
}
