#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    
    if(n>=(-1LL*(1LL<<31)) && n<=((1LL<<31)-1))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}