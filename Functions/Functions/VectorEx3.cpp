//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	vector<int> vec;//�������� ������ �����̳� ����
//
//	//���� �߰�
//	vec.push_back(10);
//	vec.push_back(20);
//	vec.push_back(30);
//
//	//������ ����(ũ��)
//	cout << "vec�� ũ��: " << vec.size() << endl;
//
//	//��ü ���
//	for (int i = 0; i < vec.size(); i++)
//		cout << vec[i] << " ";
//	//������ ���� ��� ���� - �ݺ��� ���
//	//iterator ���
//	vector<int>::iterator it = vec.begin();
//
//	//vec�� ����� ���� ���
//	cout << *(it + 0) << endl;
//	cout << *(it + 1) << endl;
//	cout << *(it + 2) << endl;
//
//	vec[1] = 50;//1�� �ε����� �� ����
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
//		if (*it == 30) {//������ ���� 30�̸�
//			vec.erase(it);
//			break;
//		}
//	}
//	//������ ���� erase��� �Լ��� ����.
//
//	//��ü ���
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//		cout << *it << endl;
//
//}