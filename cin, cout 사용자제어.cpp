#include <iostream>

using namespace std;

class Point {
	int x, y;
public:
	Point(int x=0, int y=0) { this->x = x; this->y = y; }
	friend ostream& operator << (ostream& stream, Point a);
	friend istream& operator >> (istream& stream, Point &b); // friend ����
	//�ܼ� ȣ���� �ƴ� ������ ������ ���� �ٲ���ߵǼ�! 
};
//�̷��� ���� ����ڰ� cout �� �������� �� �ִ�! 

class Book { // å�� ǥ���ϴ� Ŭ����
	string title;
	string press;
	string author;
	public:
	Book(string title="", string press="", string author="") {
	this->title = title;
	this->press = press;
	this->author = author;
	}
	friend ostream& operator << (ostream& stream, Book b); // friend ����
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
	cout << "x ��ǥ >>";
	stream >> a.x;
	cout << "y ��ǥ >>";
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
	cout << "�ſ�� �ſ�� ���� ���� ���ڴ�?";
	
	return in;
}

int main(void){
	Point p(3,4);
	
	cout << p << endl;
	
	Book book("�Ӻ���� ������", "�ѱ����ǻ�", "����������");
	cout << book; 
	
	//cin >> p;
	cout << p;
	
	cout << "���� �︳�ϴ�." << '\a' << endl;
	cout << "C" << rightarrow << "C++" << rightarrow << "Java" << endl;
	cout << "Visual" << fivestar << "C++" << endl;
	
	string answer;
	cin >> question >> answer;
	cout << "���󿡼� ���Ͽ��۰� " << answer << "�Դϴ�."<< endl; 
}
