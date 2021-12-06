

#include <iostream>

using namespace std;
bool isDivisible(int num){
    if(num%2 == 0){
        return true;
    }
    return false;
}
int main()
{
    cout<<"Design a program for accepting decimal number divisible by 2";
    int num;
    cout<<"*******************************************************************************"<<endl;
    cout<<"Enter The Number You Want To Check :";
    cin>>num;
    bool isTrue = isDivisible(num);
    if(isTrue){
        cout<<"*******************************************************************************"<<endl;
        cout<<"Your Number Is \"Divisible\" By 2 : "<<num<<endl;
        cout<<"***ThankYou For Using***"<<endl;
        cout<<"*******************************************************************************"<<endl;
    }else{
        cout<<"*******************************************************************************"<<endl;
        cout<<"Your Number Is \"Not Divisible\" By 2 : "<<num<<endl;
        cout<<"***ThankYou For Not :) Using***"<<endl;
        cout<<"*******************************************************************************"<<endl;
    }
    return 0;
}














































