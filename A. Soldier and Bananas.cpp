#include <iostream>

using namespace std;

int main()
{
    int k,n,w,sum=0,p;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++)
    {
        sum+=k*i;
    }
    if(sum<n)
    {
        cout<<"0"<<endl;
    }
    else
    {
        p=sum-n;

        cout<<p<<endl;
    }
    return 0;
}
