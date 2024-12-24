#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
ll binary(ll n, ll b, ll c)
{
    ll left = 1;
    ll right = n;
    ll lowerBound = -1;
    while (left <= right)
    {
        ll mid = (left + right) / 2;
        ll value = b * (mid - 1) + c;
        if (value >= (n - 1))
        {
            lowerBound = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return lowerBound;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, b, c;
        cin >> n >> b >> c;
        if (b == 0 && c == 0)
        {
            cout << -1 << el;
        }
        else if (c > n - 1)
        {
            cout << n << el;
        }
        else if (b == 0 && c != 0)
        {
            if (c <= n - 1)
            {
                cout << n - 1 << el;
            }
            else
            {
                cout << n << el;
            }
        }
        else
        {
            ll start = c;
            ll end = b * (n - 1) + c;
            cout << n - binary(n, b, c) << el;
        }
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