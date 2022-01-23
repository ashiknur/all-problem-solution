#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        vector<int>ans;
        int maximum_array[n];
        maximum_array[n-1]=ar[n-1];
        for(int i=n-2;i>=0;i--){
            maximum_array[i]=max(ar[i],maximum_array[i+1]);
        }
        // for(auto x:maximum_array){
        //     cout<<x<<" ";
        // }
        cout<<'\n';
        int i=0;
        int mex[200000+10]={0};
        for(;i<n;){
            memset(mex,0,sizeof(mex));
            int maxi = 0;
            int pos = i;
            int mex_pos=0;
            int j;
            for(j=i;j<n;j++){
                mex[ar[j]]=1;
                while(mex[mex_pos]==1){
                    mex_pos++;

                }
                if(mex_pos>maxi){
                    maxi=mex_pos;
                    pos = j;
                }
                if(maxi>maximum_array[j])
                {
                    break;
                }

            }
            // cout<<i<<" "<<j<<'\n';
            ans.push_back(maxi);
            i=pos+1;
        }
        cout<<ans.size()<<'\n';
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<'\n';
    }
}