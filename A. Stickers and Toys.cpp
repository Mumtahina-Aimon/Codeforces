#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c && c==a)
    {
    cout<<"1"<<endl;
    }
    else if(c>b)
    {
    cout<<(a-b)+1<<endl;
    }
    else if(b>c)
    {
    cout<<(a-c)+1<<endl;
    }
    else if(b==c)
    {
    cout<<(a-b)+1<<endl;
    }

   // cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}
