#include<iostream>
 using namespace std;
 class password
 {
  public:
  int i,j,k,l;
  int count=0;
  char array[6];
  
  void getdata()
  {
    cout<<"enter element: ";
    {
      for(i=0;i<6;i++)
      {
        cin>>array[i];
      }
    }
  }
  void pass()
  {
    for(i=0;i<6;i++)
    {
      for(j=0;j<6;j++)
      {
        for(k=0;k<6;k++)
        {
          for(l=0;l<6;l++)
          {
            if(array[i]==array[j]||array[i]==array[k]||array[i]==array[l]||array[j]==array[k]||array[j]==array[l]||array[k]==array[l])
            {
              continue;
            }
            cout<<array[i]<<array[j]<<array[k]<<array[l]<<endl;
            count++;
          }
        }
      }
    }
    cout<<"total: "<<count;
  }
 };
 int main()
 {
  password p;
  p.getdata();
  p.pass();
 }