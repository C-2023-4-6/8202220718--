#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout<<"���ʽ(����ͬʱΪ��ʱ�˳�):";
	int x,y;
	double result;
	char op;
	cin>>x>>op>>y;
	while(x||y){
		switch(op){
			case '+':
				result=x+y;
				cout<<x<<op<<y<<"="<<result<<endl;
				break;
			case '-':
				result=x-y;
				cout<<x<<op<<y<<"="<<result<<endl;
				break;
			case '*':
				result=x*y;
				cout<<x<<op<<y<<"="<<result<<endl;
				break;
			case '/':
				if(y==0){
					cout<<"error,divided by 0"<<endl;
					break;
				}
				else{
					result=double(x)/y;
				}
				cout<<x<<op<<y<<"="<<result<<endl;
				break;
			case '%':
				result=x%y;
				cout<<x<<op<<y<<"="<<result<<endl;
				break;
			default :
				cout<<"invaild opereator!"<<endl; 
		}
		cout<<"���ʽ(����ͬʱΪ��ʱ�˳�):";
		cin>>x>>op>>y;
	}
	return 0;
}
