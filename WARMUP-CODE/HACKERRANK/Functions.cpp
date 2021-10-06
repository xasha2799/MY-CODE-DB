// Resource : gfg video c++ stl track 1 -- Big Solution
// https://www.hackerrank.com/challenges/c-tutorial-functions/forum -- elegant solution

#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
  //storage space for inputs in the memory i.e. variables
  int a, b, c, d;

  // reading inputs into the variables as input is seprated by spaces so chaining insertions to read the inputs
  cin >> a >> b >> c >> d;

  // comparing each variable with other once and return the greater number simply
  // for exmaple: a compared to b return greater compare that to c return greater compare that to d return greater that's it simple elegant sol using ternary operators

  // Note:
  // Ternary operators always return a single result always so, to print either save the result to a variable or place cout<< statements outside the ternary operators like here we did

  cout << ((a > b ? a : b) > (c > d ? c : d) ? (a > b ? a : b) : (c > d ? c : d));

  cout << endl;
  return 0;
} // Main Ends

//=================================================================================//

// #include <bits/stdc++.h>
// using namespace std;

// // Driver Code
// int main()
// {

//   //storage space for inputs in the memory i.e. variables
//   int a, b, c, d;

//   // reading inputs into the variables as input is seprated by spaces so chaining insertions to read the inputs
//   cin >> a >> b >> c >> d;
//   // conditional statements: checking a compared to all then b then c if none of them then d is the greater of all

//   if (a > b && a > c && a > d)
//   {
//     cout << a;
//   }
//   else if (b > c && b > d && b > a)
//   {
//     cout << b;
//   }
//   else if (c > d && c > b && c > a)
//   {
//     cout << c;
//   }
//   else
//   {
//     cout << d;
//   }

//   cout << endl;
//   return 0;
// } // Main Ends
