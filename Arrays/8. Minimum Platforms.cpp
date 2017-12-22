#include <bits/stdc++.h>
using namespace std;
int convert(int n)
{
	int d=n%100;
	if(d>=60)
	{
		d-=60;
		n=(n/100+1)*100+d;
	}
	return n;
}
int main() {
	freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[9999];
	    for(int i=0;i<9999;i++)
	    {
	        arr[i]=0;
	    }
	    int *st,*en;
	    st=new int[n];
	    en=new int[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>st[i];
	        st[i]=convert(st[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>en[i];
	        en[i]=convert(en[i]);
	    }
	    int ans=1;
	    for(int i=0;i<n;i++)
	    {
	        for(int k=st[i];k<en[i];k++)
	        {
	            arr[k]+=1;
	            if(ans<arr[k])
	            ans=arr[k];
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}