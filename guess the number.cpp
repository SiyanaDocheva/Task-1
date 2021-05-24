#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()

{
    int x=0, y=0, times;
    cout<<"x(positive)=";
    cin>>x;
    cout<<"y(positive)=";
    cin>>y;
    while (x<=0 || y<=0 || x>=y)
    {
        cout<<"Invalid data"<<endl;
        cout<<"x(positive)=";
        cin>>x;
        cout<<"y(positive)=";
        cin>>y;
    }
    srand (time(0)); //seed random number generator
    int num = rand() % (y-x+1) + x;
    cout << "Guess My Number Game\n\n";

    int guess = 0;
    cout << "Enter a guess between "<<x<<" and "<<y<<".\n\n";
    while (guess != num) {
        cin >> guess;
        times++;
        if (guess > num) {
            cout << "Too high!\n\n";
        }
        else if (guess < num)
            {
                cout << "Too low!\n\n";
            }
        else {
            cout << "Correct! You got it in. \n\n";
        }
    }
    cout<<"Guessed by "<<times<<" tries."<<endl;

    return 0;
}
