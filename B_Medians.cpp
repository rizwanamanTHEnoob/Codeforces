#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if ((n / 2) + 1 != k)
        {
            cout << -1 << el;
        }
        else if (n == 1 && k == 1)
        {
            cout << 1 << el;
            cout << 1 << el;
        }
        else
        {
            if (isPrime(n))
            {
                cout << n << el;
                for (int i = 1; i <= n; i++)
                {
                    cout << i << ' ';
                }
                cout << el;
            }
            else
            {
                cout << 3 << el;
                for (int i = 1; i <= n; i++)
                {
                    cout << i << ' ';
                    if (i % 3 == 0)
                        cout << el;
                }
                cout << el;
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