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
  void smallest()
  {
    for(i=0;i<r;i++)
    {
      int min=a[i][0];
      int mincol=0;
      for(j=0;j<c;j++)
      {
        if(a[i][j]<min)
        {
          min=a[i][j];
          mincol=j;
        }
      }
      cout<<"the smallest elemt in row "<<i+1<<" is :"<<min<<endl;
      cout<<"the index location for smallest elem. is row ="<<i+1<<" column = "<<mincol+1<<endl;
    }
  }
 };
 int main()
 {
  ds s;
  s.input();
  s.display();
  s.smallest();
  return 0;
 }




 