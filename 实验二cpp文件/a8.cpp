#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

int main()
{
	complex<double>complex1;
	double x1,x2,a;
	cout<<"������һ������:";
	cin>>a;
	if(a>0){	
	    x1=a;
	    x2=(x1+a/x1)/2;
	    while(abs(x2-x1)>=10e-5)
  	    {
		   x1=x2;
		   x2=(x1+a/x1)/2;
	    }
	    cout<<"�������ý��Ϊ:"<<x2<<endl;
	}
	else{
		cout<<"a�����������޷�ͨ��������ʽ����ƽ����"<<endl; 
	}
	return 0;
}
