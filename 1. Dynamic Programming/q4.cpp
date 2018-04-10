#include <iostream>
#include <vector>
using namespace std;
#define infinity 101
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
		vector<int> arr(n);
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		vector<int> dp(n);
		int i=n-1;
		while(i>=0)
		{
			if(arr[i]==0)
				dp[i]=infinity;
			else if(arr[i]>=n-i-1)
				dp[i]=1;
			else
			{
				int j=i+arr[i];
				int min=infinity;
				while(j>i)
				{
					if(min>dp[j])
						min=dp[j];
					j--;
				}
				dp[i]=min+1;
			}
			i--;
		}
		// for(int i=0;i<n;i++)
		// {
		// 	cout<<dp[i]<<" ";
		// }
		dp[0] = dp[0]>=infinity?-1:dp[0];
		cout<<dp[0]<<endl;
	}
}