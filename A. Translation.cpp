#include <bits/stdc++.h>
using namespace std;

void reverse(string& s)
{
	int n = s.length();
	for (int i = 0; i < n / 2; i++)
		swap(s[i], s[n - i - 1]);
}

int main()
{
	string s,t;
	cin>>s>>t;
	reverse(s);
	if(s==t)
	{
	cout<<"YES"<<endl;
	}
	else
	{
	cout<<"No"<<endl;
	}
		return 0;
}
