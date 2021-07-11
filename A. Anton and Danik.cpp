#include <iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    int n,c=0,s=0,i;
    cin>>n;
    char st;

    for(i=0; i<n; i++)
    {
    cin>>st;
        if(st=='D')
        {
            c++;
        }
        if(st=='A')
        {
            s++;
        }
    }
    if(s==c)
    {
        cout<<"Friendship"<<endl;
    }
    else if(c>s)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Anton"<<endl;
    }
    return 0;
}
