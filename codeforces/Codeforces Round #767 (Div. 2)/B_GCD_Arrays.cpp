#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r,k;
        cin>>l>>r>>k;
        int x = r-l;
        // if(l&1 && r&1){
        //     x = x/2+1;
        // }
        // else if(l&1 && r%2==0){
        //     x = x/2+1;
        // }
        // else if(l%2==0 && r%2==1)
        // {
        //     x = x/2+1;
        // }
        // else x = x/2;
        if(l%2==0&&r%2==0){
            x=x/2;
        }
        else x = x/2+1;
        if(x<=k){
            cout<<"YES"<<endl;
            continue;
        }
        if(l==r && l>1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
}