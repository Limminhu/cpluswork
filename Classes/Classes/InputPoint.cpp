#include<iostream>
using namespace std;
//����Ʈ ����ü ���� - �⺻�� public
struct Point {
	int x, y;
	//�⺻ ������
	Point() {}
	//������ �ʱ�ȭ
	Point(int x,int y):x(x),y(y){}
};
Point inputPoint() {
	Point p;//�⺻ �����ڷ� ��ü�� ������.
	cout << "��ǥ�� �Է��ϼ���(x , y)";
	cin >> p.x >> p.y;
	return p;
}
//const ��� Ű���� - ������ �� ����
//���ڿ��� �迭�� ����ų� �����ͷΤ�
void printPoint(Point p, const char* str = "Input Point") {
	cout << str << "(" << p.x << " , " << p.y << ")" << endl;
}
int main() {

	//���� ������ Ȱ��
	int n = 1;
	int& x = n;
	int y = n;

	cout << "n�� " << n << ", x�� " << x << endl;
	cout << "y�� " << y + 1 << endl;

	Point p1;
	p1 = inputPoint();
	//cout << p1.x << p1.y;
	printPoint(p1,"�Է� ��ǥ");
	//Point p2(2, 4);
	return 0;
}