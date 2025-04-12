//#include <iostream>
//#include <string>
//using namespace std;
//class store {
//	int dishes;
//	int income;
//
//public:
//	store():dishes(100),income(0){}
//	void selling(int sold);
//	void getIncome(int income);
//};
//void store::getIncome(int income) {
//	this->income += income;
//	cout << "수입은" << income << "원입니다." << endl;
//}
//void store::selling(int sold) {
//	this->dishes -= sold;
//
//	if (dishes == 0)
//		cout << "sold out" << endl;
//	else
//		cout << "남은 재고는 " << dishes << "입니다." << endl;
//}
//class customer {
//	store store;
//	int fee;
//	int taken;
//
//public:
//	customer(int fee, int taken) {
//		this->fee = fee;
//		this->taken = taken;
//		store.getIncome(fee);
//		store.selling(taken);
//	}
//
//	void Info();
//};
//void customer::Info() {
//	cout << fee << "원을 내고 " << taken << "접시를 먹었습니다." << endl;
//}
//int main() {
//	store newStore();
//	customer newCustomer(20000, 2);
//	newCustomer.Info();
//}