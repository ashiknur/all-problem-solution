#include<bits/stdc++.h>
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds; 
/*
11 5
3 7 2 5 11 6 1 9 8 10 4
*/
// Ordered Set Tree 
typedef tree<
int,
null_type,
greater<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;
 
int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
 
    ordered_set tr;
    for(int i=0;i<k;i++)
    {
        tr.insert(ar[i]);
    }
    for(int i=k;i<n;i++)
    {
        cout<<*tr.find_by_order(k-1)<<endl;
        tr.insert(ar[i]);
    }
    cout<<*tr.find_by_order(k-1)<<endl;
}