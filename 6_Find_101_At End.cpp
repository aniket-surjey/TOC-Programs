

#include <iostream>

using namespace std;
bool has101(string s){
    int len = s.length();
    string temp = "";
    temp += s[len-1];
    temp += s[len-2];
    temp += s[len-3];
    if(temp == "101"){
        return true;
    }else{
        return false;
    }
}
int main()
{
    cout<<"Design a Program for creating a machine that accepts the string always ending with 101";
    string s;
    cout<<"*******************************************************************************"<<endl;
    cout<<"Enter The String You Want To Check :";
    cin>>s;
    bool isTrue = has101(s);
    if(isTrue){
        cout<<"*******************************************************************************"<<endl;
        cout<<"Your String Is Accepted By Machine : "<<s<<endl;
        cout<<"***ThankYou For Using***"<<endl;
        cout<<"*******************************************************************************"<<endl;
    }else{
        cout<<"*******************************************************************************"<<endl;
        cout<<"Your String Is \"Not Accepted\" By Machine : "<<s<<endl;
        cout<<"***ThankYou For Not :) Using***"<<endl;
        cout<<"*******************************************************************************"<<endl;
    }
    return 0;
}


















































