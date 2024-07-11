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
        n--;
        vector<int> v(n);
        loop(n) cin >> v[i];
        int a=1000;
        vector<int> ans(n + 1);
        ans[0] = a;
        ans[1] = a+v[0];
        int index = 1;
        for (int i = 2; i < n + 1; i++)
        {
            ans[i] = ans[i - 1] + v[index++];
        }
        for (int i = 0; i < n + 1; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << endl;
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