#include <iostream>

using namespace std;
int *c_arr;
int sum_ending_at(int *arr,int n,int pos)
{
    if(pos<0)
        return 0;
    int c_sum=0;
    int c;
    for(int i=pos-1;i>=0;i--)
    {
        if(arr[i]<arr[pos])
        {
            if(c_arr[i]!=-1)
                c=c_arr[i];
            else
            {
                c=sum_ending_at(arr,n,i);
                c_arr[i]=c;
            }
            if(c>c_sum)
            {
                c_sum=c;
            }
        }
    }
    return arr[pos]+c_sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n];
        c_arr=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            c_arr[i]=-1;
        }
        int lsum=0;
        for(int i=n-1;i>=0;i--)
        {
            int ch=sum_ending_at(arr,n,i);
            if(lsum<ch)
                lsum=ch;
        }
        cout<<lsum<<endl;
    }
}
