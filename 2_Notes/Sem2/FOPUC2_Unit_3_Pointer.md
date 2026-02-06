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

#### What is Chain of Pointers in C?

A **chain of pointers** means a pointer pointing to another pointer.

A **chain of pointers** in C is a series of pointers that point to each other. A pointer variable can store the address of another variable which can be of any type, including another pointer, in which case it is called a **pointer to pointer**.

A chain of pointers is when there are multiple levels of pointers. Theoretically, there is no limit to how many levels the chaining can be done, as shown in the following diagram −

![alt text](image.png)

As shown in the diagram, variable 'a' is a normal integer variable which stores integer value 10 and is at location 2006. 'ptr1' is a pointer variable which points to integer variable 'a' and stores its location i.e. 2006, as its value. Similarly ptr2 points to pointer variable ptr1 and ptr3 points at pointer variable ptr2. As every pointer is directly or indirectly pointing to the variable 'a', they all have the same integer value as variable 'a', i.e. 10

Declaration of Chain of Pointers
This can be represented by the following code −

```c
int a = 10;
int *x = &a;
int **y = &x;
int ***z = &y;
```
In the above example, "x" is a pointer to an "int" type, as the notation "int *" indicates. To store the address of "x" in "y", it should be a pointer to a pointer to int, i.e., "int **".

Similarly, "z" is a "pointer to a pointer to a pointer" to int, hence the asterisk appears thrice in its declaration, i.e., "int ***".

#### How Does the Dereferencing Work?
We know that "*x" returns the value at the address stored in "x", i.e., the value of "a".

Going by the same logic, "*y" should return its value (refer to the above diagram) which is 1000, which in turn is the address of "a". Hence, the double dereferencing of "y" (i.e., "**y") should give you the value of "a".

Further, a triple referencing of "z" as "***z" should give the value of "a".

Let's understand better with below given code:
The following example shows how "double dereferencing" and "triple dereferencing" work −

```c
#include <stdio.h>

int main(){

   int a = 10;

   int *x = &a;
   int **y = &x;
   int ***z = &y;

   printf("a: %d\n", a);

   printf("a: %d\n", *x);   // dereferencing x;
   printf("a: %d\n", **y);  // double dereferencing y;
   printf("a: %d\n", ***z); // triple dereferencing z;

   return 0;
}
```
Output

Notice that all the three cases of dereferencing print the value of "a" −

a: 10

a: 10

a: 10

a: 10

Updating the Original Variable by Dereferencing
We can also update the value of the original variable by dereferencing. Take a look at the following statement −

```c
*x = 11.25;
```
It will change the value of "a" accordingly. Similarly, it can be updated with the pointer at subsequent levels.

#### Example:

The following program shows how you can update the original variable using different levels of dereferencing −

```c
#include <stdio.h>

int main(){

   float a = 10.25;;

   float *x = &a;
   float **y = &x;
   float ***z = &y;

   printf("a: %f\n", a);

   // update with first pointer
   *x = 11.25;
   printf("a: %f\n", *x);

   // update with second pointer
   **y = 12.25;
   printf("a: %f\n", **y);

   // update with third pointer
   ***z = 13.25;
   printf("a: %f\n", ***z);

   return 0;
}
```
Output

Run the code and check its output −

a:10.250000

a:11.250000

a:12.250000

a:13.250000

#### A Chain of Character Pointers

A string is represented as an array of "char" type or a pointer to "char" type −

```c
char *a = "Hello";
```
Hence, we can create a chain of char pointers.

Note: The only difference is, here the original variable itself is a pointer, so the upper-level pointers have one asterisk more, as compared to the earlier examples.

##### Example

The following example shows how a chain of character pointers works −

```c
#include <stdio.h>

int main(){

   char *a = "Hello";

   char **x = &a;
   char ***y = &x;
   char ****z = &y;

   printf("a: %s\n", a);
   printf("a: %s\n", *x);
   printf("a: %s\n", **y);
   printf("a: %s\n", ***z);

   return 0;
}
```
Output

When you run this code, it will produce the following output −

a: Hello

a: Hello

a: Hello

a: Hello

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

More Ref:
https://www.tutorialspoint.com/cprogramming/c_character_pointers_and_functions.htm

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