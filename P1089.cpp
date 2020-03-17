#include<iostream>
using namespace std;

#define Ufor(a,b,c) for(int a=b;a<=c;a++)
#define Dfor(a,b,c) for(int a=b;a>=c;a--)

int main()
{
	int rest=0,deposit=0;
	bool flag=true;
	int monthly_money[13];
	Ufor(i,1,12){cin>>monthly_money[i];}
	Ufor(i,1,12){
		rest+=300;
		rest-=monthly_money[i];
		if(rest<0){cout<<"-"<<i;flag=false;break;}
		deposit+=(rest/100)*100;
		rest=rest%100;
	}
	if(flag){cout<<rest+deposit*1.2;}
	return 0;
}