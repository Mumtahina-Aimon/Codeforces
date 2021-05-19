#include <iostream>

using namespace std;

int main()
{
    int t,e=0,ex=0;
    cin>>t;
    while(t--)
    {
    int a,b;
    cin>>a>>b;
    e=e-a;
    e=e+b;
    if(e>ex)
    {
    ex=e;
    }
    //cout<<ex<<endl;
    }
    cout<<ex<<endl;
    return 0;
}
