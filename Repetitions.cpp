#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   int len=1,x=1;
   for(int i=0;i<s.size();i++){
       if(s[i]==s[i+1]){
           len++;
       }else len=1;
       if(len>x)x=len;
   }
   cout<<x;
}
