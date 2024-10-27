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
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        int ans = 0;
        int left = 1, right = n;
        while (left < right)
        {
            int ifSwap = 0, notSwap = 0;
            if (n % 2 == 0 && left * 2 == n)
            {
                if (arr[left] == arr[left + 1])
                {
                    notSwap++;
                    ifSwap++;
                    ans += min(ifSwap, notSwap);
                    break;
                }
            }
            if ((arr[left] == arr[left + 1]) && (arr[right] == arr[right - 1]))
            {
                notSwap += 2;
            }
            else if ((arr[left] == arr[left + 1]) || (arr[right] == arr[right - 1]))
            {
                notSwap++;
            }
            swap(arr[left], arr[right]);
            if ((arr[left] == arr[left + 1]) && (arr[right] == arr[right - 1]))
            {
                ifSwap += 2;
            }
            else if ((arr[left] == arr[left + 1]) || (arr[right] == arr[right - 1]))
            {
                ifSwap++;
            }
            ans += min(ifSwap, notSwap);
            left++;
            right--;
        }
        cout << ans << el;
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