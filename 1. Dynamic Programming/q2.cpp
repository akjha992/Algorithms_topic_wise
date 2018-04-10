#include <iostream>
#include <vector>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
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
		// for(int i=0;i<=l1;i++)
		// {
		// 	for(int j=0;j<=l2;j++)
		// 	{
		// 		cout<<mat[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		cout<<mat[l1][l2]<<endl;
	}
}