#include<iostream>
using namespace std;

int yearytpe(int y){
    
    if(y%100==0)
    {
        if(y%400==0)
        {
            cout<<"It's a Leap Year";
        }
        else{
            cout<<"It's a General Year";
        }
    }
        else if(y%4==0)
        {
            cout<<"It's a leap Year";
        }
        else{
            cout<<"It's a General Year";
        }
        {

        }
    }
    


  int main()
  {
    int year;
    cout<<"\t\t\t\t ------- Find leap or General year-------\n";
    cout<<"Enter the Year:";
    cin>>year;
    yearytpe(year);
    return 0;
  }


