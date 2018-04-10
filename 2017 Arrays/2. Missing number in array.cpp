#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int sum=0;
    	for(int i=0;i<n-1;i++)
    	{
    		int x;
    		cin>>x;
    		sum+=x;
    	}
    	cout<<(n*(n+1)/2)-sum<<endl;
    }
}
