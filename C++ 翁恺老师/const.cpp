//const value can be exploited

const int class_size = 12;

int finalGrade[class_size];  //ok

//const的变量初始化以后不能被赋值，不能被修改；这种const的变量对c++来说仍然是变量而不是常数，
//因为变量意味着要在内存里给你分配地址。

int x;
cin >> x;
const int size = x;
double classAverage[size]; // error!


//这里之所以错误是因为编译器需要知道本地变量有多大，然后给他分配内存
