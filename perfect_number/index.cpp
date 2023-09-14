#include<iostream>
using namespace std;


int perfectnumber()
{
  int a;
  int sum=0;
  cin>>a;
  for(int i=1; i<a;i++)
  {
    if(a%i==0)
    {
      sum+=i;
    }
  }
  if(sum==a)
  {
    
  cout<<"its a perfect number";
  }
  else{
  cout<<"it's not a perfect number";
  }
    

}

int main()
{
    perfectnumber();
    return 0;
}	