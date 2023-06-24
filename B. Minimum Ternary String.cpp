#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
 string ch,ch1,ch2;
 int   j;
 cin>>ch;
 int x=0;
  if(ch[0]!=2){
  while(ch[x]!='2' && x!=ch.length())
    {if(ch[x]=='1'){ch1=ch1+'1';}else{ch1='0'+ch1;} x++;}
  }
 
  ch2="";
   for(int i=x;i<ch.length();i++){
    if(ch[i]=='1'){ch1+='1';}
    else{ch2+=ch[i];}
   }
  cout<<ch1+ch2;
  }
 
