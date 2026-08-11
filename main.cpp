#include <iostream>      // For printing (std::cout)
#include <chrono>
#include "CSVReader.h"
using namespace std;

//  1. Define the structure countrystats


int main() {


    // 2.  Set the chron on and we create the map_Country, unordered_map with processCSV function in CSVReader 

    auto start = chrono::high_resolution_clock::now(); 

    auto map_country=processCSV("data.csv");

    auto end = chrono::high_resolution_clock::now();

    auto duration=chrono::duration_cast<chrono::milliseconds>(end-start);

    cout << "\n---------Metrics by country-----------" << endl;
    for (const auto &[Country, Countrystats] : map_country)
    {
        cout << Country << ": Total price=" << Countrystats.Total << " EUR | Count=" << Countrystats.Count << "  | Average: " << Countrystats.Total / Countrystats.Count << " EUR" << endl;
    }

   // The execution time is printed
    cout << "The execution time "<<duration.count()/1000<<"ms"<<endl; 
    
    return 0;
}
