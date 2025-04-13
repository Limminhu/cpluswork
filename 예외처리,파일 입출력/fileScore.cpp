//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
///*
//성적 파일 만들기
//*/
//int main() {
//	ofstream out("score.txt");
//	if (!out) {
//		cerr << "Error: 파일을 열 수 없습니다\n";
//		return 1;
//	}
//	string name;
//	int eng, math;
//	cout << "이름 입력: ";
//	cin >> name;
//	cout << "영어 점수 입력: ";
//	cin >> eng;
//	cout << "수학 점수 입력: ";
//	cin >> math;
//
//	//파일에 쓰기
//	cout << name << " " << eng << " " << math << endl;
//	out.close();
//	cout << "데이터가 성공적으로 생성되었습니다!" << endl;
//
//}