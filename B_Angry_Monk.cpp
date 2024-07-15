#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> v(k);
        loop(k) cin >> v[i];
        ll ans = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < k - 1; i++)
        {
            if (v[i] == 1)
            {
                ans += 1;
            }
            else
            {
                ll x = v[i] * 2 - 1LL;
                ans += x;
            }
        }
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