#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, temp;
  map<int, int> m;
  map<int, int>::iterator itr;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    itr = m.find(temp);
    if (itr != m.end())
    {
      m[temp] += 1;
    }
    else
    {
      m[temp] = 1;
    }
  }
  int k;
  cin >> k;
  for (itr = m.begin(); itr != m.end(); ++itr)
  {
    if ((*itr).second == k)
    {
      cout << (*itr).first << endl;
      break;
    }
  }
}