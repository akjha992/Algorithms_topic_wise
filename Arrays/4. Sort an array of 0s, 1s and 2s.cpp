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
    	int arr[3];
    	arr[0]=0;
    	arr[1]=0;
    	arr[2]=0;
    	int n;
    	cin>>n;
    	for(int i=0;i<n;i++)
    	{
    		int ele;
    		cin>>ele;
    		arr[ele]++;
    	}
    	int x=0;
    	while(x<3)
    	{
    		if(arr[x]==0)
    		{
    			x++;
    			continue;
    		}
    		cout<<x<<" ";
    		(arr[x])--;
    	}
    	cout<<endl;

    }
}
