#include<iostream>
 using namespace std;
 class strinop
 {
  public:
  char t;
  int i,count=0;
  string s;
  void frequency()
  {
    cout<<"enter your string:";
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
      count++;
      else
      continue;
    }
    cout<<"frequency of vowel "<<"is:"<<count<<endl;
  }
 };
 int main()
 {
  strinop a;
  a.frequency();
  return 0;
 }