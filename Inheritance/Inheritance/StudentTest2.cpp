//#include<iostream>
//#include<string>
//using namespace std;
///*
//상속 - 기존에 있던 클래스를 사용해서 새로운 클래스를 만드는 것이다.(부모클래스 <- 자식클래스)
//*/
//class Person {
//	string name;
//	int age;
//public:
//	//설정자(setter)
//	Person(string name,int age):name(name),age(age){}
//	//접근자(getter)
//	string getName() { return name; }
//	int getAge() { return age; }
//
//};
////사람을 상속한 학생 클래스
//class Student :public Person {
//private:
//	int studentID;
//public:
//	Student(int studentID,string name,int age): Person(name,age),studentID(studentID){}
//	int getstudentId() { return studentID; }
//};
//int main() {
//	//사람 1명 생성
//	Person p1("광개토대왕", 40);
//
//	//사람의 정보
//	cout << "이름: " << p1.getName() << endl;
//	cout << "나이: " << p1.getAge() << endl;
//	//자식 1명 생성
//	Student s1(1000, "장수왕", 97);
//	//학생의 정보
//	cout << "이름: " << s1.getName() << endl;
//	cout << "나이: " << s1.getAge() << endl;
//	cout << "학번: " << s1.getstudentId() << endl;
//}