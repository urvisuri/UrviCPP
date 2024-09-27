#include<iostream>
using namespace std;
class pascal
{
  public:
  int n,i,s,j;
  void getdata()
  {
    cout<<"enter rows :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
      int co=1;
      for(s=n-i;s>0;s--)
      {
        cout<<" ";
      }
      for(j=1;j<=i;j++)
      {
        cout<<co<<" ";
        co=co*(i-j)/j;
      }
      cout<<endl;
    }
  }
};
int main()
{
  pascal p;
  p.getdata();
}