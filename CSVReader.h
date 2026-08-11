#ifndef CSVREADER_H
#define CSVREADER_H

#include <string>       
#include <unordered_map> 

// 1 Define the structure
struct Countrystats
{
    double Total = 0.0;
    int Count = 0;
};


// 2. Define the function used to read the file 

std::unordered_map<std::string, Countrystats> processCSV(const std::string& filename);

#endif // CSVREADER_H
