#include <iostream>

using namespace std;

int main()
{
    int t,a,b,c,d=0,e=0,f=0,i=0;
    cin>>t;
    while(t--)
    {
    cin>>a>>b>>c;
    d=d+a;
    e=e+b;
    f=f+c;
    i=d+e+f;

    }
    if(d==0 && e==0 && f==0 && i==0)
    {
    cout<<"YES"<<endl;
    }
    else
    {
    cout<<"NO"<<endl;
    }
    return 0;
}
