# Quiz

1.
```
Такой код валидный если наша программа состоит только с одного файла исходного кода

#include <iostream>

long test(int a, int b) {
  std::cout<< "test" << std::endl;
  return a + b;
}
```

2.
```
Такой код правильный
long test(int a, int b);
long test(int a, int b) {
  return a + b;
}
int main(int argc, char const *argv[]) {
  return 0;
}
```

3.
```
Такой код правильный
long test(int a, int b);
long test(int a, int b) {
  return a + b;
}

long test(int a, int b) {
  return a + b;
}

int main(int argc, char const *argv[]) {
  return 0;
}
```

4.
```
Что в этом коде не так
long test(int a, int b) {
  return a + b;
}
...
test(10, 40, 50) // 1
test(10, 40) // 2
test(40) // 2

int a = 90;
int b = 100;

std::cout << test(&a, &b) << std::endl;
```

5.
```
Что будет на экране
long mult(int a, b) {
  return a + b;
}
...
int a = 90;
int b = 100;

std::cout << mult(a, b) << std::endl;
```

6.
```
Такой код скомпилируеться

void print(int a, int b, int) {
  std::cout << a << b << std::endl;
}
...
int a = 90;
int b = 100;

std::cout << print(a, b) << std::endl;
```

7.
```
Что будет на экране

long calc(auto a, auto b) {
  return a + b;
}
...
int a = 90;
int b = 100;

std::cout << print(a, b) << std::endl;
```

8.
```
Такой код скомпилируеться

auto calc(int a, int b) {
  return a + b;
}

long calcSqrt(int a) {
  if (a > 0) {
    return sqrt(a);
  }
}

bool isPositiv(int a) {
  if (a > 0) {
    return true;
  } else {
    return &a;
  }
}

auto calcSumm(int a, int b, int c) -> decltype(a + b + c) {
  return a + b + c;
}

```

9.
```
Что будет на экране

void changeSign(int a) {
  if (a > 0) {
    a = -a;
  }
}
...
int a = 90;
changeSign(a);

std::cout << a << std::endl;
```

10.
```
Что будет на экране

void swap(int &a, int& b) {
  auto tmp = a;
  a = b;
  b = tmp;
}


...
int a = 90;
int b = 100;

swap(a, b);

swap(a, 100);


std::cout << a  << " " << b<< std::endl;
```

11.
```
Что будет на экране

long mul(int a, int b = 10) {
  return a * b;
}


...

std::cout << mul(2, 2) << std::endl;
```

12.
```
Что будет на экране

void SwapPtr(int* a, int* b) {
  auto tmp = a;
  a = b;
  b = tmp;
}

...

int a = 100;
int b = 200;

SwapPtr(&a, &b);
std::cout << a << b << std::endl;

SwapPtr(&a, 300);
std::cout << a << b << std::endl;

```

13.
```
Такой код скомпилируеться

void print(int* a, int& b, const int& c) {
  std::cout << a << b << c << std::endl;
}

...

int a = 90;
int b = 200;

print(&a, b, 500);
```

14.
```
Такой код скомпилируеться

void print(int a = 90, int b, int c = 200) {
  std::cout << a << b << c << std::endl;
}

...

print(100, 101, 200);
```

15.
```
Что в этом коде не так

void print(int a, int b, int c) {
  std::cout << a << b << c << std::endl;
}

...

int a = 90;
int b = 80;

print(++a, b++, a + b);
```

16.
```
Чему будет равно res
void print(int a, int b, int c) {
  std::cout << a << b << c << std::endl;
}

...

int a = 90;
int b = 80;

print(++a, b++, a + b);
```

17.
```
Чему будет равно value
int value = 500;

int& x = value;

++x;

x += 10;

std::cout << x << std::endl;
```

18.
```
Такой код скомпилируеться

int value = 500;

int& ref = value;

const int& cref = ref + 100;


```

19.
```
Чему будет равно value

int* ptr = nullptr;

int& value = *ptr;

value = 90;

```

19.
```
Что будет на экране

int& calc(int a, int b) {
  auto res = a + b;
  return res;
}

std::cout << calc(100, 20) << std::endl;
```

20.
```
Что будет на экране

const char* getString() {
  return "Hello World";
}

std::cout << (getString() + 3) << std::endl;
```

21.
```
Что будет на экране

int a = 200;

auto lambda = [&a] (int value) {
  a += value;
};

lambda(10);
lambda(10);
lambda(10);

std::cout << a << std::endl;
```

22.
```
Что будет на экране

int a = 2;
int b = 2;

auto mul = [&a, b] () {
  a *= ++b;
};

mul();

std::cout << a  << b << std::endl;
```

23.
```
#include <iostream>

static int a;

int main() {
  auto inc = []() -> int& {
    return (++a);
  };

  (++inc());
  std::cout << a  << std::endl;
  return 0;
}

```

24.
```
  int a = 100;
  int b = 300;
  auto print = [new_value = a, &b = a]() mutable {
    std::cout << ++new_value << " " << ++b << std::endl;
  };

  print();
  std::cout << a << " " << b << std::endl;

```

25.
```
Скомпилируется ли следующий код
int foo(); 
char foo();

int main() {
  return 0;
}
```

26.
```
Есть ли в коде ошибки?
void foo(int a) { 
  int& ra = a; 
  return ra; 
} 
 
int main(int argc, char* argv[]) { 
  int a = foo(3); 
 
  return 0; 
}
```
