#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> t1;
vector<int> t2;
int main()
{
    long long n,x,s1=0,s2=0;
    cin>>n;
for(int i=0;i<n;i++){
    cin>>x;
    if(x>0){t1.push_back(x);s1+=x;}
    else{t2.push_back(-x);s2-=x;}
}
if(s1>s2){cout<<"first";return 0;}else if(s2>s1){cout<<"second";return 0;}
for(int i=0;i<min(t1.size(),t2.size());i++){
        if(t1[i]>t2[i]){cout<<"first";return 0;}else if(t1[i]<t2[i]){cout<<"second";return 0;}}
if(t1.size()>t2.size()){cout<<"first";return 0;}else if(t1.size()<t2.size()){cout<<"second";return 0;}
if(x>0){cout<<"first";}else{cout<<"second";}
 
 
}
 
