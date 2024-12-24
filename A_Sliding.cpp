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
        ll n, m, r, c;
        cin >> n >> m;
        cin >> r >> c;
        ll totalPeople = n * m;
        ll remPeople = totalPeople - (((r - 1) * m) + c);
        ll dif = n - r;
        cout << (remPeople - dif) + (dif * m) << el;
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