#include<iostream>
 using namespace std;
 class ds
 {
  public:
  int i,j,r,c;
  int a[100][100];
  void input()
  {
    cout<<"enter rows:";
    cin>>r;
    cout<<"enter columns:";
    cin>>c;
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        cout<<"enter elements in a row "<<i+1<<" and columns "<<j+1 <<" : ";
        cin>>a[i][j];
      }
    }
  }
  void display()
  {
    cout<<"MATRIX IS: "<<endl;
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        cout<<a[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  void findsmall()
  {
    int smallest=a[0][0];
     for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        if(a[i][j]<smallest)
        {
          smallest=a[i][j];
        }
      }
    }
    cout<<"the smallest element is : "<<smallest ;
  }
 };
 int main()
 {
  ds s;
  s.input();
  s.display();
  s.findsmall();
  return 0;
 }