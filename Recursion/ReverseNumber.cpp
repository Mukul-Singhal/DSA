#include <bits/stdc++.h>
using namespace std;
int sum = 0;
int reverseNumber(int n)
{
  if (n != 0)
  {
    sum = sum * 10 + n % 10;
    reverseNumber(n / 10);
  }
  else
  {
    return sum;
  }
  return sum;
}

int main()
{
  int n;
  cin >> n;
  cout << reverseNumber(n);
}