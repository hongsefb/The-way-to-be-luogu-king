#include<iostream>
#include<cstring>
using namespace std;

#define Ufor(a,b,c) for(int a=b;a<=c;a++)
#define Dfor(a,b,c) for(int a=b;a>=c;a--)

bool tree[100010];

int main()
{
	memset(tree, true, sizeof(tree));
	int sum,a,b,c,count=0;
	cin>>sum>>a;
	Ufor(i,1,a){
		cin>>b>>c;
		Ufor(j,b,c){tree[j]=false;}
	}
	Ufor(i,0,sum){if(tree[i]){count++;}}
	cout<<count;
	return 0;
}