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
//	void setName(string name) {
//		this->name = name;
//	}
//	void setAge(int age) {
//		this->age = age;
//	}
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
//	void setStudentId(int studentId) {
//		this->studentID = studentId;
//
//	}
//	int getstudentId() { return studentID; }
//};
//int main() {
//	//��� 1�� ����
//	Person p1;
//	p1.setName("��������");
//	p1.setAge(40);
//
//	//����� ����
//	cout << "�̸�: " << p1.getName() << endl;
//	cout << "����: " << p1.getAge() << endl;
//	//�ڽ� 1�� ����
//	Student s1;
//	s1.setName("�����");
//	s1.setAge(97);
//	s1.setStudentId(1000);
//	//�л��� ����
//	cout << "�̸�: " << s1.getName() << endl;
//	cout << "����: " << s1.getAge() << endl;
//	cout << "�й�: " << s1.getstudentId() << endl;
//}