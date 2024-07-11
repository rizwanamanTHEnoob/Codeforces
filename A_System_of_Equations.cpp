#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
void solve()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    for (int a = 0; a * a <= n; a++)
    {
        for (int b = 0; b * b <= m; b++)
        {
            if (((a * a) + b == n) and (a + (b * b) == m))
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}