#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int l1,l2;
		cin>>l1>>l2;
		string s1,s2;
		cin>>s1>>s2;
		vector<vector<int > > mat(l1+1,vector<int>(l2+1,0));
		for(int i=1;i<=l1;i++)
		{
			for(int j=1;j<=l2;j++)
			{
				if(s1[i-1]==s2[j-1])
					mat[i][j]=1+mat[i-1][j-1];
				else
				{
					mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
				}
			}
		}
		int lcs = mat[l1][l2];
		int ans = max(l1,l2)-lcs;
		cout<<lcs<<" "<<ans<<endl;
	}
}