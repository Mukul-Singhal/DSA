#include <bits/stdc++.h>
using namespace std;
int main()
{
  int test;
  cin >> test;
  while (test--)
  {
    int n, k, d, sum = 0, ans, input;
    cin >> n >> k >> d;
    for (int i = 0; i < n; i++)
    {
      cin >> input;
      sum += input;
    }
    ans = sum / k;
    if (d < ans)
      cout << d << endl;
    else
      cout << ans << endl;
  }
}