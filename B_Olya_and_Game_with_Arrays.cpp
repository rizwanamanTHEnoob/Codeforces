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
        vector<int> min1;
        vector<int> min2;
        while (n--)
        {
            int m;
            cin >> m;
            vector<int> v(m);
            loop(m) cin >> v[i];
            sort(v.begin(), v.end());
            min1.push_back(v[0]);
            min2.push_back(v[1]);
            v.erase(v.begin(), v.end());
        }
        sort(min1.begin(), min1.end());
        sort(min2.begin(), min2.end());
        ll ans = min1[0];

        for (int i = 1; i < min2.size(); i++)
        {
            ans += min2[i];
        }
        cout << ans << endl;
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