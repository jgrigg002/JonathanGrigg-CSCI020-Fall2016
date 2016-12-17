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
    
    srand(time(0));
    
    city city1; //class generation
    
    ifstream in_key;  //for input file code key
    ifstream in_file; //input file
    ofstream out_data; //output option
    
    char choice; //needed for inputing into the struct
    
    
    string data; //used for transfering to stringstream and from
    string c_name; //city name for input function
    string buffer; //need for transfering data into a struct array
    int popu = 0; //for population # input
    int eth;
    // these structs are for transfer to class
    
    
    
    //variables for input into class
    string file_name_in; //name for file to open
    pop p_in;       //population struct into class
    income i_in;    //income struct for into class
    ethn e_in[99];  //ethnicity income for into class
    
    
    //variables for output of class
    string file_name_out; //name for file to output to
    pop p_out;          //population struct for output from class
    income i_out;       //income struct for output from class
    ethn e_out[99];     //ethnicity struct for output from class
    
    //Probability generator variables
    float ran_gen = 0;      //variables are stored here after generation
    
    
    
    in_key.open("input_key.txt"); //input is opened
    if ( !in_key.is_open() ){ //test for open, if fail, terminates program
        cout<<"error loading in file input key"<<endl;
        return -1;
    }
    
    //offers choice of reading file input key or just opening file
    cout<<"Welcome to Jonathan Grigg's capstone project."<<endl;
    cout<<"Please type in the name of the file you would like to input or type \"key\" to view the input key"<<endl;
    cin>>file_name_in;          //used for accessing the file.
    //if "key" is typed it opens and reads input_key.txt. After the file is read in it asks for the file name you would like to input.
    
    if (file_name_in == ""){ //exit it nothing is typed
            return 0;
        }
    
    else if (file_name_in == "key"){ //prints input_key.txt
        while (!in_key.eof()){
            getline(in_key, data); 
            cout<<data<<endl;
        }
        cout<<"please type in the name of the file you would like to input. just press enter to close program"<<endl;
        cin>>file_name_in;
        
        if (file_name_in == ""){ //exit it nothing is typed
            return 0;
        }
        
        else{        //opens file
            in_file.open(file_name_in);
        //  if (in_file.is_open()){ //for testing
        //      cout<<"file is open"<<endl;
        //  }
        }
    }
    
    //opens file if user doesn't want to read the key
    else{
        in_file.open(file_name_in);
    /*      if (in_file.is_open()){
                cout<<"file is open"<<endl;
            }*/
    }
    
    in_key.close(); //since input_key.txt is not needed I close it here
    
    //closes program if file fails to open
    if (!in_file.is_open()){
        cout<<"could not open";
        return -1;
    }
    
    while (!in_file.eof()){ //loop continues till end of file is read by in_file
        getline(in_file,data); //reads infile into "data"
        istringstream iss(data); //whole line is transfered into the string stream for parsing out piece by piece
        iss>>choice;            //because first piece of each line is a letter it's read into 'char choice' for use in switch
        
        switch (choice){ //first letter read in sets which path is taken
            
            case 'c':      //for the city name line that then sends data to the class
                iss>>c_name; //if 'c' was the char then it pulls the next word into c_name.
                city1.set_name(c_name);//sets city name in the class using c_name.
            break;
            
            case 'p': //inputs the population struct
                iss>> p_in.pop; //if 'p' was the charecter than it starts this loop.
                
                //because the data on each line follows the moddle 'char'(for determining type) and then a proportion that the data represents
                //I use this loop with max size set to the number of data types
                
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
    //cout<<city1.get_name()<<endl;
    p_out = city1.get_pop();
    /*cout<<p_out.pop<<endl;
    cout<<p_out.male<<endl;
    cout<<p_out.female<<endl;
    cout<<p_out.baby<<endl;
    cout<<p_out.child<<endl;
    cout<<p_out.adult<<endl;
    cout<<p_out.senior<<endl;
*/
    i_out = city1.get_in();
    /*//output test
    cout<<i_out.male<<endl;
    cout<<i_out.female<<endl;
    cout<<i_out.poverty<<endl;
    cout<<i_out.no_insurance<<endl;
    */
    //for testing output of ethnicity
    
    for (int m =0; m < eth; m++){
    e_out[m] = city1.get_eth(m);
    }
    /*
    for (int r =0; r< eth; r++){
        cout<<e_out[r].name<<endl;
        cout<<e_out[r].percent<<endl;
    }*/
    
    cout<<endl;
    
    ran_gen = (rand()%1000);
    if(ran_gen<(p_out.female * 10)){
        cout<<"person is female, ";

    }
    else{
        cout<<"person is male, ";

    }
    
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
    
    ran_gen = (rand()%1000);
    float upper = 0;
    float lower = 0;
    
    
    //cout<<" "<<lower<<" ";
    for (int i =0 ; i<eth; i++){
        
        switch(i){
            case 0:
            //cout<<ran_gen<<" case 0 ";
                upper += (e_out[i].percent * 10);
                //cout<<" "<<upper<<" ";
            break;

            default:
                lower += (e_out[(i-1)].percent * 10);
                upper += (e_out[i].percent * 10);
                //cout<<lower<<" "<<upper<<" ";
        }
        if ((ran_gen<upper) && (ran_gen>lower)){
                cout<<"is "<<e_out[i].name<<" ";
        }
    }
            
    
    
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
