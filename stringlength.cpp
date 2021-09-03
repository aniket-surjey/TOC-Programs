#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;
    while(s[count])
    {
        count++;
    }
    cout<<"Length of String is "<<count<<endl;
    return 0;
}

// Input - stringlength
// Output - Length of String is 12
