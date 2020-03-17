#include<iostream>
using namespace std;

#define Ufor(a,b,c) for(int a=b;a<=c;a++)
#define Dfor(a,b,c) for(int a=b;a>=c;a--)

int main()
{
	int a,day,ans=0;
	cin>>a>>day;
	Ufor(i,1,day){
        if(a!=6 && a!=7) ans+=250;
        if(a==7){a=1;}
        else{a++;}
    }
    cout << ans;
	return 0;
}