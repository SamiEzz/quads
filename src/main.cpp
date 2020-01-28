#include <iostream>
#include "readDb.hpp"


int main(int argc, char const *argv[])
{
    database db;
    db.setSource("./db/users.json");
    std::cout << "Source : " << db.getSource() << std::endl;
    return 0;
}
