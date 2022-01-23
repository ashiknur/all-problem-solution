#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ar[n];
    for(auto &x:ar){
        cin>>x;
    }
    sort(ar,ar+n);
    cout<<ar[n-1]-ar[0]<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}