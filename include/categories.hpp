#include <iostream>
#include <string>

// Categories Defines
#define NUMBER_OF_CATEGORIES 10

using namespace std;

class categories {
  string catName;
  short int catId;
  short int numberOfCategories;
  int *matchingMatrix;

public:
  // Constructor
  categories() {
    numberOfCategories = NUMBER_OF_CATEGORIES;
    matchingMatrix = new int[numberOfCategories * numberOfCategories];
  };
  // Destructor
  ~categories() { delete[] matchingMatrix; };

  // Getters

  // Setters
};