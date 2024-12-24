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
        int ans = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int size = s.size();
            ans += size;
            if (ans <= m)
            {
                count++;
            }
        }
        cout << count << el;
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