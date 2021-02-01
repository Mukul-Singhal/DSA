#include <bits/stdc++.h>
using namespace std;

void deleteMiddle(stack<int> &s, int size)
{
  if (s.size() == (size / 2) + 1)
  {
    s.pop();
    return;
  }

  int local = s.top();
  s.pop();
  deleteMiddle(s, size);
  s.push(local);
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

  deleteMiddle(s, s.size());

  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
}