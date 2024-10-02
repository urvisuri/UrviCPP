#include<iostream>
 using namespace std;
 class array
 {
  public:
  int i,j;
  string str;
  string s1="@";
  string s2=".";
  void validity()
  {
    cout<<"enter eamilid: ";
    cin>>str;
    for(i=0;str[i]!='\0';i++)
    {
      for(j=0;str[j]!='\0';j++)
      {
        if(str[i]==s1[0]&&str[j]==s2[0])
        {
          if(j>i&&str[0]!=s1[0])
            cout<<"email id is valid";
          else
            cout<<"incorrect id";
        }
      }
    }
  }

 };
 int main()
 {
  array a;
  a.validity();
  return 0;
 }
 