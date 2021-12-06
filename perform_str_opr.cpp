#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    string fName;
    string lName;
    cout<<"enter first name ";
    cin>>fName;
    cout<<"enter second name ";
    cin>>lName;

     string fullName = fName + " " + lName; 
     cout<<"after concatenation : "<<fullName<<endl;
      
     transform(fullName.begin(), fullName.end(), fullName.begin(), ::toupper); 
     cout<<"after converting to upperCase : " << fullName << endl; 

     transform(fullName.begin(), fullName.end(), fullName.begin(), ::tolower); 
     cout<<"after converting to lowerCase : " << fullName << endl;

    cout << "total length " << fullName.size()<<endl;
    
    fullName.erase(remove(fullName.begin(), fullName.end(), ' '), fullName.end());
    cout <<"after white space removal : " << fullName<<endl;
     
     return 0; 
}