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
    	int sum;
    	cin>>sum;
    	int *arr=new int[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	int st=0;
    	int en=0;
    	int cur_sum=0;
    	bool found=true;
    	// while(en<n)
    	// {
    	// 	while(cur_sum<sum && en<n)
    	// 		cur_sum+=arr[en++];
    	// 	if(en==n)
    	// 		break;
    	// 	if(cur_sum==sum){
    	// 		found=true;
    	// 		break;
    	// 	}
    	// 	else
    	// 	{
    	// 		while(cur_sum>sum)
    	// 			cur_sum-=arr[st++];
    	// 		if(st==en+1)
    	// 			en++;
    	// 		if(cur_sum==sum){
	    // 			found=true;
	    // 			break;
	    // 		}
    	// 	}

    	// }
    	cur_sum=arr[0];
    	while(cur_sum!=sum && en<n)
    	{
    		while(cur_sum<sum && en<n)
    		{
    			cur_sum+=arr[++en];
    		}
    		if(en==n)
    		{
    			found=false;
    			break;
    		}
    		while(cur_sum>sum)
    		{
    			cur_sum-=arr[st++];
    		}
    		if(st>en)
    		{
    			en++;
    			cur_sum=arr[en];
    		}
    		
    	}
    	if(found && en<n)
    		cout<<(st+1)<<" "<<(en+1)<<endl;
    	else
    		cout<<-1<<endl;
    }
}
