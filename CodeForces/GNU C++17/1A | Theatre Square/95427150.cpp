#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 /*string ok;
 cout<<"Do you like cricket?(Write Yes or No)\n";
 cin>>ok;
  if(ok=="Yes"){
 cout<<"That's great\n";
}
 else if(ok=="yes"){
  cout<<"Learn to type!!!\n";
 }
 else if(ok=="no"){
  cout<<"Learn to type!!!\n";
 }
 else {
  cout<<"Why are you in India\n";
 }*/
 /*int a=5,c;
 cout<<"Enter c= ";
 cin>>c;
 a=a+2+c;
 cout<<a<<endl;*/
 /*double X;
 cout<<"Enter a number w.r.t 50\n";
 cin>>X;
 if(X>=50){
  cout<<"You are passed";
 }else{
  cout<<"You failed";
 }*/
 /*int watermelon;
 cin>>watermelon;
 if(watermelon%2==1){
  cout<<"YES\n";
 }
 else{
  cout<<"NO\n";
 }*/
 long long n,m,a;
 cin>>n>>m>>a;
 long long X=ceil((double)n/a);
 long long Y=ceil((double)m/a);
 long long Ans=X*Y;
 cout<<Ans<<endl;
 return 0;
}