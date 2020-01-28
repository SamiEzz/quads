#include <iostream>
#include <string>

using namespace std;

class categories {
  string catName;
  short int catId;
  short int numberOfCategories;
  int *matchingMatrix;

public:
  // constructor
  categories(int _numberOfCategories) {
    numberOfCategories = _numberOfCategories;
    matchingMatrix = new int[numberOfCategories * numberOfCategories];
  };
  ~categories() { delete[] matchingMatrix; };

  // getters

  // setters
};