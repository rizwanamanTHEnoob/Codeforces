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
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b((n + 1));
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i <= n; i++)
            cin >> b[i];

        ll count = 0;
        bool isInside = false;
        ll size = b.size();
        ll lastElement = b[size - 1];

        ll minDis = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            count += (abs(a[i] - b[i]));
            if ((a[i] >= lastElement and b[i] <= lastElement) || (a[i] <= lastElement and b[i] >= lastElement))
            {
                isInside = true;
            }
            // a[i]=b[i];
            ll x = abs(b[i] - lastElement);
            ll y = abs(a[i] - lastElement);

            minDis = min(minDis, min(y, x));
            // cout<<minDis;
        }
        count++;
        if (!isInside)
        {
            count += minDis;
        }
        cout << count << endl;
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