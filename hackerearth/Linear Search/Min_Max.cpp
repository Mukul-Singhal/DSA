#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, sum = 0;
  cin >> n;
  vector<int> num(n);
  for (auto &it : num)
  {
    cin >> it;
  }
  sort(num.begin(), num.end());
  for (int i = 0; i < num.size(); i++)
  {
    sum += num[i];
  }
  cout << sum - num[n - 1] << " " << sum - num[0] << endl;
}