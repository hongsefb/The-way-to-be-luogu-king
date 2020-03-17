#include<iostream>
using namespace std;

#define Ufor(a,b,c) for(int a=b;a<=c;a++)
#define Dfor(a,b,c) for(int a=b;a>=c;a--)

int main()
{
	int a[11];
	int b,count=0;
	Ufor(i,1,10){
		cin>>a[i];
		a[i]-=30;
	}
	cin>>b;
	Ufor(i,1,10){
		if(b>=a[i]){count++;}
	}
	cout<<count;
	return 0;
}