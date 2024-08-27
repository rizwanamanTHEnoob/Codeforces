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
        vector<ll> v(n);
        loop(n) cin >> v[i];

        ll sum = 0;
        bool plus = true;
        ll maxi = 0;
        ll mini = -1e10;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                maxi = max(maxi, v[i]);
                if (mini != -1e10)
                {
                    sum += mini;
                    mini = -1e10;
                }
            }
            else
            {
                sum += maxi;
                maxi = 0;
                mini = max(mini, v[i]);
            }
        }
        if (mini != -1e10)
        {
            sum += mini;
        }
        sum += maxi;
        cout << sum << endl;
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