/*Write a program that takes as input your gross salary and your total saving and uses another function named taxCalculator()
 to calculate your tax. The taxCalculator() function takes as parameters the gross salary as well as the total savings amount.
  The tax is calculated as follows:


(a) The savings is deducted from the gross income to calculate the taxable income.
 Maximum deduction of savings can be Rs. 100,000, even though the amount can be more than this.


(b) For up to 100,000 as taxable income the tax is 0 (Slab 0);
 beyond 100,000 to 200,000 tax is 10% of the difference above 100,000 (Slab 1);
  beyond 200,000 up to 500,000 the net tax is the tax calculated from Slab 0 and Slab 1 and then 20% of the taxable income exceeding 200,000 (Slab 2);
  
   if its more than 500,000, then the tax is tax from Slab 0, Slab 1, Slab 2 and 30% of the amount exceeding 500,000.*/






#include<iostream>
using namespace std;

int taxCaluculator()
{
  int grosssalary,  totalsaving;
  cout<<"grosssalary:"; cin>>grosssalary;
  cout<<"totalsaving:"; cin>>totalsaving; //saving shouldn't be more than 1,00,
  int taxableincome=grosssalary-totalsaving;
  if(taxableincome<=100000)
  {
    cout<<"You have no taxes to pay, chill you poor:\n";
  }
  else if(taxableincome>100000 && taxableincome<=200000)
  {
    cout<<"your tax amount is:"<<taxableincome*0.1;
  }
  else if(taxableincome>200000 && taxableincome<=500000)
  {
    cout<<"Your tax amount is:"<<10000+((taxableincome-200000)*.2);
  }
  else if(taxableincome>500000)
  {
    cout<<"Your tax amount is:"<<10000+60000+((taxableincome-500000)*.3) ;
  }
    
}

int main()
{
  taxCaluculator();
  return 0;
}
