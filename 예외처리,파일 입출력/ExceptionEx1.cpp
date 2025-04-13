//#include<iostream>
//using namespace std;
//int main() {
//	//나누기 연산에서 0으로 나눌 수 없음.
//	int n1, n2;
//	int quotient, remainder;
//
//	cout << "첫째수 입력" << endl;
//	cin >> n1;
//	cout << "둘째수 입력" << endl;
//	cin >> n2;
//
//	try {
//		if (n2 == 0)throw n1;
//		quotient = n1 / (double)n2;
//
//		remainder = n1 % n2;
//
//		cout << "몫: " << quotient << endl;
//		cout << "나머지: " << remainder << endl;
//	}
//	catch (int e_n) {
//		cout << n1 << "는(은) 0으로 나눌 수 없습니다.\n";
//	}
//
//}