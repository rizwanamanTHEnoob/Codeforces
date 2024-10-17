#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        ll a = (x + k - 1) / k;
        ll b = (y + k - 1) / k;
        ll ans = max((2 * a - 1), (2 * b));
        cout << ans << endl;
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
