//#include<iostream>
//#include<fstream>
//using namespace std;
///*
//외부에 파일 쓰기
//*/
//int main() {
//	ofstream fout("data.txt");//파일 쓰기 객체 생성
//	if (fout.fail()) {
//		cerr << "파일을 열 수 없습니다.\n";
//		return 1;//오류값 반환
//	}
//	//파일 쓰기
//	int x = 1, y = 1;
//	fout << "Good job!\n";
//	fout << x << " " << y << endl;
//
//	//파일 종료
//	fout.close();
//
//	cout << "파일이 저장되었습니다\n";
//	return 0;
//}