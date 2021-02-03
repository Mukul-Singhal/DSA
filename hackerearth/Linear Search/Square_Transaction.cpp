#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  vector<int> arr(t);
  for (auto &it : arr)
  {
    cin >> it;
  }
  for (int i = 1; i < t; i++)
  {
    arr[i] = arr[i] + arr[i - 1];
  }
  int q, d;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    int d;
    cin >> d;
    for (int i = 0; i < t; i++)
    {
      if (d < arr[0])
      {
        cout << -1 << endl;
        break;
      }
      if (d > arr[arr.size() - 1])
      {
        cout << arr.size() - 1 << endl;
        break;
      }
      if (arr[i] - d >= 0)
      {
        cout << i + 1 << endl;
        break;
      }
    }
  }
}
