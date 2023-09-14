#include<iostream>
using namespace std;
 int main()
 {
  while(true)
{
    int randnum=1+(rand() %10);
  cout<<"Can you guess the number from 1 to 10:\n"<<"\t\t\tEnter Your number:";
  int usernum;
  cin>>usernum;
  if(usernum==randnum)
  {
    cout<<"Wow ! Your guessed it correctly:";
    break;
  }
  else
  {
    cout<<"Nah! wrong guess, try again:"<<endl;
  }
}


  return 0;	
 }