#include <iostream>
using namespace std;
class Time {
	int hour;
	int minute;
	int sec;
public:
	void Set();
	void Show();
};
void Time::Set() {
	int h, m, s;
	cout<<"������ʱ����:";
	cin >> h >> m >> s;
	if(h>=24||h<0||m<0||m>=60||s<0||s>=60){
		cout<<"�ⲻ��һ����ȷ��ʱ��,����������:"<<"\n";
		Set(); 
		return;
	}
	else{
		hour = h;
		minute = m;
	    sec = s;
	}
	
}
void Time::Show() {
	cout <<"hour:"<< hour << "\n";
	cout <<"minute:"<< minute << "\n";
	cout <<"second:"<< sec << "\n";
}
int main() {
	Time tl;
	tl.Set();
	tl.Show();
	return 0;
}
