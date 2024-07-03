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
        vector<int> temp;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                int x = v[i - 1] - v[i];
                temp.push_back(x);
                v[i] = v[i - 1];
            }
        }
        sort(temp.begin(), temp.end());
        ll ans = 0;
        ll sub = 0;
        int size = temp.size();
        int x = size;
        for (int i = 0; i < size; i++)
        {
            ans += 1LL * (temp[i] - sub) * (x + 1);
            x--;
            sub = temp[i];
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