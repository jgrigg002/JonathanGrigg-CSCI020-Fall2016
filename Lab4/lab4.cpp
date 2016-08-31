/* 
Creator:    Jonathan Grigg
Date:       08/29/2016
Purpose:    Crazy Paragraphs!!
Limerick written by Edward Leer.
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
    
   
    string noun1;                                                               //Lines 15-22 are for the limerick
    string noun2;
    string noun3;
    string  adj1;
    string pro_noun;
    string verb1;
    string verb2;
    string place;
    char pause;                                                                 //to facilitate a pause in the text stream
    
    cout <<"Welcome to Crazy Paragraphs!!!"<<endl;                              //intro
    cout <<"Press any key and then Enter key to start."<<endl;
    cin  >>pause;                                      //zbook3.9needs work
    
        cout <<"How to play:"<<endl<<"You will be given a series of questions requiring you to come up words that meet specific criteria."<<endl;
        cout <<"You may only answer each questing with one word."<<endl<<"Please answer them the best that you can."<<endl<<endl<<endl;
   
        cout    <<"Please type a noun then press Enter. ";
        cin     >>noun1;
        
        cout    <<endl<<"First noun: "<<noun1<<endl<<"Please type a second noun then press Enter. ";
        cin     >>noun2;
                                                                                //I'm stating the words chosen every step in order to help the player keep track
        cout    <<endl<<"First noun: "<<noun1<<endl<<"Second noun: "<<noun2<<endl<<endl;
        cout    <<"please type a third noun then press Enter. ";
        cin     >>noun3;
        
        cout    <<endl<<"First noun: "<<noun1<<endl<<"Second noun: "<<noun2<<endl<<"Third noun: "<<noun3<<endl<<endl;
        cout    <<"please type a pronoun for the first noun you chose then press Enter. ";
        cin     >>pro_noun;
        
        cout    <<endl<<"First noun: "<<noun1<<endl<<"Second noun: "<<noun2<<endl<<"Third noun: "<<noun3<<endl;
        cout    <<"pronoun: "<<pro_noun<<endl<<endl;
        cout    <<"please type an adjective then press Enter. ";
        cin     >>adj1;
        
        cout    <<endl<<"First noun: "<<noun1<<endl<<"Second noun: "<<noun2<<endl<<"Third noun: "<<noun3<<endl;
        cout    <<"Pronoun: "<<pro_noun<<endl<<"Adjective: "<<adj1<<endl<<endl;
        cout    <<"Please type in a verb then press Enter. ";
        cin     >>verb1;
        
        cout    <<endl<<"First noun: "<<noun1<<endl<<"Second noun: "<<noun2<<endl<<"Third noun: "<<noun3<<endl;
        cout    <<"Pronoun: "<<pro_noun<<endl<<"Adjective: "<<adj1<<endl<<"First verb: "<<verb1<<endl<<endl;
        cout    <<"please type in a second verb. ";
        cin     >>verb2;
        
        cout    <<endl<<"First noun: "<<noun1<<endl<<"Second noun: "<<noun2<<endl<<"Third noun: "<<noun3<<endl;
        cout    <<"Pronoun: "<<pro_noun<<endl<<"Adjective: "<<adj1<<endl<<"First verb: "<<verb1<<endl;
        cout    <<"Second verb: "<<verb2<<endl<<endl;
        cout    <<"Please type in a place (you will need to use a _ for multiple words. ";
        cin     >>place;
        
        cout    <<endl<<"First noun: "<<noun1<<endl<<"Second noun: "<<noun2<<endl<<"Third noun: "<<noun3<<endl;
        cout    <<"Pronoun: "<<pro_noun<<endl<<"Adjective: "<<adj1<<endl<<"First verb: "<<verb1<<endl;
        cout    <<"Second verb: "<<verb2<<endl<<"Place: "<<place<<endl;
        cout    <<"Press any key and then Enter to continue."<<endl;            //from here the rest of the code will be the story
        cin     >>pause;
        
        cout    <<endl<<"Here is a story for you based on your answers."<<endl<<endl;
        cout    <<"There was a "<<adj1<<" Man of "<<place<<"."<<endl;
        cout    <<"Who watched his "<<noun1<<" "<<verb1<<" a "<<noun2<<"."<<endl;
        cout    <<"But once, by mistake,"<<endl;
        cout    <<"In a "<<noun3<<" "<<pro_noun<<" did "<<verb2<<"."<<endl;
        cout    <<"That unfortunate Man of "<<place<<"."<<endl;
        return 0;                                                               //ends the program
}