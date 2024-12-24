#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
const int N = 2e5 + 150;
ll freq[N];

void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        fill(freq, freq + N, 0);
        for (ll i = 1; i <= k; i++)
        {
            ll b, c;
            cin >> b >> c;
            freq[b] += c;
        }
        sort(freq + 1, freq + k + 1, greater<int>());
        ll sum = 0;
        for (ll i = 1; i <= n; i++)
        {
            sum += freq[i];
        }

        cout << sum << el;
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
