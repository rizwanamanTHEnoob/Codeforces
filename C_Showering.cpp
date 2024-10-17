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
        int n, s, m;
        cin >> n >> s >> m;
        bool isPossible = false;
        int first = 0;
        while (n--)
        {
            int a, b;
            cin >> a >> b;
            if ((a - first) >= s)
            {
                isPossible = true;
            }
            first = b;
        }
        if ((m - first) >= s)
        {
            isPossible = true;
        }
        (isPossible) ? cout << "YES" << endl : cout << "NO" << endl;
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