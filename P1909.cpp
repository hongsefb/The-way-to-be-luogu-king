#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

#define Ufor(a,b,c) for(int a=b;a<=c;a++)
#define Dfor(a,b,c) for(int a=b;a>=c;a--)

int main()
{
	int List[4][3];
	int request,cost=INT_MAX;
	cin>>request;
	Ufor(i,1,3){cin>>List[i][1]>>List[i][2];}
	Ufor(i,1,3){
		double tmp=(double)request/List[i][1];
		int tmp2=(int)ceil(tmp);
		if(tmp2*List[i][2]<cost)
		{
			cost= tmp2 * List[i][2];
		}
	}
	cout<<cost;
	return 0;
}