#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m, sum = 0, sum1 = 0, num, count = 0;
    cin >> n >> m;
    int arr[n], arr1[m];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      sum += arr[i];
    }
    //cout << "initial sum" << sum;
    for (int i = 0; i < m; i++)
    {
      cin >> arr1[i];
      sum1 += arr1[i];
    }
    if (sum > sum1)
    {
      cout << 0 << endl;
    }
    else
    {
      sort(arr, arr + n);
      sort(arr1, arr1 + m, greater<int>());
      if (n >= m)
        num = m;
      else
        num = n;

      for (int i = 0; i < num; i++)
      {
        //cout << arr[i] << " " << arr1[i];
        if (arr1[i] > arr[i])
        {
          count++;
          //  cout << count << " ";
          sum += arr1[i] - arr[i];
          //cout << sum << " ";
          sum1 -= (arr1[i] - arr[i]);
          //cout << sum1 << " ";
          if (sum > sum1)
          {
            cout << count << endl;
            break;
          }
        }
      }
      if (sum < sum1)
      {
        cout << -1 << endl;
      }
    }
  }
}