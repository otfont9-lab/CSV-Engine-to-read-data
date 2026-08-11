#include "CSVReader.h"
#include <iostream>      
#include <fstream>      
#include <sstream> 
 
using namespace std;

unordered_map<string, Countrystats> processCSV(const string& filename) {
    ifstream fich(filename);
    unordered_map<string, Countrystats> map_country;


    if (!fich)
    {
        cout << "Error at readaing the data file ";
        return map_country;                            // Memory reserve
    }



    string line;

    getline(fich, line) ;

    string Country, Reservations, Price_string;
               
    map_country.reserve(200);   
                                //Reading lines from the file
    while(getline(fich,line)){
        stringstream ss(line);

        getline(ss, Country, ',');
        getline(ss, Reservations, ',');
        getline(ss, Price_string);  


        double Price_row = stod(Price_string);


        map_country[Country].Count += 1;
        map_country[Country].Total += Price_row;
    }
    fich.close();
    return map_country;
}
