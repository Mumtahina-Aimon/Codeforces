#include <iostream>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    while(n--)
    {
    string s;
    cin>>s;
    if(s=="X++" || s=="++X")
    {
    c++;
    }
    else if(s=="--X" || s=="X--")
    {
    c--;
    }
    }
    cout<<c<<endl;
    return 0;
}
