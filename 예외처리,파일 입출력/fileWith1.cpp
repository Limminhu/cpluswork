//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
///*
//외부에 파일 읽기(저장)
//*/
//int main() {
//	ifstream fin("data.txt");
//	if (fin.fail()) {
//		cerr << "파일을 찾을 수 없습니다.\n";
//		return 1;
//	}
//	//파일 읽기
//	string str;//읽은 내용을 저장할 함수
//	while (!fin.eof()) {
//		getline(fin, str);
//		cout << str << endl;
//	}
//	//파일 종료
//	fin.close();
//	return 0;
//}