//while loop for loading document into string and counting
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