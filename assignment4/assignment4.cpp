//Jonathan Grigg
//csci20
//program4, concordance
//11.14.16

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

class conc{ //short for concordance creator
    public:  //input output
        conc(); //constructor
        void in(string text); //mutator //data input
        string word_out() const;//accessor    //data output, string contains each line as an array. chosen because user can always modify output string into any format wanted.
   
    private:
     //stop word in file
        ifstream stop; //for stop word list
        ifstream doc;
        ofstream out;
     //string arrays
        string stop_list[571]; //stop words stored here
        string conc_word[9999]; //words from doc stored here
        string conc_line[9999]; //each word with it's count and when it occures is stored here as a string
     
     //word counters
        int stop_word_count;   //word count stored here if I allow choice for multiple stop files
        int conc_word_tally;  //word count for each individual word stored here
        int conc_word_place_count[9999][2];      //[number of times word is used][when it's first used in doc]
     //example: word_place_count[i][0]number of times word is used word_place_count[i][1]  where it occurs first.
};
    conc::conc(){ //initilizing and setting up stop list
         
         //initilize integers
         stop_word_count = 0;//not being used at moment, for if user is allowed choice of stop words
         conc_word_tally = 0;
         for (int i=0; i<9999; i++){
         for (int j=0; j<2; j++){
         conc_word_place_count[i][j] = 0;
         }
         }
         
         //initilize strings
         for(int i=0; i<9999; i++){
         conc_word[i] = "";
         }
         for(int i=0; i<9999; i++){
         conc_line[i] ="";
         }
         for(int i=0; i<571; i++){
         stop_list[i] ="";
         }
         
         //stop word list
         stop.open("english.stop.txt");
         for (int i; i<571; i++){  //loads stop words into list
         stop>> stop_list[i];
         }
         if (!stop.is_open()) { //used if file fails to initilize, taken from zybooks
         cout << "Could not open stop word file, make sure it's in directory." << endl;
         }
         /*for (int i; i<571; i++){    //used for testing stop word list
         cout<< stop_list[i]<<endl;}*/
         stop.close();
}
        
    void conc::in(string data){
        doc(data);
    if (!doc.is_open()) { //used if file fails to initilize, taken from zybooks
        cout << "Could not open word doc for analyzing." << endl;}
        conc_word[0] = " ";
        for(int word = 0; conc_word[word] != "" ;word++){       //adds words from in_data to conc_word string array
            conc_word_tally++;      //increase the word count everytime a word is input
            data>> conc_word[word]; //inputs word
         }
         for(int i = 0; i < conc_word_tally; i++){
             cout<<conc_word[i]<<" ";
         }
         doc.close();
}
     
    // string conc::word_out() const{
    //     return conc_line;
//}
     

int main(){
    
    conc file1;//loads class and constructor
    
    //open file
    cout<<"please type in the name of the document you wish to use: ";
    string text;
    cin>>text;
    file1.in(text);
    
    
    
    
    
    
    
    
    
    
    //closes out doc being accessed
    
    
    
    
    return 0;
}