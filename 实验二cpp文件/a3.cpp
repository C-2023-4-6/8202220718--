#include <iostream>
using namespace std;
int main()
{
	cout<<"�����������ε������߳�:";
	int x,y,z;
	cin>>x>>y>>z;
	int round;
	if(x+y<=z||x+z<=y||y+z<=x){
		cout<<"�������߲������������,����������:";
		cin>>x>>y>>z;
	}
	else if(x==y||y==z||x==z){
		round=x+y+z;
		cout<<"�ܳ�Ϊ:"<<round<<endl;
		cout<<"����һ������������"<<endl;
	} 
	else{
		round=x+y+z;
        cout<<"�ܳ�Ϊ:"<<round<<endl;
		cout<<"�ⲻ��һ������������"<<endl; 
	}
} 
