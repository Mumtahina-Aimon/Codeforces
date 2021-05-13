#include <iostream>

using namespace std;

int main()
{
    int a,b,c,i;
    cin>>a>>b;
    while(b--)
    {
    int r=a%10;
    if(r==0)
    {
    a=a/10;
    }
    else
    {
    a=a-1;
    }
    }
        cout<<a<<endl;

    return 0;
}
