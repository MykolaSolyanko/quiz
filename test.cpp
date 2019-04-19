#include <iostream>


class Test {
  public:
   void print() {
     std::cout << a << std::endl;
   }
  private:
   const int a;
};

int main(int argc, char const *argv[]) {
    Test t;
    t.print();
    return 0;
}
