//#include<iostream>
//#include<map>
//using namespace std;
//int main(){
//	//�������� ������ map�����̳� ����
//	map<string, int>dogs;
//
//	//���� �߰�
//	dogs.insert({ "��Ƽ��",2 });
//	dogs.insert({ "������",3 });
//	dogs.insert({ "�ҵ�",1 });
//	dogs.insert({ "������",5 });//Ű�� �ߺ����� �����Ƿ� 5�� ��.
//
//	//����
//	dogs.erase("�ҵ�");//Ű�� �־ ���� ���� �� ����
//
//	//map�� ũ��
//	cout << dogs.size() << endl;
//
//	//������ �˻�
//	cout << dogs["������"] << endl;
//	for (map<string, int>::iterator it = dogs.begin(); it != dogs.end(); it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//	//���� �ڷ��� auto
//	for (auto it = dogs.begin(); it != dogs.end(); it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//}