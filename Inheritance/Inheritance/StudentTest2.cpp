//#include<iostream>
//#include<string>
//using namespace std;
///*
//��� - ������ �ִ� Ŭ������ ����ؼ� ���ο� Ŭ������ ����� ���̴�.(�θ�Ŭ���� <- �ڽ�Ŭ����)
//*/
//class Person {
//	string name;
//	int age;
//public:
//	//������(setter)
//	Person(string name,int age):name(name),age(age){}
//	//������(getter)
//	string getName() { return name; }
//	int getAge() { return age; }
//
//};
////����� ����� �л� Ŭ����
//class Student :public Person {
//private:
//	int studentID;
//public:
//	Student(int studentID,string name,int age): Person(name,age),studentID(studentID){}
//	int getstudentId() { return studentID; }
//};
//int main() {
//	//��� 1�� ����
//	Person p1("��������", 40);
//
//	//����� ����
//	cout << "�̸�: " << p1.getName() << endl;
//	cout << "����: " << p1.getAge() << endl;
//	//�ڽ� 1�� ����
//	Student s1(1000, "�����", 97);
//	//�л��� ����
//	cout << "�̸�: " << s1.getName() << endl;
//	cout << "����: " << s1.getAge() << endl;
//	cout << "�й�: " << s1.getstudentId() << endl;
//}