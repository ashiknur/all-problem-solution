#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++) cin>> ar[i];
        sort(ar,ar+n);
        double sum=0;
        for(int i=0;i<n;i++) sum+=ar[i];
        double ans = sum/n*1.0;
        double pre_sum=0;
        for(int i=0;i<n;i++) 
        {
            sum-=ar[i];
            pre_sum+=ar[i];
            ans = max(ans,1.0*pre_sum/(i+1)+1.0*sum/(n-i-1));
        }
        cout<<fixed<<setprecision(6)<<ans<<endl;
        
    }
}