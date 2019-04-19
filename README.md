# Quiz

1.
```
Эти два объявление одинаковы
struct Test {
  int a;
  int b;
};

class Test {
  int a;
  int b;
};

```

2.
```
Этот код валидный

class Test {
  const float a = 10.1;
};

```

3.
```
Этот код валидный
class Test {
  void print() {
    std::cout << a << std::endl;
  }
  int a;
};

Test t;

t.print();
```

4.
```
Этот код валидный
class Test {
  static const float a = 20;
};

```

5.
```
Этот код валидный
class Test {
  public:
   static void print() {
     std::сout << a << std::endl;
   }
  private:
   int a = 90;
};

```

6.
```
Этот код валидный
Если нет то опишите что в нем не так
class Test {
  public:
   Test(int a) {
     a = a;
   }
  private:
  int a = 90;
};

Test t;

Test t2{40}

Test t3 = t2;

```

7.
Этот код валидный

class Test {
  public:
   Test(int a) {
     print();
   }
   void print() const {
     std::cout << ++a << std::endl;;
   }
  private:
   int a = 100;
};
```

8.
```
Что в этом коде не так

class Test {
  public:
   Test(int a): a(a){
   }
   void print() const {
     std::cout << a << std::endl;;
   }
  private:
   int a = 100;
};

```

9.
```
Этот код валидный

class Test {
  public:
   void print() {
     std::cout << a << std::endl;
   }
  private:
   const int a;
};
```

9.
```
Этот код валидный

class Test {
  private:
   int array[SIZE];
   static const unsigned int SIZE = 255;
};
```
