#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int num, prev = 0, k, count = 0;
    cin >> num;
    if (num % 21 == 0)
      cout << "The streak is broken!" << endl;
    else
    {
      while (num != 0)
      {
        k = num % 10;
        if (prev == 1)
        {
          if (k == 2)
          {
            cout << "The streak is broken!" << endl;
            count = 1;
            break;
          }
          else
            prev = 0;
        }
        if (k == 1)
        {
          prev = k;
        }
        num = num / 10;
      }
      if (count == 0)
        cout << "The streak lives still in our heart!" << endl;
    }
  }
}