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
        ll m, a, b, c;
        cin >> m >> a >> b >> c;
        ll totalSeat = m * 2;
        ll row1 = min(m, a);
        ll row2 = min(m, b);
        ll extraSeat = totalSeat - (row1 + row2);
        ll ans = row1 + row2 + min(extraSeat, c);
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