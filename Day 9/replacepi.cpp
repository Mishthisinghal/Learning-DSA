#include<bits/stdc++.h>
using namespace std;

void replacepi(string s){
     if(s.length()==0){
         return;
     }

     else{
         if(s[0]=='p' && s[1]=='i'){
             cout<<3.14;
             replacepi(s.substr(2));
         }else{
             cout<<s[0];
             replacepi(s.substr(1));
         }
     }
}
int main(){
    string str;
    cout<<"Enter a string:"<<endl;
    cin>>str;
    replacepi(str);
    return 0;
}