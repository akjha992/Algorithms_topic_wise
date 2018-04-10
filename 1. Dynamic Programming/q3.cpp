#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		int w;
		cin>>n>>w;
		vector<int> val(n),weight(n);
		for(int i=0;i<n;i++)
		{
			cin>>val[i];
		}
		for(int j=0;j<n;j++)
		{
			cin>>weight[j];
		}
		vector<vector<int> > dp(w+1,vector<int>(n+1,0));
		for(int i=1;i<=w;i++)
		{
			for(int j=1;j<=n;j++)
			{
				int value=0;
				if(weight[j-1]<=i)
					value=val[j-1]+dp[i-weight[j-1]][j-1];
				dp[i][j]=max(dp[i][j-1],value);
			}
		}

		// for(int i=0;i<=w;i++)
		// {
		// 	for(int j=0;j<=n;j++)
		// 	{
		// 		cout<<dp[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		cout<<dp[w][n]<<endl;
	}
}