#include <string>
#include <iostream>
#include "json.hpp"


class database {      
    std::string source;       
  public:         
    database();
    std::string myString; 
    int setSource(std::string _source);
    std::string getSource();
    
};