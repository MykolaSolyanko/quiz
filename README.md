# Quiz

1.
```
Что будет выведено на экране
std::cout << std::boolalpha;
std::cout << (10 > 20) << std::endl;

std::cout << (10 <= 20) << std::endl;
```

2.
```
Что не так в этом коде
std::cout << std::boolalpha;
uint32_t value = 40;
std::cout << (value < 0) << std::endl;
```

3.
```
Чему будет равно value

uint32_t value = 0;
std::cout << (++value > 0) && (value++ == 2) << std::endl;
```

4.
```
Такой код скомпилируеться

uint32_t value = 15;

std::cout << (value = 15) || (value++ >= 15) << std::endl;
```

5.
```
Такой код скомпилируеться

uint32_t value = 0;

std::cout << (++value > 0) || (value++ = 2) << std::endl;
```

6.
```
Что будет на выходе

//0b0000'0011
uint32_t value1 = 3;
//0b0000'0100
uint32_t value2 = 4;

std::cout << (value1 | value2) << std::endl;
```

7.
```
Что будет на выходе

//0b0000'0011
uint32_t value1 = 3;

std::cout << (value1 >> 1) << std::endl;
```

8.
```
Что делает эта операция
uint32_t value1 = 4;

std::cout << (value1 & 1) << std::endl;
```

9.
```
Что не так в этом коде
uint32_t value1 = 0;
uint16_t value2 = ~value1;

std::cout << value2 << std::endl;
```

10.
```
Что будет выведено на экран
char ch = 'A';
++ch;
++ch;

std::cout << ch << std::endl;
```

11.
```
что будет на экране
unsigned a = 40;

std::cout << (++a, a++) << std::endl;
```

12.
```
что будет на экране

std::cout << (5 % 10) << std::endl;
```

13.
```
Этот код валидный
if (int a = 40) {
  std::cout << a << std::endl;
}
```

14.
```
Что будет на экране
int value = 41;

if (value == 40)
  if (++value > 40)
    std::cout << "Hello World" << std::endl;
else
  std::cout << "Another branch" << std::endl;

```

15.
```
Что будет на экране
int value = 41;

switch(value) {
  case 1:
    std::cout << "1" << std::endl;
    break;
  case 2:
    std::cout << "2" << std::endl;
    break;
  case 41:
    std::cout << "41" << std::endl;
  case 3:
    std::cout << "3" << std::endl;
    break;
  default:
    break;
}

```

16.
```
Эти два оператора одинаковые
int value = 41;

switch(value) {
  case 1:
    std::cout << "1" << std::endl;
    break;
  case 2:
    std::cout << "2" << std::endl;
    break;
  case 41:
    std::cout << "41" << std::endl;
  case 3:
    std::cout << "3" << std::endl;
    break;
  default:
    break;
}

if (value == 1) {
  std::cout << "1" << std::endl;
} else if (value == 2) {
  std::cout << "2" << std::endl;
} else if (value == 41) {
  std::cout << "41" << std::endl;
} else if (value == 3) {
  std::cout << "3" << std::endl;
}
```
17.
```
Что не так в этом коде
int value = 20;
switch(value) {
  case 20:
   std::cout << "branch 20 " << std::endl;
   break;
  int a = 50;
   case 40:
   std::cout << "branch 40 " << a << std::endl;
   break;
}
```

18.
```
Что не так в этом коде и что будет ннапечатано на экране
int value = 20;
int a = 1;
switch(value) {
  a++;
  case 20:
   std::cout << "branch 20 " << std::endl;
  a++;
  case 40:
   std::cout << "branch 40 " << a << std::endl;
   break;
}
```

19.
```
Такое будет компилироваться

int value = 1;
int a = 1;
switch(value) {
  case 20:
    std::cout << "branch 20 " << std::endl;
    break;
  case a:
    std::cout << "branch 40 " << a << std::endl;
    break;
}
```

20.
```
Что будет выведено на экран

const int value_count = 525;

for (uint8_t i = 0; i < value_count; ++i) {
  std::cout << static_cast<int>(i) << std::endl;
}
```

20.
```
Это валидный код

int value = 255;

for (; --value;) {
  std::cout << value << std::endl;
}
```
