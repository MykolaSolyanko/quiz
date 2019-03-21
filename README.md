# Quiz
1. 

```cpp
это валидный код

value int;

```

2.

```cpp
в чем разница между этими переменными

int value1;
short value1;

long long value3;

unsigned value3;

```

3.

```cpp

что будет в переменной
uint8_t value1 = 65535;

```


4.

```cpp

что напечатает
char A = 65;

std::cout << A << std::endl;

```

5.

```cpp

коректное объявление
void value = 65;

```

6.

```cpp

в чем разница 
int value1;
float  value2;
double value3;
long double value4;
```

7. 
```cpp

float value{2.1};

в памяти храниться также как мы написали?
```

8.
```cpp

что неправильно в этом коде

float value{2.1};

int value3 = value;
```

9.
```cpp

в чем разница


int value1;
unsigned value2 = 10;

чему будет равно
int value3 = int();

int value4 = int(10);

```

10.

```cpp
Что это за оператор и чем отличаеться от обычной инициализации
int value{42};

```

11.

```cpp
Такое скомпилиться
int8_t value{65535};

int value{1.5f};
```

12.

```cpp

Какого типа будет переменные
auto value1 = 10;
auto value2 = 10.3;
auto value3 = 10.3f;

Такой код компилиться

auto value4;
```

13
```cpp

Какого типа будет переменная value2 
auto value1 = 10;

decltype(value1) value2;
```

14
```cpp
Этот код скомпилиться
const int a = 10;

a = 20;

const int value2;
```

15
```cpp
Этот код скомпилиться

int a = 40
const int const_value = a;

constexpr int const_value_expr = a;

const_value_expr = 40;
```

16
```cpp
Что не так в этом коде

#include <stdio.h>
int a = 90;

int main(int argc, char const *argv[])
{
  int a = 10;
  int a = 40;
  {
      int a = 50;
  }
}
```

17
```cpp
Чему будет равно a

#include <stdio.h>
int a = 90;

int main(int argc, char const *argv[])
{
  int a = 40;
  printf("%d", ::a);
}
```

17
```cpp
Такой код скомпилиться

#include <stdio.h>
int a = 90;

static int a = 300;
int main(int argc, char const *argv[])
{
  printf("%d", a);
}
```

17
```cpp
Чем отличаеться следующий код 

double value1{1.44};

int value2 = value1;

int value3 = (int)value1;

int value3 = static_cast<int>(value1);

```

18

```cpp
Такой код скомпилиться

double value2 = 10;

static_cast<int>(value2) = 40;

((int)value2) = 50;

20 = 50;

(value + 20) = 90; 
```

19
```cpp
Чем плох такой код

int value1 = ...;
int value2 = ...;

int value = value1 + value2;
```

20

```cpp
Что не так в этом коде

float a = 1/ 3;

int value = 1 / 0;
```

21

```cpp

Что получим на экране

std::cout << (6 + 10 / 2 ) << std::endl;
```

22.
```cpp

Скомпилируеться

int a = 5;
int b = 6;

a++ = ++b;

```

