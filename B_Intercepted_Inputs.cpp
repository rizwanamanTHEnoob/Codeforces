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
        int k;
        cin >> k;
        vector<int> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int target = k - 2;
        int left = 0;
        int right = k - 1;
        int l, r;
        while (left <= right)
        {
            if ((v[left] * v[right]) == target)
            {
                l = v[left], r = v[right];
                break;
            }
            else if ((v[left] * v[right]) < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        cout << l << ' ' << r << el;
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