#include <bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int* arr = new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int k=0;
        int* converted=new int[n];
        int prev=0;
        int ans=-100;
        int cur_sum=0;
        for(int i=0;i<n;i++)
        {
            if(prev==0)
            {
                if(arr[i]>0)
                {
                    prev=1;
                    cur_sum=arr[i];
                }
                else
                {
                    prev=-1;
                    if(ans<arr[i])
                        ans=arr[i];
                    cur_sum=arr[i];
                }
            }
            else if(prev==1)
            {
                if(arr[i]>0)
                {
                    prev=1;
                    cur_sum+=arr[i];
                }
                else
                {
                    prev=-1;
                    converted[k++]=cur_sum;
                    cur_sum=arr[i];
                }
            }
            else
            {
                if(arr[i]>0)
                {
                    prev=1;
                    converted[k++]=cur_sum;
                    cur_sum=arr[i];
                }
                else
                {
                    prev=-1;

                    if(ans<arr[i])
                        ans=arr[i];
                    cur_sum+=arr[i];
                }
            }
        }

        converted[k++]=cur_sum;
        int st=0;
        int en=k-1;
        if(converted[0]<=0)
            st++;
        if(converted[k-1]<=0)
            en--;

        while(st<en)
        {
            if((-1*converted[st+1])>=converted[st])
            {
                if(ans<converted[st])
                    ans=converted[st];

            }
            else
            {
                if(ans<converted[st])
                    ans=converted[st];
                converted[st+2]+=converted[st]+converted[st+1];
            }
            st+=2;
        }

        if(st==en)
        {
            if(ans<converted[st])
            ans=converted[st];
        }
        else
        {
            if(ans<converted[st-1])
            ans=converted[st-1];
        }
        cout<<ans<<endl;
    }
}
