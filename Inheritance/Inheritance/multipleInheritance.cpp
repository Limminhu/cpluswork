#include<iostream>
using namespace std;
/*
���� ��� - �θ� Ŭ������ �������� ���,���ÿ� ���
*/
class Character {
public:
	Character() { cout << "character Ŭ���� ������" << endl; }//������
	~Character() { cout << "character Ŭ���� �Ҹ���" << endl; }//�Ҹ���
};
class Monster {
public:
	Monster() { cout << "monster Ŭ���� ������" << endl; }//������
	~Monster() { cout << "monster Ŭ���� �Ҹ���" << endl; }//�Ҹ���
};
class MonsterA : public Monster, Character {
private:
	int location[2];//��ǥ
public:
	MonsterA() : MonsterA(0,0) { cout << "MonsterA Ŭ����" << endl; }
	MonsterA(int x, int y) : location{ x,y } { cout << "MonsterA Ŭ���� ������(�Ű����� �߰�)" << endl; }
	void showLocation() { cout << "��ġ(" << location[0] << ", " << location[1] << ")" << endl; }
};
int main() {
	MonsterA forestMonster;
	forestMonster.showLocation();
	
	MonsterA woodMonster(10,10);
	woodMonster.showLocation();

	return 0;
}