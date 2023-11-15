#include <iostream>
using namespace std;
int main(){
	double x;
	cout<<"请输入一个大于零小于十的x(输入9999时退出):";
	cin>>x;
	while(x!=9999){
		double y;
		if(x>0&&x<1)
		{
			y=3-2*x;
			cout<<y<<endl;
		}
		else if(x>=1&&x<5)
		{
		    y=2/(4*x)+1;
		    cout<<y<<endl;
		}
		else if(x>=5&&x<10)
		{
			y=x*x;
			cout<<y<<endl;
		}
		else{
			cout<<"请输入合乎要求的x"<<endl; 
		}
		cout<<"请输入一个大于零小于十的x(输入9999时退出):";
		cin>>x;
	}
	return 0;
}
