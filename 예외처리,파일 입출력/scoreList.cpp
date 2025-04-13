#include<iostream>
#include<fstream>
using namespace std;
class Student {
private:
	string name;
	int math, eng;
	double avg;

public:
	void setName(string name) { this->name = name; }
	void setMathScore(int math) { this->math = math; }
	void setEngScore(int eng) { this->eng = eng; }
	void calcAvg() { avg = (double)(math + eng) / 2; }

	string getName() const{ return name; }
	int getEng() const { return eng; }
	int getMath() const { return math; }
	double getAvg() const { return avg; }
};

int main() {
	ofstream out("scoreList.txt");
	Student students[3];

	if (!out) {
		cerr << "파일을 열 수 없습니다\n";
		return 1;
	}
	for (int i = 0; i < 3; i++) {
		string name;
		int eng, math;

		cout << i + 1 << "번째 학생의 이름: ";
		cin >> name;
		students[i].setName(name);

		cout << "영어점수 입력" << endl;
		cin >> eng;
		students[i].setEngScore(eng);

		cout << "수학점수 입력" << endl;
		cin >> math;
		students[i].setMathScore(math);

		students[i].calcAvg();
	}

	for (int i = 0; i < 3; i++) {
		out << students[i].getName() << " " << students[i].getEng() << students[i].getMath() << " "
			<< students[i].getAvg() << endl;
	}
	out.close();
	cout << "데이터가 성공적으로 저장되었습니다!\n";
	return 0;
}