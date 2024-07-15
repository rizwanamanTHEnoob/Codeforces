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
        vector<int> v(n);
        loop(n) cin >> v[i];

        for (int i = 1; i < n - 1; i++)
        {
            if (v[i - 1] == 0)
                continue;
            if (v[i] > 0)
            {
                v[i] = (v[i] - (2 * v[i - 1]));
                v[i + 1] = v[i + 1] - v[i - 1];
                v[i - 1] = 0;
            }
        }

        bool allZero = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0)
            {
                allZero = false;
                break;
            }
        }

        if (allZero)
            cout << "YES" << el;
        else
            cout << "NO" << el;
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
