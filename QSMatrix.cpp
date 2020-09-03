#include "matrix.h"
#include <iostream>
#include <vector>

int main(int argc, char **argv) 
{
  
  QSMatrix<int> mat0( 3, 4, { {1,2,3,4}, {5,6,7,8}, {9,1,2,3} });    
  QSMatrix<int> mat1 = mat0 + 5;
  
  for (int i=0; i<mat1.get_rows(); i++) 
  {
    for (int j=0; j<mat1.get_cols(); j++) 
    {
      std::cout << mat1(i,j) << " ";
    }
    std::cout << std::endl;
  }
  
  QSMatrix<double> mat2(10, 10, 1.0);
  QSMatrix<double> mat3(10, 10, 2.0);
  QSMatrix<double> mat4 = mat2 + mat3;

  for (int i=0; i<mat4.get_rows(); i++) 
  {
    for (int j=0; j<mat4.get_cols(); j++) 
    {
      std::cout << mat4(i,j) << ", ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;

  QSMatrix<double> mat5(2, 3, {{3,-2,5},{3,0,4}});
  QSMatrix<double> mat6(3, 2, {{2,3},{-9,0},{0,4}});
  QSMatrix<double> mat7 = mat5 * mat6;

  for (int i=0; i<mat7.get_rows(); i++) 
  {
    for (int j=0; j<mat7.get_cols(); j++) 
    {
      std::cout << mat7(i,j) << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
  return 0; 
}
