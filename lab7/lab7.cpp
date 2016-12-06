//Jonathan Grigg
//lab7, functions and parameters
//11.08.16
//csci 20
//Using "it's the end of the world as we know it" by REM
#include <iostream>
#include <string>
using namespace std;

void all(); //outputs song
void all(string mon,string seas);//outputs with changes

void verse1();//with no changes
void verse1(string mon);//for changes

void verse2();//with no changes
void verse2(string mon);//for changes

void chorus1();//with no changes
void chorus1(string mon,string seas);//for changes

void chorus2();//with no changes
void chorus2(string mon,string seas);//for changes

void chorus3();//with no changes
void chorus3(string mon,string seas);//for changes

string season_select(string seas); //chooses a season based on the month

void song(int ch1); //user input
void song(int ch1, string ch2);//user input

int main(){
    string month;
    int choice =1;
    cout<<"would you like to see the whole song or choose your own month for it to be about?"<<endl;
    cout<<"type 1 for whocle song type 2 then the month if that is what you wish"<<endl;
    cout<<"month must be lower case and typed in full. anything  else will return song as normal.";
    cin >> choice;
    
    if (choice !=1){
        cin>>month;
        song(choice,month);
    }
    else{
        song(choice);
    }
    
return 0;
}

string season_select(string seas){
    string out;
    if (seas == "december" || seas == "january" || seas == "february"){
        out = "autumn";
    }
    if (seas == "march" || seas == "april" || seas == "may"){
        out = "winter";
    }
    if (seas == "june" || seas == "july" || seas == "august"){
        out = "spring";
    }
    if (seas == "september"|| seas == "october" || seas == "november"){
        out = "summer";
    }
    return out;
}
    
void song (int ch1){//for if user chooses to play whole song
    if (ch1=1){
        all();
    }
}
void song (int ch1, string ch2){//for if use chooses to 
    string season;
    string month = ch2;
    season = season_select(ch2);
    all(month,season);
}

void verse1(){
    //verse1
    cout<<"Here comes the rain again"<<endl;
    cout<<"Falling from the stars"<<endl;
    cout<<"Drenched in my pain again"<<endl;
    cout<<"Becoming who we are"<<endl;
    
    cout<<"As my memory rests"<<endl;
    cout<<"But never forgets what I lost"<<endl;
    cout<<"Wake me up when September ends"<<endl;
}
void verse2(){
    //verse2
    cout<<"Here comes the rain again"<<endl;
    cout<<"Falling from the stars"<<endl;
    cout<<"Drenched in my pain again"<<endl;
    cout<<"Becoming who we are"<<endl;
    
    cout<<"As my memory rests"<<endl;
    cout<<"But never forgets what I lost"<<endl;
    cout<<"Wake me up when September ends"<<endl;
}
void chorus1(){
    //chorus1
    cout<<"Summer has come and passed"<<endl;
    cout<<"The innocent can never last"<<endl;
    cout<<"Wake me up when September ends"<<endl;
    
    cout<<"Like my father's come to pass"<<endl;
    cout<<"Seven years has gone so fast"<<endl;
    cout<<"Wake me up when September ends"<<endl;
}
void chorus2(){
    //chorus2
    cout<<"Summer has come and passed"<<endl;
    cout<<"The innocent can never last"<<endl;
    cout<<"Wake me up when September ends"<<endl;
    
    cout<<"Ring out the bells again"<<endl;
    cout<<"Like we did when spring began"<<endl;
    cout<<"Wake me up when September ends"<<endl;
}
void chorus3(){
    //chorus3
    cout<<"Summer has come and passed"<<endl;
    cout<<"The innocent can never last"<<endl;
    cout<<"Wake me up when September ends"<<endl;
    
    cout<<"Like my father's come to pass"<<endl;
    cout<<"Seven years has gone so fast"<<endl;
    cout<<"Wake me up when September ends"<<endl;
    cout<<"Wake me up when September ends"<<endl;
}

void verse1(string mon){
    //verse1
    cout<<"Here comes the rain again"<<endl;
    cout<<"Falling from the stars"<<endl;
    cout<<"Drenched in my pain again"<<endl;
    cout<<"Becoming who we are"<<endl;
    
    cout<<"As my memory rests"<<endl;
    cout<<"But never forgets what I lost"<<endl;
    cout<<"Wake me up when "<<mon<< " ends"<<endl;
}
void verse2(string mon){
    //verse2
    cout<<"Here comes the rain again"<<endl;
    cout<<"Falling from the stars"<<endl;
    cout<<"Drenched in my pain again"<<endl;
    cout<<"Becoming who we are"<<endl;
    
    cout<<"As my memory rests"<<endl;
    cout<<"But never forgets what I lost"<<endl;
    cout<<"Wake me up when "<<mon<< " ends"<<endl;
}
void chorus1(string mon,string seas){
    //chorus1
    cout<<seas<<" has come and passed"<<endl;
    cout<<"The innocent can never last"<<endl;
    cout<<"Wake me up when "<<mon<< " ends"<<endl;
    
    cout<<"Like my father's come to pass"<<endl;
    cout<<"Seven years has gone so fast"<<endl;
    cout<<"Wake me up when "<<mon<< " ends"<<endl;
}
void chorus2(string mon,string seas){
    //chorus2
    cout<<seas<<" has come and passed"<<endl;
    cout<<"The innocent can never last"<<endl;
    cout<<"Wake me up when "<<mon<< " ends"<<endl;
    
    cout<<"Ring out the bells again"<<endl;
    cout<<"Like we did when spring began"<<endl;
    cout<<"Wake me up when "<<mon<< " ends"<<endl;
}
void chorus3(string mon,string seas){
    //chorus3
    cout<<seas<<" has come and passed"<<endl;
    cout<<"The innocent can never last"<<endl;
    cout<<"Wake me up when "<<mon<< " ends"<<endl;
    
    cout<<"Like my father's come to pass"<<endl;
    cout<<"Seven years has gone so fast"<<endl;
    cout<<"Wake me up when "<<mon<< " ends"<<endl;
    cout<<"Wake me up when "<<mon<< " ends"<<endl;
}

void all (){
    cout<<endl<<"wake me up when september ends"<<endl<<endl;
    chorus1();
    cout<<endl;
    verse1();
    cout<<endl;
    chorus2();
    cout<<endl;
    verse2();
    cout<<endl;
    chorus3();
    cout<<endl;
}
void all(string mon,string seas){
    cout<<endl<<"wake me up when "<<mon<<" ends with edits"<<endl<<endl;
    chorus1(mon,seas);
    cout<<endl;
    verse1(mon);
    cout<<endl;
    chorus2(mon,seas);
    cout<<endl;
    verse2(mon);
    cout<<endl;
    chorus3(mon,seas);
    cout<<endl;
}