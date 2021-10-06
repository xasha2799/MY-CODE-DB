// Resource: https://www.geeksforgeeks.org/precision-of-floating-point-numbers-in-c-floor-ceil-trunc-round-and-setprecision/

#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
  // ToDo
  // creating storage space for user input i.e. variables of specific dt
  int a;
  long long b;
  char c;
  double d, e;

  // taking user input / reading user input using cin
  cin >> a >> b >> c >> d >> e;
  // printing user output with corresponding precision values
  cout << a << "\n"
       << b << "\n"
       << c << "\n";
  // cout when used with setprecision() function prints out that no. of digits and if used with fixed precision then precision only applies to the digits after the decimal point
  cout << fixed << setprecision(3) << d << "\n";
  cout << fixed << setprecision(9) << e << "\n";

  return 0;
} // Main Ends
