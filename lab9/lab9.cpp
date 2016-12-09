/*
Jonathan Grigg
12.26.16
csci20
lab9 */

#include <iostream>

using namespace std;

class temp_converter{
    private:
    float kelvin; //where the temp is stored in KELVIN not any other type
    
    
    public:
    temp_converter(); //constructor
    
    void set_temp_kel(float in); //sets the temp from kelvin
    void set_temp_cel(float in); //"     "   "    "   celcius
    void set_temp_far(float in); //"     "   "    "   fahrenheit
    
    float get_temp_kel(); //gets temp in kelvin
    float get_temp_cel(); //gets temp in celcius
    float get_temp_far(); //gets temp in fahrenheit
};



int main(){
    temp_converter st; //
    int choice = 1;
    float in =0;
    while (choice != 0){
    cout<<"what temperature type would you like to input?"<<endl;
    cout<<"type 1 for kelvin, 2 for celsius, or 3 for fahrenheit. type 0 to move on to next step"<<endl;
    cin>>choice;
    switch (choice){//based on choice will chose converter
        case 1:
        cout<<"input temp ";
        cin>>in;
        st.set_temp_kel(in);
        break;
        
        case 2:
        cout<<"input temp ";
        cin>>in;
        st.set_temp_cel(in);
        break;
        
        case 3:
        cout<<"input temp ";
        cin>>in;
        st.set_temp_far(in);
        break;
    }
    in =0;
    }
    choice = 1;
    while (choice != 0){
    cout<<"what type of temp would you like back?"<<endl;
    cout<<endl<<"type 1 for kelvin, 2 for celsius, or 3 for fahrenheit. type 0 to exit"<<endl;
    cin>>choice;
    switch (choice){//choice determins exporter
        case 1:
        cout<<st.get_temp_kel();
        break;
        
        case 2:
        cout<<st.get_temp_cel();
        break;
        
        case 3:
        cout<<st.get_temp_far();
        break;
    }
}
        return 0;
}


temp_converter::temp_converter() : kelvin(0) {//constructor
    return;
}

void temp_converter::set_temp_kel(float in){//inputs straight to kelvin
    kelvin = in;
    return;
}

void temp_converter::set_temp_cel(float in){//converts to celsius as imported
    kelvin = (in - 273.15);
    return;
}

void temp_converter::set_temp_far(float in){//converts to fahrnheit as imported
    kelvin = ((((in-32)*5)/9)-273.15);
    return;
}

float temp_converter::get_temp_kel(){//exports kelvin
    return kelvin;
}

float temp_converter::get_temp_cel(){//converts to celsius and exports
    return (kelvin + 273.15);
}
float temp_converter::get_temp_far(){//converts to fahrenheit and exports
    return ((((kelvin + 273.15)*9)/5) + 32);
}
