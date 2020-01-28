#include "readDb.hpp"
#include <iostream>
#include <string>

using namespace std;

class advertiser {
  std::string advName;
  short int advId;
  short int funds;
  string targetCat;

public:
  // constructor
  advertiser();

  // getters
  std::string getSource() { return advName; };
  short int getId() { return advId; }

  // setters
  int setName(std::string _name);
};