#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,t,sum=0;
    cin>>t;
    if(t%2==0)
    {
    cout<<t/2<<endl;
    }
    else
    {
    int n=t/2-t;
    cout<<n<<endl;
    }
    return 0;
}
