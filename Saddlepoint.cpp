#include<iostream>
 using namespace std;
 class ds
 {
  public:
  int i,j,r,c;
  int a[100][100];
  int largest[100];
  int smallest[100]; 
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
    for(i=0;i<r;i++)
    {
      smallest[i]=a[i][0];
      for(j=0;j<c;j++)
      {
        if (a[i][j]<smallest[i])
        {
          smallest[i]=a[i][j];
        }
      }
    }
  }
  void findlarge()
  {
    for(j=0;j<c;j++)
    {
      largest[j]=a[0][j];
      for(i=0;i<r;i++)
      {
        if(a[i][j]>largest[j])
        {
          largest[j]=a[i][j];
        }
      }
    }
  }
  void saddle()
  {
    bool foundsaddle;
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        if(smallest[i]==largest[j])
        {
          cout<<"saddle point is"<<smallest[i]<<" . ";
          foundsaddle=true;
        }
      }
    }
    if(!foundsaddle)
    {
      cout<<"saddle point not found";
    }
  }
 };
 int main()
 {
  ds d;
  d.input();
  d.display();
  d.findsmall();
  d.findlarge();
  d.saddle();
  return 0;
 }