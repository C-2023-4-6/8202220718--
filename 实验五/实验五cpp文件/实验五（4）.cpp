#include <iostream>
using namespace std;
class student {
	int id;
	int score;
public:
	void Set(int id, int score);
	int Get_score();
	int Get_id();
};
void student::Set(int id, int score) {
	this->id = id;
	this->score = score;
}
int student::Get_score() {
	return score;
}
int student::Get_id() {
	return id;
}
student* max(student* Student, int num) {
	student* max_student = &Student[0];
	for (int i = 0; i < num; i++) {
		if (Student[i].Get_score() > max_student->Get_score()) {
			max_student = &Student[i];
		}
	}
	return max_student;
}
int main() {
	const int count = 5;
	int id, score;
	student Student[count];
	for (int i = 0; i < count; i++) {
		cout << "������ѧ����ѧ�źͳɼ�:";
		cin >> id >> score;
		Student[i].Set(id, score);
	}
	student* highest_student = max(Student, count);
	cout << "��߳ɼ�ѧ����ѧ��Ϊ:" << highest_student->Get_id() << "\n";
	return 0;
}