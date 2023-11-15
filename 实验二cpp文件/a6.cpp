#include <iostream>
using namespace std;

//计算最小公倍数 
int cout1(int x,int y){
	if(x>=y){
		for(int i=x;i<=x*y;i++)
		{
			if(i%x==0&&i%y==0){
				return i;
			}
		}
	}
	else{
		for(int i=y;i<=x*y;i++)
		{
			if(i%x==0&&i%y==0){
				return i;
			}
		}
	}
}
//计算最大公因数 
int cout2(int x,int y){
	int GCD=0;
	if(x>=y){
		for(int i=1;i<=y;i++)
		{
			if(x%i==0&&y%i==0){
				GCD=i;
			}
		}
		return GCD;
	}
	else{
		for(int i=1;i<=x;i++)
		{
			if(x%i==0&&y%i==0){
				GCD=i;
			}
		}
		return GCD;
	}
}
int main()
{
	cout<<"请输入两个整数:";
	int x,y;
	cin>>x>>y;
	int min_common_multiple,GCD;
	min_common_multiple=cout1(x,y);
	GCD=cout2(x,y);
	cout<<"最小公倍数:"<<min_common_multiple<<"\n最大公因数:"<<GCD<<endl;
	return 0;
}
