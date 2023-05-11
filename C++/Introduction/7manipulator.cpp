/*manipulator are operators that used to format the data dispaly. Following are the 
most commonly used manipulator-
  1. setw(n)- sets coloumn width for insertion.
  2. setfill(ch)- sets filling characters to fill blanks from the fixed width.
  3. setprecision(n)- sets decimal places from the fixed width.
  4. endl- inserts newline character.*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  cout<<setw(4)<<12<<" "<<setw(15)
  <<setiosflags(ios::left)<<" "<<"Ganesh"
  <<resetiosflags(ios::left)<<" "
  <<setw(6)<<setprecision(2)<< setfill('*')<<9.83
  <<setfill(' ')<<endl;
  cout<<setw(4)<<123<<" "<<setw(15)<< setiosflags(ios::left)
  <<"Virendrakumar"<<resetiosflags(ios::left)<<" "
  <<setw(6)<<setprecision(2)<<setfill('*')<<8.92<<setfill(' ')
  <<endl;
  return 0;
}