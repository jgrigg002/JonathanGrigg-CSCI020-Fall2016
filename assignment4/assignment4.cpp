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
     void in(istringstream in_data); //mutator //data input
     string stop_out() const;//accessor    //for testing stop word list
     string word_out() const;//accessor    //data output, string contains each line as an array. chosen because user can always modify output string into any format wanted.
   
    private:
     //stop word in file
     ifstream stop; //for stop word list
     
     //string arrays
     string stop_list[571]; //stop words stored here
     string conc_word[9999]; //words from doc stored here
     string conc_line[9999]; //each word with it's count and when it occures is stored here as a string
     
     //word counters
     int stop_word_count;   //word count stored here if I allow choice for multiple stop files
     int conc_word_talley;  //word count for each individual word stored here
     int conc_word_place_count[9999][2];      //[number of times word is used][when it's first used in doc]
     //example: word_place_count[i][0]number of times word is used word_place_count[i][1]  where it occurs first.
     
     //processors
     string stop_word_pros(); //compiles data for stop words into stop list
     string conc_compile();   //compiles all data for concordance into a string array for each line
     void conc_pros(); //compiles document into conc_word, conc_talley, and conc_word_place_count
};
     conc::conc(){ //initilizing and setting up stop list
         
         //initilize integers
         stop_word_count = 0;
         conc_word_talley = 0;
         for (int i=0; i<9999; i++){
         for (int j=0; j<2; j++){
         conc_word_place_count[i][j] = 0;}}
         
         //initilize strings
         for(int i=0; i<9999; i++){
         conc_word[i] = "";}
         for(int i=0; i<9999; i++){
         conc_line[i] ="";}
         for(int i=0; i<571; i++){
         stop_list[i] ="";}
         
         //stop word list
         stop.open("english.stop.txt");
         for (int i; i<571; i++){  //loads stop words into list
         stop>> stop_list[i];}
         /*for (int i; i<571; i++){    //used for testing stop word
         cout<< stop_list[i]<<endl;}*/
         stop.close();
     
     


int main(){
    
    conc file1;//loads class and constructor
    
    ifstream doc; //document to run through concordance
    ofstream out; //output fill with wordlist and count
    
    //open file
    cout<<"please type in the name of the document you wish to use."
    cin>>string text;
    doc.open(text);
    
    //file test initilizers
    if (!stop.is_open()) { //used if file fails to initilize, taken from zybooks
        cout << "Could not open stop word file, make sure it's in directory." << endl;}
    if (!doc.is_open()) { //used if file fails to initilize, taken from zybooks
        cout << "Could not open word doc for analyzing." << endl;}
    //closes out doc being accessed
    doc.close();
    
    
    
    return 0;
}