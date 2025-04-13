//#include<iostream>
//#include<string>
//using namespace std;
///*
//다형성(polymorphism) - 객체 타입(자료형)이 여러 가지 형태로 구현된다.
//*/
//class Animal {
//public:
//	void breathe() { cout << "동물이 숨을 쉽니다\n"; }
//	virtual void cry(){}
//};
////가상(추상) 함수 - 구현 내용이 없고, 상속 받을 클래스에서 강제로 구현해야 함.
//class Cat : public Animal {
//public:
//	void cry() { cout << "야옹-\n"; }
//};
//class Dog : public Animal {
//public:
//	void cry() { cout << "멍멍-\n"; }
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
//	//동적 객체 생성 - 포인터 사용
//	Animal* cat = new Cat;
//	Animal* dog = new Dog;//자식 타입으로 객체 생성
//
//	cat->breathe();
//	cat->cry();
//	dog->breathe();
//	dog->cry();
//
//	delete cat;
//	delete dog;
//}