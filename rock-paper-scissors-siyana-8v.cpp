#include <iostream>
#include <ctime>
using namespace std;
int main ()
{
    int Rock=1, Paper=2, Scissors=3, x;
    cout<<"Rock=1, Paper=2, Scissors=3. What is your choice?(num.)"<<endl;
    cout<<"x=";
    cin>>x;
     srand (time(0));
    int CompChoice = rand() % 3 + 1;

{
    if (CompChoice==1 && x==1)
    {cout<<"You were both Rock. Tie."<<endl;}
else if (CompChoice==2 && x==2)
    {cout<<"You were both Paper. Tie."<<endl;}
else if (CompChoice==3 && x==3)
    {cout<<"You were both Scissors. Tie."<<endl;}
else if (CompChoice==1 && x==2)
    {cout<<"You were Paper and the computer was Rock. You win."<<endl;}
else if (CompChoice==2 && x==3)
    {cout<<"You were Scissors and the computer was Paper. You win."<<endl;}
else if (CompChoice==3 && x==1)
    {cout<<"You were Rock and the computer was Scissors. You win."<<endl;}
else if (CompChoice==2 && x==1)
    {cout<<"You were Rock and the computer was Paper. You lose."<<endl;}
else if (CompChoice==1 && x==3)
    {cout<<"You were Scissors and the computer was Rock. You lose."<<endl;}
else if (CompChoice==3 && x==2)
    {cout<<"You were Paper and the computer was Scissors. You lose."<<endl;}
}
    return 0;
}
