#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits.h>
using namespace std;

int main()
{
    cout<<"guess the number(1--->100)\n\n";

        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int playerchoice;

        for(int i =0 ; i<INT_MAX;i++){
                cin>>playerchoice;
        if(playerchoice==secretNumber){
            cout<<"you got it right!";
            break;
        }
        else if (playerchoice>secretNumber){
            cout<<"your number is greater than the secret number ---->try again\n";
        }
        else if (playerchoice<secretNumber){
            cout<<"your number is smaller than the secret number ---->try again\n";
        }

        }


    return 0;
}
