# Quiz

1.
```
Следующее объявлнеия коректное
int array[10];

```

2.
```
Следующее объявлнеия коректное
int array[];

```

3.
```
Следующее объявлнеия коректное
size_t array_size = 100;
int array[array_size];

```


4.
```
Следующее коректное
int array[10] {};
int array1[10] {1,};
int array2[10] {,,2};
int array3[] {};
int array4[] {1, 2, 3};
int array4[2] {1, 2, 3};
int array5[2 + 3 + 5] {1, 2, 3};
```

5.
```
Следующее коректное
int array4[2] {1, 2, 3};
std::cout << array4 << std::endl;
```

6.
```
В чем разница
char array1[] = "Hello";
char array2[] = {'H', 'e', 'l', 'l', 'o'};
char array3[] = {"Hello"};
```

7.
```
Это валидный код
const int array[] = {1, 2, 3};
array[0] = 25;
```

8.
```
Это валидный код
const int array[4];
array[0] = 25;
```

9.
```
Валидный код
int array[4];
size_t count = sizeof(array);
assert(4 == count);

char array[] = "test";
size_t count = sizeof(array);
assert(4 == count);
```

10.
```
Валидный код
int array[] {1, 2, 3, 4};

std::cout << array[1] << array[4] << st::endl;
```

11.
```
что в это цикле не так
size_t length = 10;

int array[length] {1, 2, 3, 4};
for (int i = 0; i < length; ++i) {
  std::cout << array[i];
}
```

12.
```
Этот код валидный
char str[] = "Hello";

for (sizet_t i = 0; str[i];) {
  std::cout << str[++i];
}
```

13.
```
Этот код валидный
int array[4] {3, 4};
int array2[4] {5, 7};

array2 = array;

for( auto value : array2) {
  std::cout << value;
}
```

14.
```
что будет напечатанно на экране
  int array3D[3][3][3] = {
                          {{1,2,3}, {4,5,6}, {7,8,9}},
                          {{10,11,12}, {13,14,15}, {16,17,18}},
                          {{19,20,21}, {22,23,24}, {25,26,27}}
                         }; // инициализация двумерного массива

std::cout << array3D[0][1][2];
```


15.
```
что будет на экране

int array2[][] = {{1,2,3}, {4,5,6}, {7,8,9}};

std::cout << array2[1][1];
```

16.
```
что будет на экране

int *ptr, ptr1, ptr2;

ptr2 = 0;

std::cout << *ptr2;
```

16.
```
  const int *ptr;
  int value = 90;
  ptr = &value;
  ++*ptr;
  std::cout << *ptr;
```

17.
```
  int value = 300;

  int *ptr = &value;

  const int *const ptr2;

  ptr2 = ptr;
```

18.
```
  int array[10] {1};
  int *ptr_begin = array - 1;
  int *ptr_end = array + 10;

  while(ptr_begin != ptr_end) {
    std::cout << *ptr_begin++ << std::endl; 
  }
```

19.
```
  int array[10] {1};

  for (size_t i = 0; i < 10; ++array) {
    std::cout << array[i] << std::endl; 
  }
```

20.
```
  int value = 30;
  void * ptr = &value;
  std::out << *ptr << std::endl;

  int array[3] {1, 2, 3};

  ptr = array;
  std::cout << ptr[2] << std::endl
```

21.
```
Что будет выведено на экран
    int a[5] = { 4, 5, 2, 3, 1 }; 
    int i = *a; 
 
    for (;i;) 
        std::cout << i--[a];

Варианты:
- ошибка компиляции
- 3254
- 1 3 2 5
```

21.
```
Что будет выведено на экран

#define ELEMENT_COUNT(a) (sizeof(a)/sizeof(a[0])) 

    int a[5] = { 4, 5, 2, 3, 1 }; 
    int *ptr = a;
 std::cout << ELEMENT_COUNT(a);
 std::cout << ELEMENT_COUNT(ptr);
```

22.
```
Чему равно знчение переменной res
#define F(x) (2*x*x) 
 
int main() { 
    int a = 1, b = 2; 
    int res = F(a + b); 
    return 0; 
} 
```

23.
```
Что напечатает программа
cout << "Hello, World!" + 3 << endl;
```

24.
```
Откомпилируеться ли данный код
int main() 
{ 
    int h = int(); 
    const int* i = int(); 
    int const* j = int(); 
    int* const k = &h;  
 
    ++i;  //1  
    ++j;  //2  
    ++k;  //3  
    ++*k; //4  
}

Если нет то в какой из строччек ошибка
```