# Quiz

1.
```
Опишите что в этом коде не так

class Test {
  public:
    Test(int a){}
  private:
    Test(const Test&);
}

....

Test t;

Test t2(30);

t = t2;

Test t3(t);
```

2.
```
Какая из функций шаблона будет вызвана
template <class T>
class Test;

template <class T>
class Test<T*> {
  public:
   Test() : value(new T{20}) {}
   void print() {std::cout << __PRETTY_FUNCTION__ << " " << *value << std::endl;}
  private:
   T* value;
};

template <>
class Test<float> {
  public:
   void print() {std::cout << __PRETTY_FUNCTION__ << " " <<  value << std::endl;}
  private:
   float value;
};

....

  Test<float> t;
  t.print();
  Test<int*> t2;
  t2.print();

```

3.
```
В чем разница между макросом и шаблоном
```

4.
```
Что в этом коде не так

template <class T = int, class U>
class Test {
  public:
    void print() {
      std::cout << value1 << " " << value2 << std::endl;
    }
  private:
    T value1 = T{};
    U value2 = U{};
}

...

Test<float> t;
```

6.
```
Что в этом коде не так
template<clas T>
void print(T value ){
  std::cout << value << std::endl;
}

template<clas T>
void print<T*>(T* value ){
  std::cout << value << std::endl;
}

```

6.
```
Что будет на экране
template<class T>
void print(T value ){
  std::cout << value << std::endl;
}

template<>
void print<const char *>(const char* value ){
  std::cout << value << std::endl;
}

...

print(4000);
print<float>(30.f);

int a = 90;
print(&a);

const char* c_string = "Hello";
print(c_string);

```


5.
```
Что будет выведено на экран
class C {
public:
  C(int i) : i(i) { std::cout << i; }
  ~C() { std::cout << i + 5; }

private:
  int i;
};

int main() {
  const C &c = C(1);
  C(2);
  C(3);


// Hint! подумайте о расширении времени жизни временной переменной
```

6.
```
Что будет выведено на экране

#include <iostream>

class Test {
  public:
   Test(int a): a(a) {

   }
   void print() {std::cout << a << std::endl;}
  private:
   int a = 90;
};


int main(int argc, char const *argv[]) {

  const unsigned SIZE = 20;
  Test test[SIZE];
  for (unsigned i = 0; i < SIZE; ++i) {
    test[i].print();
  }
  return 0;
}
```

7.
```
Какие строчки нужно закомментировать, что бы скомпилировался следующий фрагмент кода:

class A 
{ 
public: 
    int l; 
 
protected: 
    int m; 
 
private: 
    int n; 
}; 
 
 
class B : public A 
{ 
public: 
    int l; 
 
protected: 
    int m; 
     
    void func2() 
    { 
        l = A::l;   // 1 
        m = A::m;   // 2 
        n = A::n;   // 3 
    } 
 
private: 
    int n; 
}; 

```

8.
```
class A {
  int32_t a; 
}

class B: public A {
  int32_t b; 
}

std::cout << sizeof(B);
```

8.
```
class A {
  public:
   int calc(int a) {
     return b + a;
   }
  private:
   int b = 10;  
}

class B: public A {
  public:
   void calc(int a, int c) {
     return a + c + b;
   } 
  int32_t b = 40;
}

....
B b;

A *a = new B{};

std::cout << a->calc(10);

std::cout << b.calc(10);
```

9.
```
class Test {
  public:
    Test(int a, int b) a(a), b(b) {

    }

  void print() {
    std::cout << a << b << std::endl;
  }
  private:
    int a;
    int b;
}

class Test2: public Test {
  public:
    Test(int c) c(c){

    }

  private:
    int c;
}

....
Test2 t{10};

t.print();
```

10.
```
class A {
  public:
   void print() {
     std::cout << "A::print()" << std::endl;
   }
};

class B: public A {
  public:
    void calc(int a, int b) { return a + b;}
};

class C: private B {
  public:
    void calc(int b) { return b + 10;}
};

....
C c;

c.print();

A& a = c;
```

11.
```
class A {
 public:
  void print() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;   
  }
};

class B {
 public:
  void print() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
  }
};

class C : public A, public B {};

int main(int argc, char const *argv[]) {
  C c;
  c.print();
  return 0;
}
```


11.
```

class Base {
  public:
   virtual void print() { std::cout << res << std::endl;}
   virtual void calc(int a_, int b_) { res = a_ + b_;}
  private:
   long res = 0;
};

class Derived: public Base {
  public:
   void print() { std::cout << res << std::endl;}
   void calc(double a_, double b_) { res = a_ + b_;}
  private:
   long double res = 0;
};

void print(Base& base) {
  base.calc(10, 20);
  base.print();
}

...

Derived d;

print(d);

```