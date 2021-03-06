#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;


int main() 
    {
    srand(time(0));
    const int size = 60;
    cout << "Welcome to the drunk man game." << endl;
    cout << "The game is simple: you need to reach your house and not go back to the pub." << endl;
    cout << "Note: the game is luck based, so give it a few tries." << endl;
    cout << "Enter a letter to begin \n ";
    
    //Creation of the game's playing area and character.
    
    char x; 
    cin >> x;
    int position = size / 2;
    
    //Creation of the starting and ending goal.
    
    while (true) 
    {
        cout << "|PUB|";
        for (int i = 0; i < size; i++) 
        {
            if (i == position)
                cout << x;
            else cout << " ";
        }
        cout << "|HOME|" << endl;
        
        //The luck based element.
        
        int move = rand() % 3 - 1;
        position = position + move;
        
        //Losing condition.
        
        if (position < 1) 
        {
            cout << "You went back to the pub, your drinking spree continues..." << endl; break; 
        }
        
        //Winning condition.
        
        if (position > size - 1) 
        {  
         cout << "You found your way home! It's a real shame that you forgot your keys at the pub..." << endl;
         break; 
        }
        
        //Maximum amount of code runs
        
        for (int sleep = 0; sleep < 1000000; ++sleep);
    }
    return 0;
}
