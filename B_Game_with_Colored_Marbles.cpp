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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int cnt = 0;
        vector<pair<int, int>> vp;
        for (auto x : mp)
        {
            vp.push_back({x.second, x.first});
        }
        sort(vp.begin(), vp.end());
        int size = vp.size();
        string turn = "Alice";
        int oneCount = 0;
        for (int i = 0; i < size; i++)
        {
            if (vp[i].first == 1)
            {
                oneCount++;
            }
            else
            {
                cnt++;
            }
        }
        cout << cnt + (ceil(oneCount / 2.0) * 2) << el;
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