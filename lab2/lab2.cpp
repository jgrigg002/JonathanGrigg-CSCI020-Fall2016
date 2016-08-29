/*Guess my integer
Creator: Jonathan Grigg
Date: 08-28-2016

Purpose: to practice using random number generation and inquiries*/

#include <iostream>
using namespace std;

int main () {
    int secretNum; 
    int guessNum; 
    int gamePoints; //not sure but seems to be necessary to intilize these placeholders in order to assigne values to them
    int srand (time(NULL)); //generates random number based on time
    secretNum = srand % 20 + 1; //should create a random number between 20 and 1
    gamePoints = 0;
    cout << secretNum <<endl; //using to test program by having it give me the number so I can test different responses
    cout << "Guess a number between 1 and 20"<<endl<<"you will be recieve 10 points for each correct guess";
    cout <<"you will lose one point for every bad guess"<<endl; //Instructions for game
    cout <<"you have "<<gamePoints<<" points"<<endl<<"What number is your guess?"<<endl;
    cin  >> guessNum; //made it to here and I'm able to get the game to inqure a number
    
    if (guessNum = secretNum) {
        cout <<"Yes!!"<<endl<<"You now have"<<gamePoints<<" points!!"<<endl;
    } return 21
    else if (guessNum > secretNum) {
        cout <<"I'm sorry but the number you're looking for is lower than that"<<endl;
        cout<<"You now have"<<gamePoints<<" points."<<endl<<"Guess again?"<<endl;
    } return 21
    else if (guessNum < secretNum) {
        cout<<"I'm sorry but the number you're looking for is lower than that"<<endl;
        cout<<"You now have"<<gamePoints<<" points."<<endl<<"Guess again?"<<endl;
        
    } return 21
}

/*if I remove everything after line 25 I can get it to run, but it will only spit out the condition for if even when terms aren't met. */