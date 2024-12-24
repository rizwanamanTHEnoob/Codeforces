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
        int x, y, k;
        cin >> x >> y >> k;
        int Ax, Ay, Bx, By;

        int Cx, Cy, Dx, Dy;
        int m = min(x, y);
        Ax = 0;
        Ay = 0;
        Bx = m;
        By = m;
        Cx = 0;
        Cy = m;
        Dx = m;
        Dy = 0;

        cout << Ax << ' ' << Ay << ' ' << Bx << ' ' << By << el;
        cout << Cx << ' ' << Cy << ' ' << Dx << ' ' << Dy << el;
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