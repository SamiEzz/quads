#include "../include/readDb.hpp"

database::database(){

}

int database::setSource(std::string _source){
    source=_source;
    return 1;
}
