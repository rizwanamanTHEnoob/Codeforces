#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int have = 0;
    int note50 = 0;
    int note25 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 25)
        {
            note25++;
        }
        else if (a[i] == 50)
        {
            note50++;
        }
        have += a[i];
        int diff = a[i] - 25;
        if (have - diff < 0)
        {
            cout << "NO" << el;
            return;
        }
        if (diff == 25)
        {
            if (note25 > 0)
            {
                note25--;
            }
            else
            {
                cout << "NO" << el;
                return;
            }
        }
        else if (diff == 75)
        {
            if (note50 > 0 && note25 > 0)
            {
                note50--;
                note25--;
            }
            else if (note25 >= 3)
            {
                note25 -= 3;
            }
            else
            {
                cout << "NO" << el;
                return;
            }
        }
        have -= diff;
    }
    cout << "YES" << el;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}