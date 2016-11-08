//Jonathan Grigg
//csci 20
//11.07.16

#include <iostream>
#include <fstream>

using namespace std;



int main(){
    
    ifstream fin; //creates input call
    ofstream fout; //creates output call

    fin.open("input.txt");      //file calling in
    fout.open("output.txt");    //file outputing to (can be created)
    
    const int row = 3; //sets #of rows
    const int col = 4; //sets #of columns
    
    int num[row+1][col+1] = {
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
        };   //vector array [i][j]
     
      if (!fin.is_open()) {
      cout << "Could not open input.txt." << endl;
   }
   
   cout <<"input values from file"<<endl;
   for (int i = 0; i < row; i++) //cycles rows
   for (int j = 0; j < col; j++) //cyclex through columns
   fin >> num[i][j]; //inputs into array values
   
   for (int i = 0; i < row; i++) { //these print out what is stored
   for (int j = 0; j < col; j++) {
   cout << num[i][j]<<" ";
   }
  
   cout<<endl;
   }
   cout<<endl;
    for (int i = 0; i < row; i++){ //cycles through columns
        for (int j = 0; j < col; j++){ //cycles through rows
            if (j < col) { //if j is less than column value then
                num[i][col] += num[i][j];  //takes the sum of each spot in the row and adds it to the last column value for that row
    }}}
    for (int j=0; j < col; j++){
        for (int i=0; i < row; i++){
            if (i < row) {
                num[row][j] += num[i][j];
    }}}
    
    num[row+1][col+1]= 0;
        
   
   for (int i = 0; i < row+1; i++) { //these print out what is stored
   if (i<row){
   for (int j = 0; j < col+1; j++) {
   cout << num[i][j]<<" ";
   }}
   else{
   for (int j = 0; j < col; j++) {
   cout << num[i][j]<<" ";
   }}
   cout << endl;
   }
  
   for (int i = 0; i < row+1; i++) { //saves to output.txt
   if (i<row){
   for (int j = 0; j < col+1; j++) {
   fout << num[i][j]<<" ";
   }}
   else{
   for (int j = 0; j < col; j++) {
   fout << num[i][j]<<" ";
   }}
   fout << endl;
   }
   fin.close();//closes files being accessed
   fout.close();
   
   
    return 0;
}