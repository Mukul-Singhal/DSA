#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n, k, x, y;
    cin >> n >> k >> x >> y;
    long long x1 = x, y1 = y;
    k = k % 4 + (k % 4 == 0 ? 4 : 0);
    if (x == y)
      cout << n << " " << n << endl;
    else
    {
      for (int i = 1; i <= k; i++)
      {
        if (x1 > y1)
        {
          if (i == 1)
          {
            y = y + n - x;
            x = n;
          }
          else
          {
            if (x == n)
            {
              x = x - (n - y);
              y = n;
            }
            else if (y == n)
            {
              y = y - x;
              x = 0;
            }
            else if (x == 0)
            {
              x = x + y;
              y = 0;
            }
            else if (y == 0)
            {
              y = y + x;
              x = 0;
            }
          }
        }
        else
        {
          if (i == 1)
          {
            x = x + n - y;
            y = n;
          }
          else
          {
            if (x == n)
            {
              x = x - y;
              y = 0;
            }
            else if (y == n)
            {
              y = y - (n - x);
              x = n;
            }
            else if (y == 0)
            {
              y = x + y;
              x = 0;
            }
            else if (x == 0)
            {
              x = x + n - y;
              y = n;
            }
          }
        }
        // cout << x << " " << y << endl;
      }
      cout << x << " " << y << endl;
    }
  }
}
