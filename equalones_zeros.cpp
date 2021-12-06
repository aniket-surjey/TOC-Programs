#include <bits/stdc++.h>
using namespace std;

int main ()
{
  string bin;
  int ones = 0, zeros = 0;
  cout << "Binary Number : ";
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
	  cout << "invalid, You've Entered Wrong Binary Number\n";
	  ones = -1;
	  break;
	}
    }
  if (ones != -1)
    {
      cout << "While Machine Is Checking Your Binary Number...\n";
    }

  if (ones == zeros && ones != -1)
    {
      cout << "\nAccepted\n";
    }
  else if (ones == -1)
    {
      cout << "Enter A Valid Binary Number.\n";
    }
  else
    {
      cout << "\nInvalid !!!\n";
    }
  return 0;
}
