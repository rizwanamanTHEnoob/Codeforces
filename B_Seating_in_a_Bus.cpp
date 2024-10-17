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
        vector<int> ans(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ans[i] = 0;
        }
        ans[n] = 0;
        bool a = true;
        ans[v[0]] = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i] == n)
            {
                if (ans[v[i] - 1] == 0)
                    a = false;
                else
                    ans[v[i]] == 1;
            }
            else if (ans[v[i] - 1] == 0 and ans[v[i] + 1] == 0)
            {
                a = false;
                break;
            }
            else
            {
                ans[v[i]] = 1;
            }
        }
        if (a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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