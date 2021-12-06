#include <bits/stdc++.h>
using namespace std;
int main ()
{
  string bin;
  int ones = 0, zeros = 0;
  cin >> bin;
  int size = bin.size ();
  for (int i = 0; i < size; i++)
    {
      if (bin[i] == '1')
	{
	  ones++;
	}
      else if (bin[i] == '0')
	{
	  zeros++;
	}
      else
	{
	  cout << "Invalid, You've Entered Wrong Binary Number\n";
	  ones = -1;
	  break;
	}
    }
  if (ones != -1)
    {
      cout << "While Machine Is Checking Your Binary Number...\n";
    }
  if (ones != -1)
    {
      cout << "Ones In Given Binary Number Is : "<<ones<<endl;
      cout << "Zeros In Given Binary Number Is : "<<zeros<<endl;
    }
  else
    {
      cout << "\nbad, Please Enter A Valid Binary Number.\n";
    }
  return 0;
}
