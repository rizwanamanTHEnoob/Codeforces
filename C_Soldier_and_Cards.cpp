#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
int fact(int n)
{
    int mul = 1;
    for (int i = 1; i <= n; i++)
    {
        mul *= i;
    }
    return mul;
}
void solve()
{
    int n;
    cin >> n;
    int k1;
    cin >> k1;
    queue<int> q1;
    for (int i = 0; i < k1; i++)
    {
        int x;
        cin >> x;
        q1.push(x);
    }
    int k2;
    cin >> k2;
    queue<int> q2;
    for (int i = 0; i < k2; i++)
    {
        int x;
        cin >> x;
        q2.push(x);
    }
    int cnt = 0;
    bool notPossible = false;
    while (!q1.empty() && !q2.empty())
    {
        int x = q1.front();
        int y = q2.front();
        q1.pop();
        q2.pop();
        if (x > y)
        {
            q1.push(y);
            q1.push(x);
        }
        else
        {
            q2.push(x);
            q2.push(y);
        }
        cnt++;
        if (cnt > (fact(n)))
        {
            notPossible = true;
            break;
        }
    }
    if (notPossible)
    {
        cout << -1 << el;
    }
    else
    {
        if (q1.empty())
        {
            cout << cnt << " " << 2 << el;
        }
        else
        {
            cout << cnt << " " << 1 << el;
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