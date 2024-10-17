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
        int n;
        cin >> n;
        char grid[n][4];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin >> grid[i][j];
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < 4; j++)
            {
                if (grid[i][j] == '#')
                    cout << j + 1 << ' ';
            }
        }
        cout << endl;
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