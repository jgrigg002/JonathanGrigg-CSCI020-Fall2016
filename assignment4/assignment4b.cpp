//Jonathan Grigg
//csci20
//program4
//11.14.16

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;



int main(){

ifstream stop; //for stop word list
ifstream doc; //document to run through concordance

ofstream out; //output fill with wordlist and count

string stop_list[571]; //stop words stored here

int word_talley = 0; //counts words as they come in
int post_stop_counter = 0;//used for counting number of words[i] get used.

bool test = false;
string words[99999]; //words from document stored here
int word_place_count[99999][2]; //records the [number of each word], [how many] and [where it occurs].
//example: word_place_count[i][0]number of times word is used word_place_count[i][1]  where it occurs first.

stop.open("english.stop.txt");
doc.open("little_miss_muffet.txt");

     if (!stop.is_open()) { //used if file fails to initilize, taken from zybooks
      cout << "Could not open stop word file." << endl;
   }
 if (!doc.is_open()) { //used if file fails to initilize, taken from zybooks
      cout << "Could not open word doc for analyzing." << endl;
   }
    
    
    for (int i; i<571; i++){  //adds words into stop word list
        stop>> stop_list[i];
    }
    /*for (int i; i<571; i++){    //used for testing stop word
        cout<< stop_list[i]<<endl;
    }*/\
    int i=0;
   
   while (!doc.eof()){  //ends at end of document. not the best way to end a file
       word_talley++;  //increase the word count everytime a word is input
       doc>> words[i]; //inputs word
       
       for (int j=0; j<words[i].length(); j++){//loop removes punctiation
       if(ispunct(words[i][j])){
           words[i].pop_back();
       }
       }
       for (int j=0; j<words[i].length(); j++){//loop converts upper case to lowercase
           words[i][j] = tolower(words[i][j]);
       }//needed filter for stop words
       }
       
       
       
   }
       
       //for (int j=0; j<571; j++){
           
       //}
       
   for (int k=0; k<word_talley; k++){
   cout<< words[k];
   }
stop.close();
doc.close();

    
    
    
    return 0;
}