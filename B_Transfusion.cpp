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
        ll a[n + 1];
        ll sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        bool notPossible = false;
        ll target = sum / n;
        for (int i = 1; i <= n - 2; i++)
        {
            if (a[i] == target)
            {
                continue;
            }
            else if (a[i] > target)
            {
                ll less = a[i] - target;
                a[i] -= less;
                a[i + 2] += less;
            }
            else
            {
                ll less = target - a[i];
                a[i] += less;
                a[i + 2] -= less;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] != target)
            {
                notPossible = true;
                break;
            }
        }
        if (notPossible)
        {
            cout << "NO" << el;
        }
        else
        {
            cout << "YES" << el;
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