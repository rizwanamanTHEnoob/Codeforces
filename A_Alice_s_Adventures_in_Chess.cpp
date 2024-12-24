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
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int x = 0, y = 0;
        int size = s.size();
        bool canReach = false;
        for (int i = 1; i <= 20; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (x == a && y == b)
                {
                    canReach = true;
                    break;
                }
                if (s[j] == 'N')
                {
                    y++;
                }
                if (s[j] == 'E')
                {
                    x++;
                }
                if (s[j] == 'S')
                {
                    y--;
                }
                if (s[j] == 'W')
                {
                    x--;
                }
            }
        }
        if (canReach)
        {
            cout << "YES" << el;
        }
        else
        {
            cout << "NO" << el;
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