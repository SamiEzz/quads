#include "readDb.hpp"
#include <iostream>
#include <string>

class advertiser {
  std::string advName;
  short int advId;
  short int funds;

public:
  // constructor
  advertiser();

  // getters
  std::string getSource() { return advName; };
  short int getId() { return advId; }

  // setters
  int setName(std::string _name);
};