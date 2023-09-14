#include<iostream>
using namespace std;
int main()
    {
        cout<<"Enter the Number of Subject:-";
        int n;
        cin>>n;
        int marks[n];
        int total;
        cout<<"Enter the full Marks of the subject:-";
        cin>>total;
        total*=n;
        cout<<"Enter the mark and press enter after every marks :-";
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>marks[i];
           sum=sum+marks[i];
        }
        double result=(sum*100/total);
        cout<<"your percentage is :"<<result;
        return 0;
    } 