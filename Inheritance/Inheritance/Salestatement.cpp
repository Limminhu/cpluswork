//#include<iostream>
//#include<string>
//using namespace std;
///*
//������ǥ �ۼ��ϱ�
//*/
//class Drink {
//protected://Alcohol Ŭ�������� ���� ����
//	string name;
//	int price;
//	int quantity;
//public:
//	Drink(string name, int price, int quantity): name(name),price(price),quantity(quantity){}
//	static void printTitle() { cout << "��ǰ��\t����\t����\t�ݾ�;\n"; }
//	int calcPrice() { return price * quantity; }
//	void printData() { cout << name << "\t" << price << "\t" << quantity << "\t" << calcPrice() << endl; }
//};
//class Alcohol : public  Drink {
//private:
//	float alcper;
//public:
//	Alcohol(float alcper,string name,int price,int quantity):alcper(alcper),Drink(name,price,quantity){}
//	int calcPrice() { return price * quantity; }
//	static void printTitle() { cout << "��ǰ��\t����\t����\t�ݾ�;\n"; }
//	void printData() { cout << name << "\t" << price << "\t" << quantity << "\t" << calcPrice() << endl; }
//};
//int main() {
//	Drink coffee("Ŀ��", 2500, 4);
//	Drink tea("����", 3000, 3);
//	Alcohol soju(15.1f, "����", 5000, 5);
//	Alcohol beer(42.0, "����", 4000, 6);
//	cout << "====================== ���� ��ǥ ==========================\n";
//
//	coffee.printTitle();
//	coffee.printData();
//	tea.printTitle();
//	tea.printData();
//	soju.printTitle();
//	soju.printData();
//	beer.printTitle();
//	beer.printData();
//
//	int total;
//	total = coffee.calcPrice() + tea.calcPrice() + soju.calcPrice() + beer.calcPrice();
//	cout << "******* �հ� �ݾ� ********" << total << "********\n";
//}