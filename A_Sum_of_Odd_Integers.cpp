#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll x = (k - 1) * (k - 1);
        ll y = n - x;
        if ((y & 1) and y>(x-((k-2)*(k-2))))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}