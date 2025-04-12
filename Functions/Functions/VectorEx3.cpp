//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	vector<int> vec;//정수값을 저장할 컨테이너 생성
//
//	//원소 추가
//	vec.push_back(10);
//	vec.push_back(20);
//	vec.push_back(30);
//
//	//벡터의 길이(크기)
//	cout << "vec의 크기: " << vec.size() << endl;
//
//	//전체 출력
//	for (int i = 0; i < vec.size(); i++)
//		cout << vec[i] << " ";
//	//순서가 없는 경우 포함 - 반복자 사용
//	//iterator 사용
//	vector<int>::iterator it = vec.begin();
//
//	//vec에 저장된 원소 출력
//	cout << *(it + 0) << endl;
//	cout << *(it + 1) << endl;
//	cout << *(it + 2) << endl;
//
//	vec[1] = 50;//1번 인덱스의 값 변경
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
//		if (*it == 30) {//원소의 값이 30이면
//			vec.erase(it);
//			break;
//		}
//	}
//	//삭제할 때는 erase라는 함수를 쓴다.
//
//	//전체 출력
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//		cout << *it << endl;
//
//}