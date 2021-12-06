#include<bits/stdc++.h>
using namespace std;
int top;
char s[10];

class Stack
{
    public:
    void push(int x)
    {
        s[top++]=x;
    }
    void pop(int x)
    {
        s[top--]=x;
    }
};
int main()
{
    int i,n;
    char a[10];
    
  cout <<endl;
  cout << " *********************************************************************************************************"<<endl;
  cout << "\tProgram For PDA Which Accepts Strings Of (0^n)(1^n) n>=1. -->\n";
    cout << " *********************************************************************************************************"<<endl;
    cout<<"\tPlease, Enter A String : ";
    cin>>a;
    cout << " *********************************************************************************************************"<<endl;
    n=strlen(a);
    Stack st;
    top=-1;
    for(i=0;i<n;i++) 
    {
        if(a[i]=='0' || a[i]=='1')
        {
            if(a[i]=='0')
            {
                st.push(a[i]);
            }
            else
            {
                st.pop(a[i]);
            }    
        }
        else
        {
            break;    
        }    
    }
    cout << " *********************************************************************************************************"<<endl;
    if(top==-1)
    {
        cout<<"\t\tString Accepted.\n";
    }
    else
    {
        cout<<"\t\tString Rejected.\n";
    }    
    cout << " *********************************************************************************************************"<<endl;
    return 0;
}
