#include<iostream>
using namespace std;

int main()
{
	double dist=0.0;
	int count=0;
	cin>>dist;
	for(double step=2.0;dist>0;step*=0.98){dist-=step;count++;}
	cout<<count;
	return 0;
}