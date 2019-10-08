#include <iostream>
using namespace std;
int main()
{
   int n1, k = 0;
   cout<<"Enter number of rows: ";
   cin>> n1;
   cout<<"\n";
   for (int i = 1; i <= n1; ++i)
   {
      for (int j = 1; j <= n1 - i; ++j)
      	cout<<"  ";
      k=0;
      while (k != 2 * i - 1)
      {
			cout<<"* ";
			++k;
      }
      cout<<"\n";
   }
   return 0;
}
