#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, sum = 0, count = 4, ans;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
      if (count == 1)
      {
        if (s[i] == '0')
          ans = 97 + sum;
        else
        {
          ans = 97 + sum + 1;
        }

        cout << (char)ans;
        count = 4;
      }
      if (s[i] == '1')
      {
        sum += pow(2, count - 1);
        count--;
      }
      if (s[i] == '0')
      {
        count--;
      }
    }
    cout << endl;
  }
}