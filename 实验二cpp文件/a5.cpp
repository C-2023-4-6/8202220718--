#include <iostream>
using namespace std;
int main(){
	const int N=100;
	char str[N];
	int Englishchar=0,blank=0,digit=0,others=0;
	cout<<"�������ַ���:";
	cin.getline(str,N);
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			Englishchar++;
		}
		else if(str[i]>'A'&&str[i]<='Z')
		{
			Englishchar++;
		}
		else if(str[i]==' ')
		{
			blank++;
		}
		else if(str[i]>='0'&&str[i]<='9')
		{
			digit++;
		}
		else
		{
			others++;
		}
		i++;
	}
	cout<<"Ӣ���ַ�:"<<Englishchar<<"\n�ո�:"<<blank<<"\n����:"<<digit<<"\n�����ַ�:"<<others<<endl;
	return 0;
}
