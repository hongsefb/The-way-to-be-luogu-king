#include <iostream>
using namespace std;

int main()
{
    int a,b,c[8]={0},pos=0;
    for(int i=1;i<=7;i++){
        cin>>a>>b;
        c[i]=a+b;
    }
    for(int i=1;i<=7;i++){
        if(c[i]>c[pos]){pos=i;}
    }
    cout<<pos;
    return 0;
}