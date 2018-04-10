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
		cin>>n;
		vector<int> arr(n);
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		vector<int> lis(n);
		for(int i=0;i<n;i++)
		{
			int max=1;
			int j=i-1;
			while(j>=0)
			{
				if(arr[j]<arr[i])
				{
					if(lis[j]+1>max)
						max=lis[j]+1;
				}
				j--;
			}
			lis[i]=max;
		}
		int ans;
		if(n==0)
			ans=0;
		else
		{
			ans=lis[0];
			for(int i=1;i<n;i++)
			{
				if(ans<lis[i])
					ans=lis[i];
			}
		}
		
		cout<<ans<<endl;
	}
}