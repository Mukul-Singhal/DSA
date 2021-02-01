// memoize version of Knapsack

#include <bits/stdc++.h>
using namespace std;

int t[4][5];

int knapsack(vector<int> wt, vector<int> val, int W, int n)
{
  if (n == 0 || W == 0)
  {
    return 0;
  }
  if (t[n][W] != -1)
  {
    return t[n][W];
  }
  if (wt[n - 1] <= W)
    return t[n][W] = max(val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1), knapsack(wt, val, W, n - 1));
  else
  {
    return t[n][W] = knapsack(wt, val, W, n - 1);
  }
}

int main()
{
  vector<int> wt, val;
  int W, n = 3, temp;
  cin >> W;
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    wt.push_back(temp);
  }
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    val.push_back(temp);
  }
  memset(t, -1, sizeof(t));
  cout << knapsack(wt, val, W, n);
}