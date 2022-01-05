#include <iostream>
#include <thread>

void do_something(int i)
{
    std::cout << "i: " << i << '\n';
}

struct func
{
  int& i;
  func(int& i_) : i(i_) {}
  void operator() ()
  {
      std::cout << "()\n";
  }
};

void f()
{
  int some_local_state=0;
  func my_func(some_local_state);
  std::thread t(my_func);
  try
  {
    std::cout << "into try{}\n";
  }
  catch(...)
  {
    std::cout << "into catch{}\n";
    t.join();  // 1
    throw;
  }
  std::cout << "success\n";
  t.join();  // 2
}


int main()
{
    f();
    int a;
    std::cin >> a;
    return 0;
}