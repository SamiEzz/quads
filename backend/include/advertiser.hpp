#include "categories.hpp"
#include "readDb.hpp"
#include <iostream>
#include <string>

using namespace std;

class advertiser {
  string advName;
  string advEmail;
  string advPhone;
  string advAvatar;
  short int numberOfAds;

  short int advId;
  short int funds;
  categories targetCat;

public:
  // constructor
  advertiser();

  // getters
  string getSource() { return advName; };
  short int getId() { return advId; }

  // setters
  void setName(string _name);
  void setEmail(string _email) { advEmail = _email; }
  void setPhone(string _phone) { advPhone = _phone; }
};