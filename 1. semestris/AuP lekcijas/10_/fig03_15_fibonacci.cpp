/// fig03_15_fibonacci.cpp
/// Papildināts Fig. 3.15 no H.M. Deitel, P.J.Deitel
/// "C++ How to Program. Fourth Edition.2003.
/// Autors: Uldis Straujums
/// Izveidota: 05.11.2021.
#include <iostream>
#include <climits>
using namespace std;

///  Recursive Fibonacci function
unsigned long long fibonacci(long n)
{
	if ( n == 0 || n == 1 )  /// base case
 	    return n;
  else
    return fibonacci(n-1) + fibonacci(n-2);
}
///  Nerekursīva Fibonači funkcija
unsigned long long fibonacci_iter(long n)
{
	unsigned long long f, f1, f2;
	if ( n == 0 || n == 1 )  /// base case
 	    return n;
  else
    f1=1; f2=0;
    for (int i=2;i<=n;i++)
    {
        f=f1+f2;
        f2=f1;
        f1=f;
    }
    return f;
}
int main()
{
      long number;
      unsigned long long result;
      cout << "Lielākais veselais skaitlis šajā datorā: "<< ULLONG_MAX << endl;
      /// parasti 18446744073709551615  20-ciparu skaitlis

      /// obtain integer from user
     cout << "Enter an integer: ";
      cin >> number;

     /// calculate fibonacci value for number input by user
     /// result = fibonacci(number);
         result = fibonacci_iter(number);

     /// display result
     cout << "Fibonacci(" << number << ") = " << result << endl;

      return 0;
}
/********************   Testu plāns  ****************************************************
     n          paredzamais rezultāts
No vietnes http://www.maths.surrey.ac.uk/hosted-sites/R.Knott/Fibonacci/fibtable.html#100
     0                    0
     1                    1
     2                    1
     3                    2
     4                    3
     5                    5
    10                   55
    20                 6765
    30               832040
    40            102334155
    45           1134903170
    50          12586269025  apmēram 2 minūtes rēķina rekursīvi;
                             apmēram 4 sekundes rēķina iteratīvi
    93 12200160415121876738  apmēram 16 sekundes rēķina iteratīvi
    94 vairs nevar aprēķināt, jo 93.Fibonači skaitlis ir lielāks par ULLONG_MAX
***************************************************************************************/
