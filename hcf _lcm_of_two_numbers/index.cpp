#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;

   int HCF(int a ,int b)
   {
	int maxnum=max(a,b);
	int minnum=min(a,b);
   for(int i=minnum; i>=1;i--)
   {
   if(a%i==0 && b%i==0)
   {
	cout<<"Your HCF is:"<<i<<"\n";
	break;
   }
   }
   }



   int LCM(int a,int b)
   {
	int maxnum=max(a,b);
	int minnum=min(a,b);
	for(int i=maxnum;i; i++) // basically an infinite loop , i'll break it when i'll get the lcm;
   {
	if(i%minnum==0)
	{
		cout<<"Your LCM is :"<<i;
		break;  // break the infinte loop
	}
   }
   }

	 int main()
	{
		int x,y;
		cout<<"Enter two numbers to find their HCF and then LCM :\n";
		cout<<"Enter first number: ";
		cin>>x;
		cout<<"Enter second number: ";
		cin>>y;
		cout<<"\n";
           HCF(x,y);
		   LCM(x,y);
	return 0;
	 }


//As we know the HCF with the help of its function, then we can easily find lcm by
//usign the formula of a*b== lcm*hcf;