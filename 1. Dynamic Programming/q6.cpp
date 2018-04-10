#include <iostream>
#include <vector>
using namespace std;
int ins=1;
int coin_change(vector<int> coin,int note,vector<vector<int> > &dp)
{
	//cout<<"ins "<<ins++<<endl;
	if(note==0){
		//cout<<"h1";
		dp[note][coin.size()]=1;
		return 1;
	}
	if(coin.size()==0)
	{
		//cout<<"x:"<<note<<endl;
		dp[note][coin.size()]=0;
		//cout<<dp[note][0]<<endl;
		return 0;
	}
	if(dp[note][coin.size()]!=-1)
	{
		//cout<<"h4";
		return dp[note][coin.size()];
	}
	else
	{
		//cout<<"h3";
		int val=0;
		if(note-coin[coin.size()-1]>=0)
			val = coin_change(coin,note-coin[coin.size()-1],dp);
		coin.pop_back();
		val+=coin_change(coin,note,dp);
		dp[note][coin.size()+1]=val;
		//cout<<"yo";
		return val;
		
	}
}

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
		vector<int> coin(n);
		for(int i=0;i<n;i++)
		{
			cin>>coin[i];
		}
		int note;
		cin>>note;
		vector<vector<int> > dp(note+1,vector<int>(n+1,-1));
		cout<<coin_change(coin,note,dp)<<endl;
		//cout<<coin.size()<<" "<<note<<endl;
		// for(int i=0;i<=note;i++)
		// {
		// 	for(int j=0;j<=n;j++)
		// 	{
		// 		cout<<dp[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
	}
}