# QSMatrix
QSMatrix is for the calculation of matrix. This library is originally from QunatStart.com.  A c++ matrix library was required, so I looked up a few things, and found a light library at QuantStart.com. It is a QSMatrix consisting of one header file and one cpp file. It supports simple matrix operation, but it is a little inconvenient for the constructor to use, so we applied the method of making a matrix in the form of a vector here to add the constructor.

qSMatrix<int> mat0 (3, 4, { { {1,2,3,4}, {5,6,7,8}, {9,1,2,3} });    
I created a matrix mat0 in 3x4 dimensions and added a constructor that could put the initial values in {}.
