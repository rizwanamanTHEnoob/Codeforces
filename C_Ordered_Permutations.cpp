#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
ll returnSum(vector<ll> arr)
{
    ll sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ll mini = arr[i];
        for (int j = i; j < arr.size(); j++)
        {
            mini = min(mini, arr[j]);
            sum += mini;
        }
    }
    return sum;
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> arr;
    for(int i=0;i<n;i++){
        ll x;
        cin >> x;
        arr.push_back(x);
    }
    cout << returnSum(arr) << el;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}