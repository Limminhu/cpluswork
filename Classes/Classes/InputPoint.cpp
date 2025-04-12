#include<iostream>
using namespace std;
//포인트 구조체 생성 - 기본이 public
struct Point {
	int x, y;
	//기본 생성자
	Point() {}
	//생성자 초기화
	Point(int x,int y):x(x),y(y){}
};
Point inputPoint() {
	Point p;//기본 생성자로 객체를 생성함.
	cout << "좌표를 입력하세요(x , y)";
	cin >> p.x >> p.y;
	return p;
}
//const 상수 키워드 - 수정할 수 없음
//문자열은 배열로 만들거나 포인터로ㅋ
void printPoint(Point p, const char* str = "Input Point") {
	cout << str << "(" << p.x << " , " << p.y << ")" << endl;
}
int main() {

	//참조 연산자 활용
	int n = 1;
	int& x = n;
	int y = n;

	cout << "n은 " << n << ", x는 " << x << endl;
	cout << "y는 " << y + 1 << endl;

	Point p1;
	p1 = inputPoint();
	//cout << p1.x << p1.y;
	printPoint(p1,"입력 좌표");
	//Point p2(2, 4);
	return 0;
}