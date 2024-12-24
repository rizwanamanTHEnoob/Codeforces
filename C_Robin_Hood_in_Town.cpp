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
        int n;
        cin >> n;
        vector<ll> v(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        double halfAverage = (sum) / (2LL * n);
        if (n <= 2)
        {
            cout << -1 << el;
        }
        else
        {
            sort(v.begin(), v.end());
            if (halfAverage > v[n / 2])
            {
                cout << 0 << el;
            }
            else
            {
                cout << max(0LL, (1LL * v[n / 2] * n * 2LL) - sum + 1) << el;
            }
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