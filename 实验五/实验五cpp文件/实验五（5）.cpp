#include <iostream>
using namespace std;
class point {
	int x;
	int y;
public:
	void setPoint(int i, int j);
	void display();
	point();
	point(int x, int y);
};
point::point() {
	x = 60;
	y = 80;
}
point::point(int x, int y) {
	this->x = x;
	this->y = y;
}
void point::setPoint(int i, int j) {
	x = x + i;
	y = y + j;
}
void point::display() {
	cout << x <<" "<< y << "\n";
}
int main() {
	point Point;
	cout << "��ʼ����Ϊ:";
	Point.display();
	int i, j;
	cout << "����Ҫ�ı��������:";
	cin >> i >> j;
	Point.setPoint(i, j);
	cout << "�ı������Ϊ:";
	Point.display();
	return 0;
}