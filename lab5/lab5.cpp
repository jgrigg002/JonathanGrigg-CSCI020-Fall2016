#include <iostream>
#include <string>
using namespace std;

struct monster {            //used for creating the monsters frame
    string name;
    string head;
    string eyes;
    string earsl;
    string earsr;
    string nose;
    string mouth;
};
int main (){
    monster mon1;           //first monster, going to be user inputed
    
    mon1.name;
    mon1.head;
    mon1.eyes;
    mon1.earsl;
    mon1.earsr;
    mon1.nose;
    mon1.mouth;
    
    monster mon2;           //second monster presets
    
    mon2.name ="bob";
    mon2.head = " ^^^ ";
    mon2.eyes = "@ @";
    mon2.earsl = "x";
    mon2.earsr = "x";
    mon2.nose = "  r  ";
    mon2.mouth = " ~~~ ";
    
    monster mon3;           //third monster presets
    
    mon3.name ="regie";
    mon3.head = " xYx ";
    mon3.eyes = "e e";
    mon3.earsl = "d";
    mon3.earsr = "b";
    mon3.nose = "  v  ";
    mon3.mouth = " zzz ";
    
    monster mon4;           //fourth monster presets
    
    mon4.name ="carla";
    mon4.head = " nnn ";
    mon4.eyes = "Q Q";
    mon4.earsl = "p";
    mon4.earsr = "q";
    mon4.nose = "  e  ";
    mon4.mouth= " yyy ";
    
    cout<< "please input monster parts" <<endl<<"type in a name and press enter"<<endl;
    getline(cin,mon1.name);
    cout << "type in a head and then press enter" <<endl; //inquiry for setting parts
    getline(cin,mon1.head);
    cout<< "type in a pair of eyes and then press enter" <<endl;
    getline(cin,mon1.eyes);
    cout<< "type in a left ear and press enter" <<endl;
    getline(cin,mon1.earsl);
    cout<< "type in a right ear and press enter"<< endl;
    getline(cin,mon1.earsr);
    cout<< "type in a nose and press enter"<< endl;
    getline(cin,mon1.nose);
    cout<< "type in a mouth and press enter"<<endl;
    getline(cin,mon1.mouth);
    cout<<endl<<"generating "<<mon1.name<<endl;                     //generating user monster
    cout<<" "<< mon1.head<<endl;
    cout<<mon1.earsl<<mon1.eyes<<mon1.earsr<<endl;
    cout<<"  "<<mon1.nose<<endl;
    cout<<" "<<mon1.mouth<<endl;
    cout<<"generating preset monsters to party with yours"<<endl;   //projecting preset monsters
    cout<<mon2.name<<"   "<<mon3.name<<" "<<mon4.name<< "  "<<mon1.name<<endl; //names
    cout<<mon2.head<<" "<<mon3.head<<" "<<mon4.head<<"  "<<mon1.head<<endl;  //heads
    cout<<mon2.earsl<<mon2.eyes<<mon2.earsr<<" "<<mon3.earsl<<mon3.eyes<<mon3.earsr<<" "<<mon4.earsl<<mon4.eyes<<mon4.earsr<<" "<<mon1.earsl<<mon1.eyes<<mon1.earsr<<endl;
    //eyes and ears
    cout<<mon2.nose<<" "<<mon3.nose<<" "<<mon4.nose<<"   "<<mon1.nose<<endl;   //noses
    cout<<mon2.mouth<<" "<<mon3.mouth<<" "<<mon4.mouth<<"  "<<mon1.mouth<<endl; //mouthes
    cout<<endl<<endl<< "goodnight...sleep well, if you can.";
    
    
    return 0;
}