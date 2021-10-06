// Resource :
//https://programs.programmingoneonone.com/2021/02/hackerrank-conditional-statements-in-c-solution.html
//https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/forum

//=================================================================================//

#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
  int in; //storage space in memory named in for taking user input
  //An array of strings created to form a relationship between numbers and number in  words
  string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  cin >> in; //reading user input & storing it under varible named in

  // If 1 <= n <= 9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
  // If n > 9, print Greater than 9.

  if (in > 9)
  {
    cout << num[0];
  }

  else
  {
    cout << num[in];
  }

  return 0;
}

//=================================================================================//

// #include <bits/stdc++.h>
// using namespace std;

// // Driver Code
// int main()
// {
//   // storage space for user-input n, read the input int that variable n
//   int n;    //stroage space for integer named n
//   cin >> n; //reading user input

//   // string array for converting mathemetical Numbers To words
//   string numberToWords[] = {
//       "one",
//       "two",
//       "three",
//       "four",
//       "five",
//       "six",
//       "seven",
//       "eight",
//       "nine"
//   };

//   // If 1 <= n <= 9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).

// // we have to separate the conditions of the conditional statemetns we, cannot do it like this seprate diffrent conditions using logical operators
//   // if(1 <= n <= 9) {
//     // ---------------------WRONG CONDITION SEGMENTATION ERROR THESE ARE 2 SEPRATE CODITIONS SEPRATE THEM USING LOGICAL operators IF U WANT TO CHECK FOR MULTIPLE CONDITIONS---------------------------------------------------------------------------
//   // }

//   if (n <= 9)
//   {
//     cout << numberToWords[n - 1];
//   }
//   else
//   {
//     // If n > 9, print Greater than 9.
//     cout << "Greater than 9";
//   }

//   return 0;
// } // Main Ends
