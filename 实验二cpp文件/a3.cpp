#include <iostream>
using namespace std;
int main()
{
	cout<<"请输入三角形的三条边长:";
	int x,y,z;
	cin>>x>>y>>z;
	int round;
	if(x+y<=z||x+z<=y||y+z<=x){
		cout<<"此三条边不能组成三角形,请重新输入:";
		cin>>x>>y>>z;
	}
	else if(x==y||y==z||x==z){
		round=x+y+z;
		cout<<"周长为:"<<round<<endl;
		cout<<"这是一个等腰三角形"<<endl;
	} 
	else{
		round=x+y+z;
        cout<<"周长为:"<<round<<endl;
		cout<<"这不是一个等腰三角形"<<endl; 
	}
} 
