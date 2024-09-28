#include<iostream>
using namespace std;
 class pattern
 {
  public:
  int k,l,m,n,i;
  void generation()
  {
    cout<<"enter number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
      for(k=i;k<=n;k++)        
      {
        cout<<" ";
      }
      for(l=1;l<=2*i-1;l++)
      cout<<"*";
      cout<<endl;
    }
  }
 };
 int main()
 {
  pattern g;
  g.generation();
 }