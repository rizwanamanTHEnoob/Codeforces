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
        vector<int> v = {0, 1, 2, 2, 3, 3, 4, 4, 5, 5, 1, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 13, 13, 1, 12};
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            for (int i = 1; i <= n / 2; i++)
            {
                cout << i << ' ' << i << ' ';
            }
            cout << el;
        }
        else if (n % 2 == 1 && n < 27)
        {
            cout << -1 << el;
        }
        else
        {
            int rem = n - 27;
            int j = 14;
            for (int i = 1; i <= rem / 2; i++)
            {
                v.push_back(j);
                v.push_back(j);
                j++;
            }
            for (auto x : v)
            {
                if (x != 0)
                {
                    cout << x << ' ';
                }
            }
            cout << el;
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