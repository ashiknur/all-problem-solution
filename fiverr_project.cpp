#include<bits/stdc++.h>
#define ll long long

using namespace std;
#define MAX_SUM_S 10006

int tr[26][MAX_SUM_S] ,root ,nn;
void add(string &s ,int &p=root ,int i=0){
    if(!p) p = ++nn;
    if(i == s.size())
        return;
    add(s ,tr[s[i]-'a'][p] ,i+1);
}
bool check(string s ,int &p=root ,int i=0){
    if(!p) return false;
    if(i == s.size())
        return true;
    return check(s ,tr[s[i]-'a'][p] ,i+1);
}
void print() 
{
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<10;i++)
        {
            cout<<tr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"YES"<<endl;
    string s = "ab";
    print();
    add(s);
    cout<<"NO"<<endl;
    s+='a';
    print();
    add(s);
    return 0;
}