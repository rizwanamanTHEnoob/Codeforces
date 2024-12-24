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
        int n, m;
        cin >> n >> m;
        char vs[n + 1][m + 1];
        for (int row = 1; row <= n; row++)
        {
            for (int col = 1; col <= m; col++)
            {
                cin >> vs[row][col];
            }
        }
        int ans = 0;
        for (int i = 0; i < (min(n, m)) / 2; i++)
        {
            string s = "";
            int row = 1 + i;
            int col = 1 + i;
            for (; col <= m - i; col++)
            {
                s += vs[row][col];
            }
            col--;
            for (row = row + 1; row <= n - i; row++)
            {
                s += vs[row][col];
            }
            row--;
            for (col = col - 1; col >= 1 + i; col--)
            {
                s += vs[row][col];
            }
            col++;
            for (row = row - 1; row > 1 + i; row--)
            {
                s += vs[row][col];
            }

            s.push_back(s[0]);
            s.push_back(s[1]);
            s.push_back(s[2]);

            // cout << s << el;
            int count = 0;
            int size = s.size();
            for (int j = 0; j < size - 3; j++)
            {
                if (s[j] == '1' && s[j + 1] == '5' && s[j + 2] == '4' && s[j + 3] == '3')
                {
                    count++;
                    j += 3;
                }
                // cout<<count<<el;
            }

            ans += count;
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
