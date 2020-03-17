#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    a=a*60+b;
    c=c*60+d;
    a=c-a;
    cout<<a/60<<" "<<a%60;
    return 0;
}