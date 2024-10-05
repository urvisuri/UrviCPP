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
    for(j=0;j<c;j++)
    {
      int min=a[0][j];
      int minrow=0;
      for(i=0;i<r;i++)
      {
        if(a[i][j]<min)
        {
          min=a[i][j];
          minrow=i;
        }
      }
      cout<<"the smallest elemt in column "<<j+1<<" is :"<<min<<endl;
      cout<<"the index location for smallest elem. is row ="<<minrow+1<<" column = "<<j+1<<endl;
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