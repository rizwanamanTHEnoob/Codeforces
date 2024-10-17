#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
void solve()
{
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        string s="xaeiou";
        int size=s.length();
        int div=n/5;
        int rem=n%5;
        for(int i=1;i<=n;i++){
            while(div--){
                cout<<s[i];
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