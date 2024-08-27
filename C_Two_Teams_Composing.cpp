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
        map<int, int> mp;
        set<int> s;
        for (auto i : v)
        {
            mp[i]++;
            s.insert(i);
        }
        int maxi = -1;
        for (auto i : mp)
        {
            maxi = max(maxi, i.second);
        }
        if (s.size() > maxi)
        {
            cout << maxi << endl;
        }
        else
        {
            maxi--;
            int x = s.size();
            cout << min(maxi, x) << endl;
        }
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