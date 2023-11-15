#include <iostream>
using namespace std;
int main(){
	char inputchar;
	cout<<"请输入一个字符:";
	cin>>inputchar;
	if(inputchar>='a'&&inputchar<='z')
	{
		inputchar-=32;
		cout<<"转换的大写字母为:"<<inputchar<<endl;
	}
	else{
		char nextchar;
		nextchar=inputchar+1;
		cout<<"输出后继字符的ASCII值:"<<int(nextchar)<<endl;
	}
	return 0;
}
