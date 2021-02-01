#include <bits/stdc++.h>
using namespace std;
int main()
{
  int X, Y, s, T;
  cin >> X >> Y >> s >> T;
  T = T - (X + Y);
  if (T <= s)
    cout << ((T + 1) * (T + 2)) / 2 << endl;
  else
  {
    if (T <= 2 * s)
    {
      int ans = ((s + 1) * (s + 2)) / 2;
      T = T - s;
      cout << ans + ans - (s + 1) - (((s - T) * (s - T + 1)) / 2) << endl;
    }
    else
    {
      cout << (s + 1) * (s + 1) << endl;
    }
  }
}