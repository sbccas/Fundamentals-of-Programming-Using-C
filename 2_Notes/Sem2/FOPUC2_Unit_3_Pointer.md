# Unit – 3 : Pointers in C

---

## Why Pointers Are Important

Pointers are one of the most powerful features of the C programming language. They allow programs to work directly with memory, making programs efficient and flexible. Many advanced concepts such as arrays, strings, structures, dynamic memory allocation, and functions internally rely on pointers.

Understanding pointers clearly helps students:

* Write memory-efficient programs
* Understand how arrays and strings work internally
* Use dynamic memory allocation
* Learn advanced programming concepts smoothly

---

## 3.1 Pointer Basics

### What is a Pointer?

A **pointer** is a variable that stores the **address of another variable**.

Instead of storing a value directly, a pointer stores the memory location where the value is stored.

### Key Concepts

* Every variable is stored at a unique memory address
* Pointer stores that address
* Pointer data type must match the data type of variable

### Syntax

```c
data_type *pointer_name;
```

### Example Program

```c
#include <stdio.h>

int main() {
    int a = 10;
    int *p;

    p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %u\n", &a);
    printf("Value of p = %u\n", p);
    printf("Value at address p = %d\n", *p);

    return 0;
}
```

### Explanation

* `&a` gives the address of variable `a`
* Pointer `p` stores the address of `a`
* `*p` accesses the value stored at that address
* Pointer helps indirect access to variables
* This concept is foundation for all pointer operations

---

## 3.2 Pointers and Arrays

Arrays and pointers are closely related in C. The name of an array represents the base address of the array.

### Key Points

* Array name acts as a pointer to first element
* Pointer arithmetic allows array traversal
* Efficient access without using index

### Example Program

```c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}
```

### Explanation

* `arr` points to address of first element
* `p + i` moves pointer to next elements
* `*(p + i)` accesses array values
* Pointer arithmetic increases efficiency
* Used heavily in functions and DMA

---

## 3.3 Chain of Pointers

A **chain of pointers** means a pointer pointing to another pointer.

![alt text](image.png)


### Key Concepts

* Single pointer → points to variable
* Double pointer → points to pointer
* Used in dynamic memory allocation and functions

### Example Program

```c
#include <stdio.h>

int main() {
    int a = 10;
    int *p;
    int **q;

    p = &a;
    q = &p;

    printf("Value of a = %d\n", a);
    printf("Value using p = %d\n", *p);
    printf("Value using q = %d\n", **q);

    return 0;
}
```

### Explanation

* `p` stores address of `a`
* `q` stores address of pointer `p`
* `*q` gives pointer `p`
* `**q` gives value of `a`
* Used in advanced memory handling

---

## 3.4 Pointer and Character Strings

Strings in C are stored as arrays of characters terminated by `\0`.

### Key Points

* Character pointer can point to string
* Strings can be accessed using pointer
* Efficient string handling

### Example Program

```c
#include <stdio.h>

int main() {
    char str[] = "HELLO";
    char *p = str;

    while(*p != '\0') {
        printf("%c", *p);
        p++;
    }

    return 0;
}
```

### Explanation

* `p` points to first character of string
* Loop continues until null character
* Pointer moves character by character
* This method avoids indexing
* Commonly used in string functions

---

## 3.5 Array of Pointers and Pointer to Array

### Array of Pointers

An array that stores addresses.

```c
#include <stdio.h>

int main() {
    char *names[] = {"C", "C++", "Python"};

    for(int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
```

### Pointer to Array

A pointer that points to an entire array.

```c
#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    int (*p)[3] = &arr;

    for(int i = 0; i < 3; i++) {
        printf("%d ", (*p)[i]);
    }

    return 0;
}
```

### Explanation

* Array of pointers stores addresses
* Pointer to array stores address of whole array
* Syntax is important in pointer to array
* Used in multidimensional arrays
* Helps in memory optimization

---

## 3.6 Pointer and Functions

Pointers are commonly used with functions to share data efficiently.

---

### 3.6.1 Call by Value and Call by Reference

```c
#include <stdio.h>

void value(int x) {
    x = 20;
}

void reference(int *x) {
    *x = 20;
}

int main() {
    int a = 10;

    value(a);
    printf("After Call by Value: %d\n", a);

    reference(&a);
    printf("After Call by Reference: %d\n", a);

    return 0;
}
```

### Explanation

* Call by value sends copy
* Original data remains unchanged
* Call by reference sends address
* Changes reflect in original variable
* Preferred for large data structures

---

### 3.6.2 Passing Array to Function Using Pointer

```c
#include <stdio.h>

void display(int *p, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    display(arr, 5);
    return 0;
}
```

### Explanation

* Array name passed as pointer
* Efficient memory usage
* Pointer arithmetic accesses elements
* No array copying occurs
* Used in real applications

---

## 3.7 Pointer to Structures

```c
#include <stdio.h>

struct Student {
    int roll;
};

int main() {
    struct Student s = {101};
    struct Student *p = &s;

    printf("Roll No = %d", p->roll);
    return 0;
}
```

### Explanation

* Pointer stores address of structure
* Arrow operator used to access members
* More efficient than copying structure
* Commonly used in databases
* Essential for DMA with structures

---

## 3.8 Issues with Pointers

### Common Problems

* Uninitialized pointers
* Dangling pointers
* Null pointer dereferencing
* Memory leaks
* Incorrect pointer arithmetic

### Best Practices

* Initialize pointers
* Use NULL checks
* Free allocated memory
* Avoid unnecessary pointer usage
* Debug carefully

---

## 3.9 Dynamic Memory Allocation

Dynamic memory allocation allows memory allocation at runtime.

### Common Functions

* `malloc()`
* `calloc()`
* `realloc()`
* `free()`

---

### 3.9.1 Allocating a Memory Block (malloc)

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int *)malloc(sizeof(int));
    *p = 10;
    printf("%d", *p);
    free(p);
    return 0;
}
```

### 3.9.2 Allocating Multiple Blocks (calloc)

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int *)calloc(5, sizeof(int));
    for(int i = 0; i < 5; i++)
        printf("%d ", p[i]);
    free(p);
    return 0;
}
```

---

### 3.9.3 Altering the Size of a Block (realloc)

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int *)malloc(2 * sizeof(int));
    p = (int *)realloc(p, 4 * sizeof(int));

    for(int i = 0; i < 4; i++)
        p[i] = i + 1;

    for(int i = 0; i < 4; i++)
        printf("%d ", p[i]);

    free(p);
    return 0;
}
```

---

### 3.9.4 Releasing Used Space (free)

```c
free(pointer_name);
```

### Explanation

* Releases allocated memory
* Prevents memory leaks
* Must be called after malloc/calloc/realloc
* Pointer should not be reused after free
* Good programming practice

---

## Exam-Oriented Important Questions

1. Explain pointer basics with example
2. Explain pointer and arrays
3. What is chain of pointers?
4. Explain dynamic memory allocation
5. Write short note on pointer issues

---