#include <iostream>
using namespace std;
int main(){
	char inputchar;
	cout<<"������һ���ַ�:";
	cin>>inputchar;
	if(inputchar>='a'&&inputchar<='z')
	{
		inputchar-=32;
		cout<<"ת���Ĵ�д��ĸΪ:"<<inputchar<<endl;
	}
	else{
		char nextchar;
		nextchar=inputchar+1;
		cout<<"�������ַ���ASCIIֵ:"<<int(nextchar)<<endl;
	}
	return 0;
}
