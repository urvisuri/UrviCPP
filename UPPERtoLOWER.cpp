#include<iostream>
 using namespace std;
 class array
 {
  public:
  int i;
  string s;
  void lower()
  {
    cout<<"enter string you want to convert: ";
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
      if(s[i]>='A'&&s[i]<='Z')
        s[i]=s[i]+32;    
    }
    cout<<"result :"<<s<<endl;
  }
 };
 int main()
 {
  array a;
  a.lower();
  return 0;
 }
 