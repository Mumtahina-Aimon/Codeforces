#include <iostream>

using namespace std;

int main()
{
    int n,k,c=0,i;
    cin>>n>>k;
    int a[100];
    for(int i=1;i<=n;i++)
    {
    cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
    if(a[i]>=a[k] && a[i]!=0)
{    ++c;
    }

        }
    cout<<c<<endl;
    return 0;
}
