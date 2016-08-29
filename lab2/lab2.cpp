/*Guess my integer
Creator: Jonathan Grigg
Date: 08-28-2016

Purpose: to practice using random number generation and inquiries*/

#include <iostream>
using namespace std;

int main () {
    int random number = ;//my random number, will use a code to generate
    int guessN = 0; //the user's guess
    int points = 0; //points the user has
    cout <<"guess a number between 1 and 20."<<endl<< "You will be given 10 points for correct answers and lose 1 point for incorrect."<<endl;
    cout <<"If at anytime you would like to quite type 'quite' to exit.";
    cin >> guessN; //user guesses the number
    /*from here the there will be code stating that if the guess is less than the number is higher than their guess
    if their guess is more then the number is lower than their guess.
    */
    cout<<"Congratulations! You are correct and get 10 points!" <<endl<<"play again? Type 'y' or 'n'"; //if the user is correct
    cout<<"I'm sorry but the number is more than your guess"<<endl<<"You lose a point and your new score is "<<points<<endl;
    //for when they guess lower
    cout<<"I'm sorry but the number is less than your guess"<<endl<<"You lose a point and your new score is "<<points<<endl;
    //for when they guess higher
    cout <<"Guess again? "; //this is for afterwards the guess is made
    cin << guessN; // where they type in the guess.