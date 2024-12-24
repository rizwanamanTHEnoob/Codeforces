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
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        int freqA[26][n + 1];
        int freqB[26][n + 1];
        memset(freqA, 0, sizeof(freqA));
        memset(freqB, 0, sizeof(freqB));
        for (int i = 0; i < n; i++)
        {
            freqA[int(a[i] - 'a')][i + 1]++;
            freqB[int(b[i] - 'a')][i + 1]++;
        }
        for (int i = 0; i < 26; i++)
        {
            for (int j = 2; j <= n; j++)
            {
                freqA[i][j] += freqA[i][j - 1];
                freqB[i][j] += freqB[i][j - 1];
            }
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int cnt = 0;
            for (int i = 0; i < 26; i++)
            {
                cnt += abs((freqA[i][r] - freqA[i][l - 1]) - (freqB[i][r] - freqB[i][l - 1]));
            }
            cout << cnt / 2 << el;
        }
        // for (int i = 0; i < 26; i++)
        // {
        //     for (int j = 0; j < n + 1; j++)
        //     {
        //         cout << freqB[i][j] << ' ';
        //     }
        //     cout << endl;
        // }
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