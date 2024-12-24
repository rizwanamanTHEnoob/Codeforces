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
        int n;
        cin >> n;
        if (n <= 4)
        {
            cout << -1 << el;
        }
        else
        {
            for (int i = 1; i <= n; i += 2)
            {
                cout << i << ' ';
            }
            int last = n % 2 == 0 ? n - 1 : n;
            int firstAdd = -1;
            for (int i = 2; i <= n; i += 2)
            {
                if (!isPrime(last + i))
                {
                    firstAdd = i;
                    break;
                }
            }
            cout << firstAdd << ' ';
            for (int i = 2; i <= n; i += 2)
            {
                if (i != firstAdd)
                {
                    cout << i << ' ';
                }
            }
            cout << el;
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