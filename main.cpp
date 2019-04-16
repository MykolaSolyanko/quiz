#include <iostream>

#include <vector>


template<class T>
void print(T value ){
  std::cout << value << std::endl;
}

template<>
void print<const char *>(const char* value ){
  std::cout << value << std::endl;
}

int main()
{
print(4000);
print<float>(30.f);

int a = 90;
print(&a);

const char* c_string = "Hello";
print(c_string);

  return 0;
}








