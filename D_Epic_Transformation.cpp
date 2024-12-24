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
        priority_queue<pair<int, int>> p;
        for (auto x : mp)
        {
            p.push(make_pair(x.second, x.first));
        }
        int ans = n;
        while (p.size() > 1)
        {
            auto [count1, value1] = p.top();
            p.pop();
            auto [count2, value2] = p.top();
            p.pop();
            count1--;
            count2--;
            ans -= 2;
            if (count1 > 0)
            {
                p.push(make_pair(count1, value1));
            }
            if (count2 > 0)
            {
                p.push(make_pair(count2, value2));
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