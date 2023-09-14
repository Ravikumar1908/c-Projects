#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

double inrtopkr()
   {
    float inr,pkr;
    cout<<"Enter Amount of indian Rupee:";
    cin>>inr;
     pkr=inr*3.57;
    cout<<"the value equivalent to it in pakistani rupee is:"<<pkr;
   }
double pkrtoinr()
   {
    float inr,pkr;
    cout<<"Enter Amount of pakistani Rupee:";
    cin>>pkr;
     inr=pkr*0.28;
    cout<<"the value equivalent to it in indian rupee is:"<<inr;
   }


double inrtodollar()
   {
    float inr,dollar;
    cout<<"Enter Amount of indian Rupee:";
    cin>>inr;
     dollar=inr*0.012;
    cout<<"the value equivalent to it in dollar  is:"<<dollar;
   }
double dollartoinr()
   {
    float inr,dollar;
    cout<<"Enter Amount of dollar:";
    cin>>dollar;
     inr=dollar*83.09;
    cout<<"the value equivalent to it in indian rupee is:"<<inr;
   }


double inrtoeuro()
   {
    float inr,eruo;
    cout<<"Enter Amount of indian Rupee:";
    cin>>inr;
     eruo=inr*0.011;
    cout<<"the value equivalent to it in eruo  is:"<<eruo;
   }
double eurotoinr()
   {
    float inr,eruo;
    cout<<"Enter Amount of eruo:";
    cin>>eruo;
     inr=eruo*90.57;
    cout<<"the value equivalent to it in indian rupee is:"<<inr;
   }

   
double inrtodihram()
   {
    float inr,dihram;
    cout<<"Enter Amount of indian Rupee:";
    cin>>inr;
     dihram=inr*0.0044;
    cout<<"the value equivalent to it in dihram  is:"<<dihram;
   }
double dihramtoinr()
   {
    float inr,dihram;
    cout<<"Enter Amount of dihram:";
    cin>>dihram;
     inr=dihram*22.62;
    cout<<"the value equivalent to it in indian rupee is:"<<inr;
   }
    


int main()
   {
    cout<<setw(50)<<"Welcome to Currency Convertor"<<endl<<setw(60)<<"**---------------------------------------------**"<<endl;
    cout<<"please choose currency that you want to convert(inr , pkr, dollar, euro,dihram):-";
    string curr[]={"inr","pkr","dollar","euro","dihram",};
    string curr1;
    cin>>curr1;
    cout<<"please choose your currency you want to convert into(inr , pkr, dollar, euro,dihram):-";
    string curr2;
    cin>>curr2;
    
    if(curr1=="inr" && curr2=="pkr")
    {
        inrtopkr();
    }
    else if(curr2=="inr" && curr1=="pkr")
    {
        pkrtoinr();
    }
    
    else if(curr1=="inr" && curr2=="dollar")
    {
        inrtodollar();
    }
    else if(curr2=="inr" && curr1=="dollar")
    {
        dollartoinr();
    }
    else if(curr1=="inr" && curr2=="euro")
    {
        inrtoeuro();
    }
    else if(curr2=="inr" && curr1=="euro")
    {
        eurotoinr();
    }



    else if(curr1=="inr" && curr2=="dihram")
    {
        inrtodihram();
    }
    else if(curr2=="inr" && curr1=="dihram")
    {
        dihramtoinr();
    }
    cout<<setw(50)<<"\n thanks for using our system";
    
    return 0;
   }