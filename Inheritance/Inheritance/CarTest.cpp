//#include<iostream>
//#include<string>
//using namespace std;
///*
//�Լ� ������(Overriding) - �θ� Ŭ������ �ڽ�Ŭ�������� �������ϴ� ���� ����.
//��� - ������ �ִ� Ŭ������ ����ؼ� ���ο� Ŭ������ ����� ���̴�.(�θ�Ŭ���� <- �ڽ�Ŭ����)
//*/
//class Car {
//public:
//	void drive() {
//		cout << "���� �޸��ϴ�." << endl;
//	}
//};
//class Taxi : public Car {
//public:
//	void drive() {
//		cout << "�ýð� �޸��ϴ�." << endl;
//	}
//};
////Car�� ����� Sportscar Ŭ���� ����
//class SportsCar : public Car {
//	void drive() {
//		cout << "������ī�� �޸��ϴ�." << endl;
//	}
//};
//int main() {
//	Car car;
//	car.drive();
//
//	Taxi taxi;
//	taxi.drive();
//	return 0;
//}