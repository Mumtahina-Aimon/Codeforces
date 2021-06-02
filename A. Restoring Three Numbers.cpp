#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c,d,m,n,o,p,i,j,k;
    cin>>a>>b>>c>>d;
    m=max(a,b);
    n=max(m,c);
    o=max(n,d);
    p=o-a;
    i=o-b;
    j=o-c;
    k=o-d;
    if(p==0)
    {
    cout<<i<<" "<<j<<" "<<k<<endl;
    }
    else if(i==0)
    {
    cout<<p<<" "<<j<<" "<<k<<endl;
    }
    else if(j==0)
    {
    cout<<p<<" "<<i<<" "<<k<<endl;
    }
    else if(k==0)
    {
    cout<<p<<" "<<j<<" "<<i<<endl;
    }
    return 0;
}
