#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[200];
    int len=0, i=0;
    cout<<"enter a string : ";
    gets(str);
    while(str[i])
    {
        len++;
        i++;
    }
    cout<<"final length of given string = "<<len<<endl;
    return 0;
}