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
        int k;
        cin >> k;
        int ans = 0;
        int willTake = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a >= k)
            {
                willTake += a;
            }
            else if (a == 0)
            {
                if (willTake > 0)
                {
                    ans++;
                    willTake--;
                }
            }
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