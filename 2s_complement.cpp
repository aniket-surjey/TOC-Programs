#include <iostream>

#define dim 4
using namespace std;

int main() {
  char bin[dim + 1], 
  one[dim + 1], 
  second[dim + 1];

  int i, 
  carry = 1, 
  s = 0;
  
  cout << " enter " << dim << " digit binary number : ";
  cin >> bin;

  for (i = 0; i < dim; i++) 
  {
    if (bin[i] == '1') 
    {
      one[i] = '0';
    } 
    else if (bin[i] == '0')
    {
      one[i] = '1';
    } 
    else 
    {
      cout <<endl;
      cout << "enter A Number of " << dim << " bit" << endl;
      cout <<endl;
      s = 1;
      break;
    }
  }

  one[dim] = '\0';

  for (i = dim - 1; i >= 0; i--) 
  {
    if (one[i] == '1' && carry == 1) 
    {
      second[i] = '0';
    } 
    else if (one[i] == '0' && carry == 1) 
    {
      second[i] = '1';
      carry = 0;
    } 
    else 
    {
      second[i] = one[i];
    }
  }
  
  second[dim] = '\0';

  if (s == 0) 
  {
    cout << "Binary Number = " << bin << endl;
    cout << "ones complement Of "<< bin <<" = " << one << endl;
    cout << "twos complement Of "<< bin <<" = " << second << endl;
  }
}