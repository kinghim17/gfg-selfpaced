#include <bits/stdc++.h>
using namespace std;
void min(vector<int>&v){
 int min=*min_element(v.begin(),v.end());
 cout<<min<<endl;
}
void max(vector<int>&v){
 int max=*max_element(v.begin(),v.end());
 cout<<max<<endl;
}
void sum(vector<int>&v){
 int sum=accumulate(v.begin(),v.end(),0);
 cout<<sum<<endl;
}
void count(vector<int>&v){
 int ct=count(v.begin(),v.end(),2);
 cout<<ct<<endl;
 int dt=count(v.begin()+1,v.end(),1);
 cout<<dt<<endl;//edit it you can apply it to
any thing
}
void reverse(vector<int>&v){
 reverse(v.begin(),v.end());
 for(auto val:v){
 cout<<val;
 }
 cout<<endl;
}
void find(vector<int>&v){
 auto it=find(v.begin(),v.end(),2);
 if(it!=v.end()){
 cout<<"found";
 }
 else{
 cout<<"not found";
 }

 }


int main() {
int a,b,c,d,e,f,m,n;
cin>>n;
vector<int>v;
int temp;
for(int i=0;i<n;i++){
 cin>>temp;
 v.push_back(temp);
}
min(v);
max(v);
sum(v);
count(v);
reverse(v);
find(v);
return 0;
}