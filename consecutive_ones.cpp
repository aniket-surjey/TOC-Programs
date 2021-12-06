#include <bits/stdc++.h>
using namespace std;

int main ()
{
  string bin;
  cout<<"Enter Any Binary Number : ";
  cin>> bin;
  int size = bin.size ();
  if (bin[size - 1] == '1' && bin[size - 2] == '1' && bin[size - 3] == '1')
    {
      cout<< "Accepted\n";
    }
  else
    {
      cout<< "Failed\n";
    }
  return 0;
}
