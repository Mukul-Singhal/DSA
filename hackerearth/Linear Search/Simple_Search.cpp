#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  cin >> n;
  vector<long long int> arr(n);
  for (auto &it : arr)
  {
    cin >> it;
  }
  long long int k;
  cin >> k;
  for (int i = 0; i < arr.size(); i++)
  {
    if (k == arr[i])
    {
      cout << i << endl;
      break;
    }
  }
}