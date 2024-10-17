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
        ll n, k;
        cin >> n >> k;
        int nn = n;
        ll sum = (n * (k + (n + k - 1))) / 2LL;
        ll t = LLONG_MAX;
        int iteration = 0;
        ll maxNum = (n + k - 1);
        nn--;
        ll ans = LLONG_MAX;
        for (int i = 1; i <= n; i++)
        {
            ll temp = (nn * (k + (nn + k - 1))) / 2LL;
            ll dis = abs(temp - maxNum);
            if (dis > ans)
                break;
            ans = min(ans, dis);
            iteration++;
            maxNum--;
            nn--;
        }
        cout << n - iteration << endl;
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