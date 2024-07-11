#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
bool isPrime(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    int upperBound = n * 10;
    int lowerBound = upperBound - n;
    if (!isPrime(upperBound) and !isPrime(lowerBound))
    {
        cout << upperBound << ' ' << lowerBound << endl;
    }
    else
    {
        while (!isPrime(upperBound) and !isPrime(lowerBound))
        {
            upperBound--;
            lowerBound--;
        }
        cout << upperBound << ' ' << lowerBound << endl;
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