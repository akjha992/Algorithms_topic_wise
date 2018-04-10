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
    	int *arr=new int[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	int st=-1;
    	int en=n;
    	int s=0;
    	int rev_s=0;
    	int cor=false;
    	while(st<en-2)
    	{
    		if(s>rev_s)
    			rev_s+=arr[--en];
    		else
    			s+=arr[++st];
    	}
    	if(s==rev_s)
    		cout<<((st+en)/2+1)<<endl;
    	else
    		cout<<-1<<endl;
    }
}
