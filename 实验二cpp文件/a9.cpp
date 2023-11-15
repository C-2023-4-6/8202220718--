#include <iostream>
using namespace std;
int main()
{
	int num=2,numsum=0,day=1;
	numsum+=num;
	while(numsum<=100){
		day++;
		num=num*2;
		numsum+=num;	
	}
	double averageprice;
	averageprice=(numsum*0.6)/day;
	cout<<"平均每天花:"<<averageprice<<"元。"<<endl;
	return 0; 
}
