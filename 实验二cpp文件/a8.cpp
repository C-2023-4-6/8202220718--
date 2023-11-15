#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

int main()
{
	complex<double>complex1;
	double x1,x2,a;
	cout<<"请输入一个整数:";
	cin>>a;
	if(a>0){	
	    x1=a;
	    x2=(x1+a/x1)/2;
	    while(abs(x2-x1)>=10e-5)
  	    {
		   x1=x2;
		   x2=(x1+a/x1)/2;
	    }
	    cout<<"计算所得结果为:"<<x2<<endl;
	}
	else{
		cout<<"a不是正数，无法通过迭代公式计算平方根"<<endl; 
	}
	return 0;
}
