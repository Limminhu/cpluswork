//#include<iostream>
//#include<string>
//using namespace std;
///*
//함수 재정의(Overriding) - 부모 클래스를 자식클래스에서 재정의하는 것을 말함.
//상속 - 기존에 있던 클래스를 사용해서 새로운 클래스를 만드는 것이다.(부모클래스 <- 자식클래스)
//*/
//class Car {
//public:
//	void drive() {
//		cout << "차가 달립니다." << endl;
//	}
//};
//class Taxi : public Car {
//public:
//	void drive() {
//		cout << "택시가 달립니다." << endl;
//	}
//};
////Car를 상속한 Sportscar 클래스 정의
//class SportsCar : public Car {
//	void drive() {
//		cout << "스포츠카가 달립니다." << endl;
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