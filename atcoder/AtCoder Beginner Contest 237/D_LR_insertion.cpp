#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>ar;
    deque<int>ans;
    for(int i=0;i<=s.size();i++)
    {
        ar.push_back(i);
    }
    bool flag=false;
    for(int i=s.size()-1;i>=-1;i--)
    {
        if(flag)
        {
            ans.push_back(ar[i+1]);
            flag=false;
        }
        else
        {
            ans.push_front(ar[i+1]);
        }
        if(i==-1)
        {
            break;
        }
        if(s[i]=='L'){
            flag=true;
        }
        
        

    }
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    
}