//Jonathan Grigg
//csci20 final project
//12.13.16

//to fix finish probability generator and creat output functions so user can choose a number to generate

#include <iostream>
#include <fstream>
#include <iomanip>
#include <ios>
#include <string>
#include <cstdlib>
#include <ctime>
#include <sstream>

using namespace std;
struct pop{ //population data struct
    int pop;
    //percentages of population of city
    float male; 
    float female;
    float baby;
    float child;
    float adult;
    float senior;
};
struct income{ //general income for city
    double male = 0;
    double female = 0;
    double poverty = 0; //percent below poverty line
    double no_insurance = 0; //those with insurace
};
struct ethn{ //ethnicity data
    float percent;
    string name;
    //census.gov did not have data for ethnicities by city so these are placeholders
    //float low_income;
    //float mid_income;
    //float high_income;
};

class city{
    private:
    
    pop c_pop; //population spread data
    income c_inc; //income data
    ethn c_eth[99]; //data on each ethnicity
    int number_eth; // number of ethnicities, used for knowing how many are stored in array
    int counter; //counts them in and out
    string name;
    
    public:
    city(); //constructor
    void set_name(string n_in); //inputs name of city
    void set_pop(pop p_in);   //inputs popdata
    void set_income(income i_in); //inputs income data
    void set_eth(ethn e_in);  //inputs ethnicity data
    void set_num_eth(int n_in); //inputs number of ethnicities
    
    string get_name();
    pop get_pop(); //gets pop data
    income get_in(); //gets income data
    ethn get_eth(int e); //gets income data
};

int main(){
    
    city city1;
    
    ifstream in_key;  //for input file code key
    ifstream in_file; //input file
    ofstream out_data; //output option
    
    char choice;
    string file_name_in; //name for file to open
    string file_name_out; //name for file to output to
    string data; //used for transfering to stringstream and from
    string c_name; //city name for input function
    string buffer; //need for transfering data into a struct array
    int popu = 0; //for population # input
    int eth;
    // these structs are for transfer to class
    pop p_in;
    pop p_out;
    income i_in;
    income i_out;
    ethn e_in[99];
    ethn e_out[99];
    
    float ran_gen = 0;
    
    in_key.open("input_key.txt"); //input is opened
    
    if ( !in_key.is_open() ){ //test for open if fail terminates program
        cout<<"error loading in file input key"<<endl;
        return -1;
    }
    
    //offers choice of reading file input key or just opening file
    cout<<"Welcome to Jonathan Grigg's capstone project.\nPlease type in the name of the file you would like to input or type \"key\" to view the input key"<<endl;
    cin>>file_name_in; //file is input
    if (file_name_in == "key"){ //if key is typed it opens and reads input key and then asks for file name to input
        cout<<endl;
        
        //prints off input key for file input to user
        while (!in_key.eof()){
            getline(in_key, data); 
            cout<<data<<endl;
        }
        cout<<"please type in the name of the file you would like to input. just press enter to close program"<<endl;
        cin>>file_name_in;
        //allows exit
        if (file_name_in == ""){
            return 0;
        }
        //opens file
        else{
        in_file.open(file_name_in);
        //if (in_file.is_open()){ //for testing
        //    cout<<"file is open"<<endl;
        //}
        }
    }
    //opens file if user doesn't want to read the key
    else{
        in_file.open(file_name_in);
       // if (in_file.is_open()){
    //        cout<<"file is open"<<endl;
      //  }
    }
    //I close out the inout key file here so I can close the program if things go wrong
    in_key.close();
    //closes if file open failes
    if (!in_file.is_open()){
        cout<<"could not open";
        return -1;
    }
    //string stream for reading in each line. switch because the first letter of each line in input file triggers the switch
    while (!in_file.eof()){
        getline(in_file,data);
        istringstream iss(data);
        iss>>choice;
        switch (choice){
            //for the city name line that then sends data to the class
            case 'c': 
                iss>>c_name;
                city1.set_name(c_name);//sets city name in the class
            break;
            
            //inputs the population struct
            case 'p': 
                iss>> p_in.pop;
                for (int j =0 ; j<6; j++){   
                    iss>>choice;
                    switch (choice){
                        case 'b':
                        iss>> p_in.baby;
                        break;
                        
                        case 'c':
                        iss>> p_in.child;
                        break;
                        
                        case 'a':
                        iss>> p_in.adult;
                        break;
                        
                        case 'o':
                        iss>> p_in.senior;
                        break;
                        
                        case 'f':
                        iss>> p_in.female;
                        break;
                        
                        case 'm':
                        iss>> p_in.male;
                        break;
                        
                        default:
                        cout<<"error";
                    }
                }

                city1.set_pop(p_in);
            break;
            
            //ethnicity data
            case 'e':
                iss>>eth;
                //cout<<eth<<endl;   //testing ethnicity number input
                city1.set_num_eth(eth);
                for (int k =0; k < eth; k++){
                    iss>> e_in[k].name;
                    iss>> e_in[k].percent;
                    city1.set_eth(e_in[k]);
                }
            break;
            
            //income data
            case 'i':
            for (int l = 0; l < 4; l++){
                iss>>choice;
                switch (choice){
                    case 'm':
                    iss>> i_in.male;
                    break;
                    case 'f':
                    iss>> i_in.female;
                    break;
                    case 'l':
                    iss>> i_in.poverty;
                    break;
                    case 'h':
                    iss>> i_in.no_insurance;
                    break;
                    default:
                    cout<<"error"<<endl;
                }
            }
            city1.set_income(i_in);
            break;
            
            default:
            cout<<"base error"<<endl;
        }
    } 
    in_file.close();

 //for testing output from class
    cout<<city1.get_name()<<endl;
    p_out = city1.get_pop();
    cout<<p_out.pop<<endl;
    cout<<p_out.male<<endl;
    cout<<p_out.female<<endl;
    cout<<p_out.baby<<endl;
    cout<<p_out.child<<endl;
    cout<<p_out.adult<<endl;
    cout<<p_out.senior<<endl;

    i_out = city1.get_in();
    //output test
    cout<<i_out.male<<endl;
    cout<<i_out.female<<endl;
    cout<<i_out.poverty<<endl;
    cout<<i_out.no_insurance<<endl;
    
    //for testing output of ethnicity
    
    for (int m =0; m < eth; m++){
    e_out[m] = city1.get_eth(m);
    }
    
    for (int r =0; r< eth; r++){
        cout<<e_out[r].name<<endl;
        cout<<e_out[r].percent<<endl;
    }
    
    srand(time(0));
    ran_gen = (rand()%1000);
    if(ran_gen<(p_out.female * 10)){
        cout<<"person is female, ";

    }
    else{
        cout<<"person is male, ";

    }
    
    srand(time(0));
    ran_gen = (rand()%1000);
    if (ran_gen < (p_out.baby * 10)){
        cout<<"is a baby, ";
    }
    else if((ran_gen > (p_out.baby * 10)) && (ran_gen <((p_out.baby + p_out.child) * 10))){
        cout<<"is a child, ";
    }
    else if ((ran_gen > ((p_out.baby + p_out.child) * 10)) && (ran_gen <((p_out.baby + p_out.child + p_out.adult) * 10))){
        cout<<"is an adult, ";
    }
    else {
        cout <<"is a senior, ";
    }
    /*
    srand(time(0));
    ran_gen = (rand()%eth);
    int a = ran_gen;
    switch (a)
    */
    
    
    
    return 0;
}

city::city(){ //constructing
    name = "";
    for (int i =0; i<99; i++) {
        c_eth[i].percent = 0;
        c_eth[i].name = "blank";
    }
    counter = 0;
    number_eth = 0;
    
}
void city::set_pop(pop p_in){ //population in
    c_pop = p_in;
    return;
}

void city::set_income(income i_in){ //income in
    c_inc = i_in;
    return;
}

void city::set_num_eth(int n_in){ //number of ethnicities in. used for comparing to count
    number_eth = n_in;
    return;
}

void city::set_eth(ethn e_in){ //ethnicity data in gets stored to array
    c_eth[counter] = e_in;
    counter++;
    return;
}
void city::set_name(string n_in){
    name = n_in;
    return;
}

string city::get_name(){
    return name;
}

pop city::get_pop(){ //population data in
    return c_pop;
}

income city::get_in(){
    return c_inc;
}

ethn city::get_eth(int e){
    //counter--;
    return c_eth[e];
}
