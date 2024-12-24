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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool isFound = false;
        for (int i = 0; i < n; i++)
        {
            int left = i;
            int right = left + 2;
            while (right < n)
            {
                if (arr[left] == arr[right])
                {
                    isFound = true;
                    break;
                }
                right++;
            }
            if (isFound)
            {
                break;
            }
        }
        if (isFound)
        {
            cout << "YES" << el;
        }
        else
        {
            cout << "NO" << el;
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