//#include<iostream>
//#include<string>
//using namespace std;
///*
//������(polymorphism) - ��ü Ÿ��(�ڷ���)�� ���� ���� ���·� �����ȴ�.
//*/
//class Animal {
//public:
//	void breathe() { cout << "������ ���� ���ϴ�\n"; }
//	virtual void cry(){}
//};
////����(�߻�) �Լ� - ���� ������ ����, ��� ���� Ŭ�������� ������ �����ؾ� ��.
//class Cat : public Animal {
//public:
//	void cry() { cout << "�߿�-\n"; }
//};
//class Dog : public Animal {
//public:
//	void cry() { cout << "�۸�-\n"; }
//};
//int main() {
//	/*Cat cat1;
//	Dog dog1;
//	cat1.breathe();
//	cat1.cry();
//
//	dog1.breathe();
//	dog1.cry();*/
//
//	//���� ��ü ���� - ������ ���
//	Animal* cat = new Cat;
//	Animal* dog = new Dog;//�ڽ� Ÿ������ ��ü ����
//
//	cat->breathe();
//	cat->cry();
//	dog->breathe();
//	dog->cry();
//
//	delete cat;
//	delete dog;
//}