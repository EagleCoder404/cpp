#include <iostream>
using namespace std;

int main()
{
  string sentence = "Joe was a good person, and Joe like the way roses smelled,Joe was Joe";
  int i,j=0,len=sentence.length();
  do
  {
     i = sentence.find("Joe",j);
     j=i+1;
     cout<<i<<endl;
  } while (i<=len);
  
  return 0;
}