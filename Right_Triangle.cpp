#include <iostream>
#include<string.h>
using namespace std;
int main()
 {
   int i, j, k,rows;

   cout<<"Enter the number of rows: ";
   cin>>rows;
   for (i=1;i<=rows;i++)
    {
      for (j=i;j<rows;j++)
       {
         cout<<"";
      }
      for(k=1;k<=i;k++)
      {
        cout<<"*";
      }
      cout<<"\n";
   }
   return 0;
}