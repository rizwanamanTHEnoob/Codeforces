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
        string s;
        cin >> s;
        int size = s.size();
        ll ans = 0;
        ll x = 0;
        for (int i = 0; i < size; i++)
        {
            if (s[i] == '1')
                x++;
            else if (s[i] == '0' and x > 0)
            {
                ans += x;
                ans++;
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