#include<bits/stdc++.h>

using namespace std;

vector<vector<int> > getMergedIntervals(vector<vector<int> >intervals)
{
    int n = intervals.size();
    pair<int,int>ar[n];
    for(int i=0;i<n;i++)
    {
        ar[i]= {intervals[i][0],intervals[i][1]};
    }
    sort(ar,ar+n);
    vector<vector<int> >ans;
    int index = 0;
    for (int i=1; i<n; i++) 
    { 
        if (ar[index].second >=  ar[i].first) 
        { 
            ar[index].second = max(ar[index].second, ar[i].second); 
        } 
        else {
            index ++;
            ar[index] = ar[i]; 
        }    
    } 
    for (int i = 0; i <= index; i++) 
    {
        cout<<ar[i].first<<" "<<ar[i].second<<endl;
        ans.push_back(vector<int>(ar[i].first,ar[i].second));
    }
    return ans;
}

int main()
{
    getMergedIntervals({{6,9},{2,3},{9,11},{1,5},{14,18}});
}
