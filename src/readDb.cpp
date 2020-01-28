#include <iostream>
#include "readDb.hpp"

database::database(void){
    source="./db/";
    std::cout << "db created\n";
}

int database::setSource(std::string _source){
    source=_source;
    return 1;
}

std::string database::getSource(){
    return source;
}
