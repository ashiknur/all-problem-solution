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
        string s = "abcdefghijklmnopqrstuvwxyz";
        string ans = "";
        int i=0;
        while(n)
        {
            ans+=s[i];
            i++;
            if(i==26) i=0;
            n--;
        }
        cout<<ans<<endl;
    }
}