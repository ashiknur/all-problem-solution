#include<bits/stdc++.h>
using namespace std;

double f(double a1,double a2, double b1, double b2) { return sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2)); }

int main()
{
    int n;
    cin>>n;
    pair<double,double>ar[n];
    for(int i=0;i<n;i++) {
        cin>>ar[i].first>>ar[i].second;
    }
    double dist = 0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(f(ar[i].first,ar[i].second,ar[j].first,ar[j].second)>=dist) dist = f(ar[i].first,ar[i].second,ar[j].first,ar[j].second);

        }
    }
    cout<<setprecision(10)<<fixed<<dist<<endl;
}