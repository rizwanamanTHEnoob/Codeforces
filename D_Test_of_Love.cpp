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
        int n, m, k;
        cin >> n >> m >> k;
        string a;
        cin >> a;
        a = "L" + a + "L";
        n += 2;
        int position = 0;
        bool reached = true;
        while (true)
        {
            for (int i = 1; i <= m; i++)
            {
                position++;
                if (a[position - 1] == 'L')
                    break;
            }
            if (position >= n)
                break;
            if (a[position - 1] == 'L')
                continue;
            if (a[position - 1] == 'C')
            {
                reached = false;
                break;
            }
            while (k)
            {
                position++;
                k--;
                if (a[position - 1] == 'L')
                    break;
                if (a[position - 1] == 'C')
                {
                    reached = false;
                    break;
                }
            }
            if (a[position - 1] == 'W')
            {
                reached = false;
                break;
            }
        }
        if (reached)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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