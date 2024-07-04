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
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> v(n * n);
        loop(n * n) cin >> v[i];
        sort(v.begin(), v.end());

        vector<int> next;
        int x = v[0];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                next.push_back(x + j * d);
            }
            x += c;
        }

        sort(next.begin(), next.end());
        if (v == next)
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
