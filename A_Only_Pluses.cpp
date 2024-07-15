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
        vector<int> v(3);
        loop(3) cin >> v[i];
        loop(5)
        {
            sort(v.begin(), v.end());
            v[0]++;
        }

        cout << v[0] * v[1] * v[2] << endl;
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