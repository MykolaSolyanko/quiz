# Quiz

1.
```
Такой код валидный

void print(int a) {
  ++a;
  std::cout << a << std::endl;
}

void print(const int a) {
  std::cout << a << std::endl;
}

```

2.
```
Что выведет на экран

void print(int a) {
  ++a;
  std::cout << a << std::endl;
}

void print(const int* a) {
  std::cout << *a << std::endl;
}

...

print(NULL);
print(0);
```

3.
```
Такой код правильный
long calc(int a, int b) {
  return a + b;
}

double& calc(int a, int b) {
  static double res;
  res = a + b;
  return &res;
}

```

4.
```
Что мне выведет на экране

void print(int (&array)[10]) {

}

void print(char (&array)[20]) = delete;

...

char array[20] = "Hello";

print(array);
```

5.
```
Что будет выведено на экране

void print(int array[10][], size_t size_second) {
  for (size_t i = 0; i < 10; ++i) {
    for (size_t j = 0; j < size_second; ++j) {
      print("%d", array[i][j]);
  }
}

...
int array[2][2] {{1, 2}, {1, 2}};

print(array);
```

6.
```
Что будет на экране
void print(int *array) {
  size_t count = sizeof(array) / sizeof(array[0]);
  for(size_t i = 0; i < count; ++i) {
    print("%d", array[i]);
  }
}

...

int array[5] {1, 2, 3, 4, 5};
print(array);
```

7.
```
Чем отличаються эти две функции

extern "C" {
  void print(double a) {
    ++a;
    std::cout << a << std::endl;
  }
}

void print(int a) {
  std::cout << a << std::endl;
}

```

8.
```
Это валидное объявление структуры

struct {
  int a;
  int b;
} unnamed;

```

9.
```
Что чему будет проинициализировано
struct Test{
  int a;
  int b;
} unnamed;

Test test_empty;

Test test_b{};
Test test_exp{1, 2};

unnamed.a = 20;

unnamed.b = 30;

test_b = unnamed;

```

10.
```
Чему будут равны p и w
struct People;

struct Worker {
  int age = 10;
  const char *office = "Lva Tolstogo";
}

People p;

Worker w;

p = w;

```

11.
```
Чему равен размер структуры Test
struct Test {
  int a;
  long int b;
}

...

std::cout << sizeof(Test) << std::endl;

```

12.
```
Что будет на экране
enum Digit {
  FIRST,
  SECOND,
  THIRD,
  FOURTH,
  FIVE
};

std::cout << FIRST << std::endl;

std::cout << Digit::FIVE << std::endl;

Digit digit = FOURTH;

digit += FIVE;

std::cout << digit << endl;

digit = 2;

std::cout << digit << endl;
```

13.
```
Что будет на экране
enum class Digit : uunsigned int {
  First,
  Second,
  Third
};

std::cout << Digit::First << std::endl;
```

14.
```
Что будет на экране
union Vector {
  int x;
  int y;
}

Vector vec;
vec.x = 90;

std::cout << vect.y << std::endl;
```
