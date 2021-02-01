#include <bits/stdc++.h>
using namespace std;

int knapsack(vector<int> wt, vector<int> val, int W, int n)
{
  if (n == 0 || W == 0)
  {
    return 0;
  }
  if (wt[n - 1] <= W)
    return max(val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1), knapsack(wt, val, W, n - 1));
  else
  {
    return knapsack(wt, val, W, n - 1);
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

  cout << knapsack(wt, val, W, n);
}