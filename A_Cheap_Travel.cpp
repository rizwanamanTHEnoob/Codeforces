#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int oneTicketPrice = n * a;
    int rideTicketPrice = (n / m) * b;
    if (n % m == 0)
    {
        cout << min(oneTicketPrice, rideTicketPrice);
    }
    else
    {
        if (m < n)
        {
            int bothTicket;
            int x = n / m;
            int y = x * b;
            int z = (n % m) * a;
            bothTicket = min(oneTicketPrice, rideTicketPrice) + min(y, z);

            cout << bothTicket;
        }
        else
        {
            cout << min(oneTicketPrice, b);
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