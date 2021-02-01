#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &s, int temp)
{
  if (s.size() == 0)
  {
    s.push(temp);
    return;
  }
  int local = s.top();
  s.pop();
  insert(s, temp);
  s.push(local);
}

void reverseStack(stack<int> &s)
{
  if (s.size() == 1)
    return;
  int temp = s.top();
  s.pop();
  reverseStack(s);
  insert(s, temp);
  return;
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
  reverseStack(s);
  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
}