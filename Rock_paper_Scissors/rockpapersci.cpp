#include<iostream>
using namespace std;
int main()
  {
    string arr[3]={"rock","paper", "scissors"};
    cout<<"player 1 : Choose  one of the shapes:(rock, paper, scissor)";
    string player1;
    cin>>player1;
    cout<<"player 2 :Now Choose any on of two remaining  shapes:(rock, paper, scissor)";
    string player2;
    cin>>player2;
    if(player1==player2)
    {
        cout<<"It's a DRAW!"<<endl;
    }
    else if(player1==arr[0] && player2==arr[2])
    {
        cout<<"Player 1 is the Winner..";
    }
    else if(player1==arr[1] && player2==arr[2])
    {
        cout<<"Player 2 is the Winner..";
    }
    else if(player1==arr[0] && player2==arr[1])
    {
        cout<<"Player 2 is the Winner..";
    }
    else if(player1==arr[1] && player2==arr[0])
    {
        cout<<"Player 1 is the Winner..";
    }
    else if(player1==arr[2] && player2==arr[0])
    {
        cout<<"Player 2 is the Winner..";
    }
    else if(player1==arr[2] && player2==arr[1])
    {
        cout<<"Player 1 is the Winner..";
    }
    

   return 0;
  }