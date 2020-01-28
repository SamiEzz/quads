#include "json.hpp"
#include <iostream>
#include <string>

class database {
  std::string source;

public:
  database();
  std::string myString;
  int setSource(std::string _source);
  std::string getSource();
};