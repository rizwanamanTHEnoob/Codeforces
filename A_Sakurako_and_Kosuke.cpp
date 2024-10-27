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
        int cordinate = 0;
        string name = "Sakurako";
        int i = 1;
        while (abs(cordinate) <= n)
        {
            if (i % 2 == 1)
            {
                cordinate -= (2 * i - 1);
                name = "Sakurako";
            }
            else
            {
                cordinate += (2 * i - 1);
                name = "Kosuke";
            }
            i++;
        }
        cout << name << endl;
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