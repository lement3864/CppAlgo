// - 백준 2753 : 윤년

#include <iostream>

using namespace std;

int main ()
{
  int y;
    cin >> y;
    cout << ((y % 4 == 0) ? ((y % 400 == 0) ? 1 : (y % 100 != 0) ? 1 : 0) : 0);
 
    return 0;
}