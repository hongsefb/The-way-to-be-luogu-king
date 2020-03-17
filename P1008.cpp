#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

#define Ufor(a,b,c) for(int a=b;a<=c;a++)
#define Dfor(a,b,c) for(int a=b;a>=c;a--)

bool map[10]={false};

int main()
{
	bool flag=true;
	Ufor(i,192,333){
		Ufor(j,384,666){
			Ufor(k,576,999){
				if((j/i==2)&&(j%i==0)&&(k/i==3)&&(k%i==0)){
					int tmp1=i,tmp2=j,tmp3=k;
					map[tmp1/100]=true;
					map[tmp2/100]=true;
					map[tmp3/100]=true;
					map[(tmp1%100)/10]=true;
					map[(tmp2%100)/10]=true;
					map[(tmp3%100)/10]=true;
					map[tmp1%10]=true;
					map[tmp2%10]=true;
					map[tmp3%10]=true;
					Ufor(m,1,9){
						if(map[m]==false){flag=false;}
					}
					if(flag){
						printf("%d %d %d\n",i,j,k);
					}
					memset(map,false,10);
					flag=true;
				}
			}
		}
	}
	return 0;
}