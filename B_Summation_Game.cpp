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
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        vector<int> prefix(n + 1);

        for (int i = 1; i <= n; i++)
        {
            prefix[i] = prefix[i - 1] + v[i];
        }
        // for(int i=0;i<n;i++){
        //     cout<<prefix[i]<<' ';
        // }
        // cout<<endl;
        ll ans = LLONG_MIN;
        for (int i = n; i >= n - k; i--)
        {

            ll xSum = prefix[i] - prefix[max(0, i - x)];
            ll y = prefix[max(0, i - x)] - xSum;
            ans = max(ans, y);
        }

        cout << ans << el;
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
