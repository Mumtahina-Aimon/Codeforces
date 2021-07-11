#include <iostream>

using namespace std;

int main()
{
    int n,a,b,e;
    cin>>n>>a>>b;
    e=n-a;
    if(e<b+1)
    {
    cout<<e<<endl;
    }
    else
    {
    cout<<b+1<<endl;
    }
    return 0;
}
