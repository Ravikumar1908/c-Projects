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

void taxCaluculator()
{
  // Taking Input
  const double maxsaving = 100000; 
  double grosssalary, totalsaving,taxableincome,tax=0;
  cout<<"Enter your gross salary : "; 
  cin>>grosssalary;
  cout<<"Enter your total savings : "; 
  cin>>totalsaving; 
  
  // Validating the salary and savings are non-negative
  if (grosssalary < 0 || totalsaving < 0 ) {
    cout << "Invalid input! Salary and Savings must be non-negative. ";
  }

  // Calculating Taxable Income and Validating Taxable Income If Savings exceed 100000
  if (totalsaving<=maxsaving){
   taxableincome=grosssalary-totalsaving;
   }  
  else if (totalsaving>maxsaving){
   taxableincome=grosssalary-maxsaving; // Since Maximum deduction of savings can be Rs. 100000
   }  
  
   if(taxableincome>500000)
  {
    taxableincome = (taxableincome-500000)*0.3;
    tax += taxableincome;
    taxableincome=500000;
  }
   else if(taxableincome>200000 && taxableincome<=500000)
  {
    taxableincome = (taxableincome-200000)*0.2;
      tax += taxableincome;
    taxableincome=200000;
  }
  else if(taxableincome>100000 && taxableincome<=200000)
  {
    taxableincome = (taxableincome-100000)*0.1;
      tax += taxableincome;
    taxableincome=100000;
  }
  else if(taxableincome<=100000)
  {
    tax += 0; 
  }
  
  cout << "You have a tax of Rs. " << tax;
    
}

int main()
{
  taxCaluculator();
  return 0;
}
