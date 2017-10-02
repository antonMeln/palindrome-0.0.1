#include <iostream>

using namespace std;

int main()
  {
    int k,i;
    string str;
    cin>>str;
    for (i=0;i<(str.length()/2);i++)
        {
          if (str[i]==str[(str.length()/2)-i - 1])
              k=k+1;
        }


        if (k==str.length()/2)
         cout<<1;
    else
          cout<<0;


return 0;
  }
