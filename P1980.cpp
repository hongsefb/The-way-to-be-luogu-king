#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

#define Ufor(a,b,c) for(int a=b;a<=c;a++)
#define Dfor(a,b,c) for(int a=b;a>=c;a--)

int main()
{
	char s[9]={0};
	int a=0,b=0,count=0;
	cin>>a>>b;
	Ufor(i,1,a){
		sprintf(s,"%d",i);
		size_t len=strlen(s);
		Ufor(j,0,len-1){
			if(s[j]==b+'0'){count++;}
		}
	}
	cout << count;
	return 0;
}