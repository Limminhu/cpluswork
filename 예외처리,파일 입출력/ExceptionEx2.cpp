//#include<iostream>
//using namespace std;
///*
//예외((오류) 처리: try - catch 구문
//문자열을 함수로 처리하는 구문
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
//		cout << "\"12a\"는 정수 " << n << "으로 변환됨\n";
//	}
//	catch (const char* str) {
//		cout << str << "처리에서 예외 발생!" << endl;
//	}
//	return 0;
//}