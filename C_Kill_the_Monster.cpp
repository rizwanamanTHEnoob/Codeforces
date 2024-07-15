#include <bits/stdc++.h>
#include <cmath> // Include cmath for the ceil function
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
        ll hC, dC, hM, dM;
        cin >> hC >> dC >> hM >> dM;
        ll k, w, a;
        cin >> k >> w >> a;
        bool charWin = false;
        ll charNeed = ceil(1.0 * hM / dC);
        ll monNeed = ceil(1.0 * hC / dM);
        if (charNeed <= monNeed)
        {
            charWin = true;
        }
        else
        {
            for (ll i = 0; i <= k; ++i)
            {
                ll newHC = hC + i * a;
                ll newDC = dC + (k - i) * w;
                ll newCharNeed = ceil(1.0 * hM / newDC);
                ll newMonNeed = ceil(1.0 * newHC / dM);
                if (newCharNeed <= newMonNeed)
                {
                    charWin = true;
                    break;
                }
            }
        }
        if (charWin)
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
