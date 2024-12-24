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
        int x, y, z;
        int size = s.size();
        x = y = z = -1;
        int i = 0;
        int ans = INT_MAX;
        bool gotIt = false;
        while (i < size)
        {
            int maxDistance = INT_MIN;
            int val = s[i] - '0';
            if (val == 1)
            {
                x = i;
            }
            else if (val == 2)
            {
                y = i;
            }
            else
            {
                z = i;
            }
            i++;

            if (x >= 0 && y >= 0 && z >= 0)
            {
                int xtoz = abs(z - x) + 1;
                int xtoy = abs(y - x) + 1;
                int ytoz = abs(z - y) + 1;
                maxDistance = max(xtoz, max(xtoy, ytoz));
                ans = min(ans, maxDistance);
                gotIt = true;
            }
        }
        if (gotIt)
        {
            cout << ans << el;
        }
        else
        {
            cout << 0 << el;
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