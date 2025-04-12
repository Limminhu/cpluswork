//#include<iostream>
//#include<map>
//using namespace std;
//int main(){
//	//강아지의 종류와 map컨테이너 생성
//	map<string, int>dogs;
//
//	//원소 추가
//	dogs.insert({ "말티즈",2 });
//	dogs.insert({ "진돗개",3 });
//	dogs.insert({ "불독",1 });
//	dogs.insert({ "진돗개",5 });//키는 중복되지 않으므로 5가 됨.
//
//	//삭제
//	dogs.erase("불독");//키가 있어서 쉽게 지울 수 있음
//
//	//map의 크기
//	cout << dogs.size() << endl;
//
//	//진돗개 검색
//	cout << dogs["진돗개"] << endl;
//	for (map<string, int>::iterator it = dogs.begin(); it != dogs.end(); it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//	//만능 자료형 auto
//	for (auto it = dogs.begin(); it != dogs.end(); it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//}