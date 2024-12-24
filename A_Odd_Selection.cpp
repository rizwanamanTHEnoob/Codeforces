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
        int n, x;
        cin >> n >> x;
        int evenCount = 0;
        int oddCount = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }
        if (oddCount == 0)
        {
            cout << "No" << el;
        }
        else
        {
            oddCount--;
            x--;
            while (x > 0)
            {
                if (oddCount >= 2 && x >= 2)
                {
                    oddCount -= 2;
                    x -= 2;
                }
                else if (evenCount > 0)
                {
                    evenCount--;
                    x--;
                }
                else
                    break;
            }
            if (x > 0)
            {
                cout << "No" << el;
            }
            else
            {
                cout << "Yes" << el;
            }
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