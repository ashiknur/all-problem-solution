#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(string str)
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = (str.size()) - 1;
 
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin>>s;
    int cnt=0;
    while(!s.empty()&&s.back()=='a') s.pop_back(),cnt++;
    int i=0;
    while(i<s.size()&&s[i]=='a') i++;;
    if(i>cnt)
    {
        cout<<"No"<<endl;
        return 0;
    }
    s = s.substr(i);
    if(isPalindrome(s)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}