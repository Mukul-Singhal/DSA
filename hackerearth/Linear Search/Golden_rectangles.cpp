#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  int count = 0;
  double a, b, ans;
  for (int i = 0; i < t; i++)
  {
    cin >> a >> b;
    ans = max(a, b) / min(a, b);
    if (ans >= 1.6 && ans <= 1.7)
    {
      //  cout << ans << endl;

      count++;
    }
  }
  cout << count << endl;
}
