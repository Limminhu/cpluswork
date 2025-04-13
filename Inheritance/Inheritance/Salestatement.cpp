//#include<iostream>
//#include<string>
//using namespace std;
///*
//매출전표 작성하기
//*/
//class Drink {
//protected://Alcohol 클래스에서 접근 가능
//	string name;
//	int price;
//	int quantity;
//public:
//	Drink(string name, int price, int quantity): name(name),price(price),quantity(quantity){}
//	static void printTitle() { cout << "상품명\t가격\t수량\t금액;\n"; }
//	int calcPrice() { return price * quantity; }
//	void printData() { cout << name << "\t" << price << "\t" << quantity << "\t" << calcPrice() << endl; }
//};
//class Alcohol : public  Drink {
//private:
//	float alcper;
//public:
//	Alcohol(float alcper,string name,int price,int quantity):alcper(alcper),Drink(name,price,quantity){}
//	int calcPrice() { return price * quantity; }
//	static void printTitle() { cout << "상품명\t가격\t수량\t금액;\n"; }
//	void printData() { cout << name << "\t" << price << "\t" << quantity << "\t" << calcPrice() << endl; }
//};
//int main() {
//	Drink coffee("커피", 2500, 4);
//	Drink tea("녹차", 3000, 3);
//	Alcohol soju(15.1f, "소주", 5000, 5);
//	Alcohol beer(42.0, "맥주", 4000, 6);
//	cout << "====================== 매출 전표 ==========================\n";
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
//	cout << "******* 합계 금액 ********" << total << "********\n";
//}