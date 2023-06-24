/*
NOTES:
Passing by Value
When an object is passed by value to a function, 
the underlying object is copied using its copy constructor. 
double Function(vector<double> my_vector);


Passing by Reference
When an object is passed by reference to a function, the underlying object is not copied.
double Function(vector<double>& my_vector);

Passing by Reference to Const
To solve the problem of not copying AND not modifying the underlying data 
double Function(const vector<double>& my_vector);

Returning values by value, reference, and address
https://www.learncpp.com/cpp-tutorial/74a-returning-values-by-value-reference-and-address/

*/