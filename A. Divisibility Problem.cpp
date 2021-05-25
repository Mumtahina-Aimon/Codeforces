#include <iostream>

using namespace std;

int main()
{
    int t,a,b,r,s,ans;
    cin>>t;
    while(t--)
    {
    cin>>a>>b;
    if(a%b==0)
    {
    cout<<"0"<<endl;
    }
    else
    {
    r=a%b;
    //cout<<r<<endl;
    s=(a-r)+b;
    ans=s-a;
    cout<<ans<<endl;
    }
    }
    return 0;
}
