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
        string stop_list[571] = {}; //stop words stored here
        string conc_word[9999] = {}; //words from doc stored here
        string conc_mid[9999] = {}; //for creating a test list if a word has been compiled already
        string conc_line[9999] = {}; //each word with it's count and when it occures is stored here as a string
     
     //word counters
        int stop_word_count;   //word count stored here if I allow choice for multiple stop files
        int conc_word_tally;  //word count for each individual word stored here
        int conc_word_place_count[9999][2];      //[number of times word is used][when it's first used in doc]
     //example: word_place_count[i][0]number of times word is used word_place_count[i][1]  where it occurs first.
};
    conc::conc(){ //initilizing and setting up stop list
         
         //initilize integers
         stop_word_count = 0;//not being used at moment, for if user is allowed choice of stop words
         
         for (int i=0; i<9999; i++){
         for (int j=0; j<2; j++){
         conc_word_place_count[i][j] = 0;
         }
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
        doc.open(data);
    if (!doc.is_open()) { //used if file fails to initilize, taken from zybooks
        cout << "Could not open word doc for analyzing." << endl;}
        conc_word_tally = 0;
        int i=0;
        
        while(!doc.eof()){       //adds words from in_data to conc_word string array
            conc_word_tally++;      //increase the word count everytime a word is input
            doc >> conc_word[i]; //inputs word
       
            for (int j=0; j<conc_word[i].length(); j++){//loop removes punctiation
                if(ispunct(conc_word[i][j])){
                    conc_word[i].pop_back();
            }
            }
            for (int j=0; j<conc_word[i].length(); j++){//loop converts upper case to lowercase
                conc_word[i][j] = tolower(conc_word[i][j]);
            }//needed filter for stop words
            
            i++;
        }
        for(int j=0; j< conc_word_tally; j++){
        for(int k=0; k< 571; k++){
            if (conc_word[j] == stop_list[k]){
                conc_word[j] = "";
            }
            
        }
        }
        
        
        
        for (int j = 0; j < conc_word_tally; j++){
            cout<<conc_word[j]<<" ";
        } //used for testing words out.
        doc.close();
    }
    
    string word_out(){
        for (int k=0; k < conc_word_tally; k++){
            if(conc_word[k] != conc_mid[k]){
                    conc_mid[k]= conc_word[k];
                    conc_word_place_count[k][0]++;
                    conc_word_place_count[k][1]=k;
            }
        }
        
        for (int j=0; j <conc_word_tally;j++){
            
        }
    }    

int main(){
    
    conc file1;//loads class and constructor
    
    cout<<"please type in the name of the document you wish to use: ";
    string text;
    cin>>text;
    file1.in(text);
    
    
    
    
    return 0;
}