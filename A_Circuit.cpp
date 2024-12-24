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
        int ones = 0;
        int zeros = 0;
        for (int i = 1; i <= 2 * n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                ones++;
            else
                zeros++;
        }
        if (ones % 2 == 1)
        {
            cout << 1 << ' ' << min(ones, zeros) << el;
        }
        else
        {
            cout << 0 << ' ' << min(zeros, ones) << el;
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