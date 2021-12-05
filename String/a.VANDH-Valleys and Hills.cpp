#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,m,i,x;
	cin>>n>>m;
	string s;
	x=min(n,m);
	n-=x;
	m-=x;
	for(i=0;i<=x;i++)
	{ 
		s.push_back('0'); 
		s.push_back('1');
	}
	while(n--) 
	{
		if(n==0)
		{
			s.push_back('0'); 
		}
		else
		s=s+"001";
	}
	while(m--) 
	{
		if(m==0)
		{
			s="1"+s; 
		}
		else
		s="011"+s;
	}
	
	cout<<s.size()<<endl<<s<<endl;
	 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	solve();
}
