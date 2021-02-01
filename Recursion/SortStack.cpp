#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &s, int temp)
{
  if (s.size() == 0 || s.top() <= temp)
  {
    s.push(temp);
    return;
  }
  int local = s.top();
  s.pop();
  insert(s, temp);
  s.push(local);
}

void sortStack(stack<int> &s)
{
  if (s.size() == 1)
    return;
  int temp = s.top();
  s.pop();
  sortStack(s);
  insert(s, temp);
}

int main()
{
  int n, temp;
  cin >> n;
  stack<int> s;
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    s.push(temp);
  }
  sortStack(s);
  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
}