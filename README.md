# QSMatrix
QSMatrix is for the calculation of matrix. This library is originally from QuantStart.com.  The QSMatrix consists of one header file and one cpp file. It supports simple matrix operation, but it's constructor is a little inconvenient to fill matrix elements with values, so I added another constructor to fill it's initial values in the form of a vector here.</br>
**QSMatrix<int> mat0 (3, 4, { { {1,2,3,4}, {5,6,7,8}, {9,1,2,3} });**    
I created a matrix mat0 in 3x4 dimensions and added a constructor that could put the initial values in {}.
