//Jonathan Grigg
//csci 20
//11.07.16

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;


int main(){
    
    ifstream fin; //creates input call
    ofstream fout; //creates output call

    fin.open("input.txt");      //file calling in
    fout.open("output.txt");    //file outputing to (can be created)
    
    const int row = 51; //sets #of rows
    const int col = 51; //sets #of columns
            
    int num[row][col]; //array for grid
    
    for (int i = 0; i < 52; i++) //cycles rows
    for (int j = 0; j < 52; j++) //cyclex through columns
            num[i][j] =0; //initilizes to zero
    
    istringstream input; //stringstream used for calling one line at a time
    int col_count = 0;  //colunm counter
    int row_count  = 0; //row counter
    bool v_test = true; //used for testing values returning
    
    string inter_med; //
    
   while (v_test == true){
       getline(fin,input);
       
    }
          if (!fin.is_open()) { //used if file fails to initilize, taken from zybooks
      cout << "Could not open input.txt." << endl;
   }
   
   cout <<"Inputing values from file"<<endl; //inputs values row by row. i=x j=y
   for (int i = 0; i < row_count; i++) //cycles rows
   for (int j = 0; j < col_count; j++) //cyclex through columns
   fin >> num[i][j]; //inputs into array values 
   
   for (int i = 0; i < row_count; i++) { //these print out what is stored one row at a time
   for (int j = 0; j < col_count; j++) {
   cout << num[i][j]<<" ";
   }
  
   cout<<endl;
   }
   cout<<endl;
    for (int i = 0; i < row_count; i++){ //cycles through columns. 
        for (int j = 0; j < col_count; j++){ //cycles through rows
            if (j < col_count) { //if j is less than column value then
                num[i][col_count] += num[i][j];  //takes the sum of each spot in the row and adds it to the last column value for that row
    }}}
    for (int j=0; j < col_count; j++){// does the same as above loops but for comlumns
        for (int i=0; i < row_count; i++){
            if (i < row_count) {
                num[row_count][j] += num[i][j];
    }}}
    
    num[row_count+1][col_count+1]= 0;
        
   
   for (int i = 0; i < row_count+1; i++) { //these print out what is stored
   if (i<row_count){
   for (int j = 0; j < col_count+1; j++) {
   cout << num[i][j]<<" ";
   }}
   else{
   for (int j = 0; j < col_count; j++) {
   cout << num[i][j]<<" ";
   }}
   cout << endl;
   }
  
  /* for (int i = 0; i < row_count+1; i++) { //saves to output.txt
   if (i<row_count){
   for (int j = 0; j < col_count+1; j++) {
   fout << num[i][j]<<" ";
   }}
   else{
   for (int j = 0; j < col_count; j++) {
   fout << num[i][j]<<" ";
   }}
   fout << endl;
   }*/
   fin.close();//closes files being accessed
   fout.close();
   
   
    return 0;
}