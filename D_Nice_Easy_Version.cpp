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
        if (n <= 6)
        {
            cout << 6 << el;
        }
        else if (n <= 9)
        {
            cout << 9 << el;
        }
        else if (n <= 66)
        {
            cout << 66 << el;
        }
        else if (n <= 69)
        {
            cout << 69 << el;
        }
        else if (n <= 96)
        {
            cout << 96 << el;
        }
        else
        {
            cout << 99 << el;
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