#include <iostream>
using namespace std;

int main() {
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
        int cur=n-1;
        for(int i=n-2;i>=-0;i--)
        {
            if(arr[i]<=arr[cur])
            arr[i]=-1;
            else
            cur=i;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=-1)
            cout<<arr[i]<<" ";
        }
        
        cout<<endl;
    }
	return 0;
}