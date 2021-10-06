// Resource : http://computersirkiclass.com/?codesheet=ternary-operator-within-cout-chain-for-selective-printing&tag=cp005-operators#:~:text=Here%20with%20in%20cout%20chain,is%20inside%20the%20cout%20chain.

#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
  // storage sapce for 2 integer inputs a, b
  int a, b;
  // array of strings that is required to convert the mathematical num to word so, an array is constructed for that purpose.
  string numberToWords[10] =
      {"",
       "one",
       "two",
       "three",
       "four",
       "five",
       "six",
       "seven",
       "eight",
       "nine"};

  // reading the inputs in the storage space a, b
  cin >> a >> b;
  // test cases

  // traversing through all numbers that lie between a and b
  for (int n = a; n <= b; ++n)
  {
    // If n <= 9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
    if (n <= 9)
    {
      cout << numberToWords[n] << endl;
      ;
    }
    else
    {
      // Else if n>9 and it is an even number, then print "even".
      // Else if n>9 and it is an odd number, then print "odd".
      string result = (n % 2 == 0) ? "even" : "odd";
      cout << result << endl;
    }
  }

  return 0;
} // Main Ends

//=================================================================================//

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b;
// palced one extra string i.e. empty so that condition reamins n not n-1
//     string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
//     cin>>a>>b;
//     for(int i=a;i<=b;i++)
//         cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl;
// }
