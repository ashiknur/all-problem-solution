#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        pair<int,int>ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i].first;
        }
        for(int i=0;i<n;i++)
        {
            cin>>ar[i].second;
        }
        sort(ar,ar+n);
        int mem = k;
        
        for(int i=0;i<n;i++)
        {
            if(ar[i].first<=mem)
            {
                mem+=ar[i].second;
            }
            else
                break;
        }
        cout<<mem<<endl;
    }
}