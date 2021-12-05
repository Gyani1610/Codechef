#include<bits/stdc++.h>
using namespace std;
void solve()
{
	long long n,x;
	cin>>n; 
	vector<int>v;
	long long  minm=INT_MAX;
	for(long long  i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
		minm=min(minm,x);
	} 
	long long ans=0,in;
	sort(v.begin(),v.end(),greater<int>());
	if(minm<=0)
	{
		for(long long  i=0;i<n;i++)
		{
			if(v[i]<=0)
			{
				ans=i;
				break;
			}
		}
		cout<<ans<<endl;
	}
	else
	{
		ans=minm*n; 
		
		for(long long i=0;i<n;i++)
		{
			if(v[i]==minm)
			{
				in=i;
				break;
			}
		} 
	cout<<ans+in<<endl; 
	} 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	solve();
}
