#include "../include/value_matrix.h"
#include <iostream>
#include <cassert>

int main() {
  Matrix * A = new Matrix(5,5, false);
  A->transferToDevice();
  A->transferToHost();

  return 0;
}
