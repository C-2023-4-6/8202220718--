#include <iostream>
using namespace std;
class cuboid {
	int length;
	int width;
	int height;
public:
	void Set(int length, int width, int height);
	int count_volume();
	void Show_volume();
};
void cuboid::Set(int length, int width, int height) {
	this->length = length;
	this->width = width;
	this->height = height;
}
int cuboid::count_volume() {
	int volume = length * width * height;
	return volume;
}
void cuboid::Show_volume() {
	cout << "���������Ϊ:" << count_volume() << "\n";
}
int main() {
	const int count = 3;
	cuboid cuboid[count];
	for (int i = 0; i < 3; i++) {
		int length, width, height;
		cout << "�����볤����ĳ����:";
		cin >> length >> width >> height;
		cuboid[i].Set(length, width, height);
	}
	for (int i = 0; i < 3; i++) {
		cout<<"��"<<(i+1); 
		cuboid[i].Show_volume();
	}
	return 0;
}
