#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long int
#define endl '\n'
int fib[1000000];
vector<int> cycle[10000];
int cyc[10000];

int bigmod(int a, int b, int m)
{
    if(b == 0) return (int)1 % m;
    int x = bigmod(a, b / (int)2, m);
    x = ((x % m) * (x % m)) % m;
    if(b&(int)1) return ((a % m) * x) % m;
    else return x;
}

int solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    if(n == 1 || a == 0){
        cout << 0 << endl;
        return 0;
    }
    if(b == 0) {
        cout << 1 % n << endl;
        return 0;
    }
    int x = bigmod(a, b, cyc[n]);
    cout << cycle[n][x] << endl;
    return 0;
}

int32_t main()
{

    fib[0] = 0;
    fib[1] = 1;
    int pos;
    for(int i = 2; i <= 1000; i++)
    {
        pos = 2;
        fib[pos] = (fib[pos - 1] + fib[pos - 2]) % i;
        cycle[i].push_back(fib[0]%i);
        cycle[i].push_back(fib[1]%i);
        cycle[i].push_back(fib[pos]);
        while(fib[pos] % i != 1 || fib[pos - 1] % i != 0)
        {
            pos++;
            fib[pos] = (fib[pos - 1] + fib[pos - 2]) % i;
            cycle[i].push_back(fib[pos]);
        }

        cyc[i] = pos - 1;
    }
    
    int t=1;
    cin>>t;
    for(int ii=1;ii<=t;ii++)
    {
        int x = solve();

    }
}
