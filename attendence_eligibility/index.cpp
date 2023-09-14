#include<iostream>
#include<string>
#include<math.h>
using namespace std;
 
 int eligible( int total ,int attended, char medicalcause)
 {
	if(attended>= 0.75*total)
	{
    cout<<"Your attendence is :"<<(attended*100)/total<<"%"<<"\n"<<"You are eligible";
	}
	else if(attended<(0.75*total) && medicalcause=='Y'){
    cout<<"Your attendence is :"<<(attended*100)/total<<"%"<<"\n"<<"You have low attendence but you are eligible because of your medical issues.";
	}
	else{
    cout<<"Your attendence is :"<<(attended*100)/total<<"%"<<"\n"<<"You are  not eligible..";
	}

 }


	 int main()
	 {
		int a,b;
        char c;
		cout<<"\t\t\t\t -------Tell Your total class and total attended class\n";
		cout<<"Total class:";
		cin>>a;
		cout<<"attended class:";
		cin>>b;
        cout<<"Do you have any medical cause..?(Y/N):";
        cin>>c;
       
       
		eligible(a,b,c);
	return 0;
	 }