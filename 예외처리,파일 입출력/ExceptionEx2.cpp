//#include<iostream>
//using namespace std;
///*
//����((����) ó��: try - catch ����
//���ڿ��� �Լ��� ó���ϴ� ����
//*/
//int stringToInt(const char x[]) {
//	int sum = 0;
//	int len = strlen(x);
//	for (int i = 0; i < len; i++) {
//		if (x[i] > '0' && x[i] < '9')
//			sum = sum * 10 + x[i] - '0';
//		else throw x;
//	}
//	return sum;
//}
//int main() {
//	int n;
//	try {
//		n = stringToInt("12a");
//		cout << "\"12a\"�� ���� " << n << "���� ��ȯ��\n";
//	}
//	catch (const char* str) {
//		cout << str << "ó������ ���� �߻�!" << endl;
//	}
//	return 0;
//}