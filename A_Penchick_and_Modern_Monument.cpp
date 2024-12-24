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
        int arr[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int maxOccur = -1;
        int prev = -1;
        for (auto x : mp)
        {
            if (x.second > prev)
            {
                maxOccur = x.first;
                prev = x.second;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (maxOccur != arr[i])
            {
                ans++;
            }
        }
        cout << ans << el;
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