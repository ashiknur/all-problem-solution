#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long int n;
    cin>>n;
    
    string s;
    while(n)
    {
        if(n%2==1)
        {
            s+="2";
        }
        else
        {
            s+="0";
        }
        n/=2ll;
    }
    reverse(s.begin(), s.end());
    cout<<s<<endl;
}