#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a,b,h,m,ans;
    cin>>a>>b;
    h=(24-a)*60;
    m=60-b;
    ans=h+m;
    if(ans>60)
    {
    ans=ans-60;
    }
    cout<<ans<<endl;
    }
    return 0;
}
