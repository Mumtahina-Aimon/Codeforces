#include <iostream>

using namespace std;

int main()
{
    int t,n,s=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>0)
        {
            s++;
        }
    }
    if(s!=0)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
    return 0;
}
