#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long bin1, bin2=1;
	int a=0, b=0;
	int total[20];
	cout << " enter binary number : ";
	cin >> bin1;
	
  while (bin1 != 0 || bin2 != 0) 
  {
   total[a++] = (int)((bin1 % 10 + bin2 % 10 + b) % 2);

   b = (int)((bin1 % 10 + bin2 % 10 + b) / 2);
   bin1 = bin1 / 10;
   bin2 = bin2 / 10;
  }

  if (b != 0) 
  {
   total[a++] = b;
  }
  --a;

  cout<<"given binary number after increment = " ;
  
  while (a >= 0) 
  {
   cout<<(total[a--]);
  }
 
return 0;
}