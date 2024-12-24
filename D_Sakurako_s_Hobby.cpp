#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
const int N = 2e5 + 150;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        int freq[n + 1] = {0};
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        string s;
        cin >> s;
        string ss = "0" + s;
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            int count = 0;
            if (freq[arr[i]] == 0)
            {
                if (ss[i] == '0')
                {
                    count++;
                }
                int current = arr[i];
                int j = arr[i]; // 3
                while (arr[j] != current)
                {
                    if (ss[j] == '0')
                    {
                        count++;
                    }
                    freq[arr[j]] = current;
                    j = arr[j];
                }
                freq[current] = count;
                ans.push_back(count);
            }
            else
            {
                int count = freq[arr[i]];
                count = freq[count];
                ans.push_back(count);
            }
        }
        for (auto x : ans)
        {
            cout << x << ' ';
        }
        cout << el;
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