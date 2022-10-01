#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
   
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll min = *min_element(arr, arr + n);
        ll max_e = *max_element(arr, arr + n);
        if (min <= 0 && max_e <= 0)
        {
            cout << max_e * max_e << " ";
        }
        else if (min <= 0 && max_e > 0)
        {
            cout << min * max_e << " ";
        }
        else
        {
            cout << min * min << " ";
        }
        cout << max(min * min, max_e * max_e) << "\n";
    }
    return 0;
}
