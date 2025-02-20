#include <iostream>
#include <vector>

using namespace std;

int gcd(int n1, int n2)  // calculating gcd using eucledian's formula
{
   if (n2 == 0)
      return n1;
   return gcd(n2, n1 % n2);
}

int lcm(int n1, int n2) {  // caculating lcm using the formula: lcm x gcd = n1 x n2
   int gc, lc;
   gc = gcd(n1, n2);
   lc = n1 * n2 / gc;
   return lc;
}

int main() {
   int x, cd, i, p, r, n;
   int cnt, flag;  // we use this to count the max checks, we can keep it as much as we want
   vector<int> pr, rem;
   cout << "CALCULATOR CINA\n";
   cout << "-------------------------------------------------\n\n";
   cout << "Input Jumlah Input: ";
   cin >> n;  // number of inputs
   for (i = 0; i < n; i++) {
      cout << "Input a (spasi) mod n ke-" << i + 1 << ": ";
      cin >> r >> p;
      pr.push_back(p);
      rem.push_back(r);
   }
   x = rem[0];  // let us say the first number will be the starting and
   cd = pr[0];  // the first remainder will be the common difference like we saw in the example
   for (i = 1; i < n; i++) {
      cnt = 0;
      flag = 0;
      while (cnt < 100000)  // Here we have taken a max value for 10^5 because we are dealing with large numbers
      {
         if (x % pr[i] == rem[i])  // condition for finding the next start value
         {
            flag = 1;
            break;
         }
         x = x + cd;
      }
      if (flag == 0)  // This means that no number until cnt range has matched the condition.
      {
         cout << "No solution.";  // Hence no solution is possible
         return 0;
      }
      cd = lcm(pr[i], cd);  // updating the cd
   }
   cout << "Hasil Output Kalkulator Cine : "  << x << " (mod " << cd << ")";
   return 0;
}