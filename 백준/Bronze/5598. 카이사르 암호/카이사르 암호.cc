#include <iostream>
using namespace std;

int main(){
   string str;
   cin>>str;

   for(int i=0; i<str.length(); i++){
    if(str[i] <'D') str[i] += 23;
    else str[i] -= 3; 
    cout<<str[i];
   }
    
    
}