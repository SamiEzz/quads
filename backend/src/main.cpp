
#include "readDb.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  database db;
  db.setSource("./db/users.json");
  cout << "Source : " << db.getSource() << endl;
  return 0;
}
