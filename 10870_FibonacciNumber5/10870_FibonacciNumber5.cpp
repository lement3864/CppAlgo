// - 백준 10870 : 피보나치 수 5

#include <iostream>

using namespace std;

int n;

int fibo(int n)
{
  if (n == 0)
  {
    return 0;
  }
  else if (n == 1)
  {
    return 1;
  }
  else
  {
    return fibo(n - 1) + fibo(n - 2);
  }
}

int main ()
{
  cin >> n;

  cout << fibo(n) << '\n';
}