#include<iostream>
using namespace std;
/*
다중 상속 - 부모 클래스가 여러개인 경우,동시에 상속
*/
class Character {
public:
	Character() { cout << "character 클래스 생성자" << endl; }//생성자
	~Character() { cout << "character 클래스 소멸자" << endl; }//소멸자
};
class Monster {
public:
	Monster() { cout << "monster 클래스 생성자" << endl; }//생성자
	~Monster() { cout << "monster 클래스 소멸자" << endl; }//소멸자
};
class MonsterA : public Monster, Character {
private:
	int location[2];//좌표
public:
	MonsterA() : MonsterA(0,0) { cout << "MonsterA 클래스" << endl; }
	MonsterA(int x, int y) : location{ x,y } { cout << "MonsterA 클래스 생성자(매개변수 추가)" << endl; }
	void showLocation() { cout << "위치(" << location[0] << ", " << location[1] << ")" << endl; }
};
int main() {
	MonsterA forestMonster;
	forestMonster.showLocation();
	
	MonsterA woodMonster(10,10);
	woodMonster.showLocation();

	return 0;
}