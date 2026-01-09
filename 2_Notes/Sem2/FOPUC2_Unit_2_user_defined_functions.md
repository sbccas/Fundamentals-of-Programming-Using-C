# Unit – 2 : User Defined Functions

## Why This Unit Is Important

In earlier units, most programs were written entirely inside the `main()` function. This approach works only for very small programs. As program size increases:

- Code becomes lengthy and difficult to understand
- Debugging becomes complex
- Reuse of logic is not possible

**User Defined Functions** help overcome these problems by dividing a program into smaller, logical, and manageable blocks.

**Real-life Analogy:**
A college functions efficiently because work is divided among the Principal, Faculty, Office Staff, and Accounts Department. Similarly, a program works efficiently when tasks are divided into functions.

---

## 2.1 Introduction to User Defined Functions

### What is a Function?
A **function** is a self-contained block of code designed to perform a specific task. Once defined, it can be called multiple times from anywhere in the program.

### Types of Functions in C

1. **Library Functions**  
   Predefined functions provided by C libraries.  
   Examples: `printf()`, `scanf()`, `strlen()`, `sqrt()`

2. **User Defined Functions**  
   Functions created by the programmer to perform customized tasks.

### Advantages of Using Functions

- Code reusability
- Improved readability
- Easy debugging and testing
- Supports modular programming

---

## 2.2 Declaration, Definition and Call of Functions

Every function in C has **three important parts**:

1. Function Declaration (Prototype)
2. Function Definition
3. Function Call

---

### 1️⃣ Function Declaration (Function Prototype)

The function declaration informs the compiler about:

- Name of the function
- Return type
- Number and type of parameters

**Syntax:**
```c
return_type function_name(parameter_list);
```

**Example:**
```c
int add(int, int);
```

---

### 2️⃣ Function Definition

The function definition contains the actual logic of the function.

**Syntax:**
```c
return_type function_name(parameters) {
    statements;
    return value;
}
```

**Example:**
```c
int add(int a, int b) {
    return a + b;
}
```

---

### 3️⃣ Function Call

A function is executed when it is called.

**Example:**
```c
sum = add(10, 20);
```

---

### Complete Program Example

```c
#include <stdio.h>

int add(int, int);   // function declaration

int main() {
    int result;
    result = add(5, 7);   // function call
    printf("Sum = %d", result);
    return 0;
}

int add(int a, int b) {   // function definition
    return a + b;
}
```

**Explanation:**
- Control starts from `main()`
- `add()` function is called
- Value returned by `add()` is stored in `result`

---

## 2.3 Methods of Parameter Passing

Parameters are used to pass data to functions. C supports two methods:

### 1️⃣ Call by Value

- A copy of the actual value is passed to the function
- Changes made inside the function do **not** affect the original variable

**Example:**
```c
#include <stdio.h>

void change(int x) {
    x = 50;
}

int main() {
    int a = 10;
    change(a);
    printf("a = %d", a);
    return 0;
}
```

**Output:**
```
a = 10
```

✔ Safe method  
❌ Cannot modify original data

---

### 2️⃣ Call by Reference

- Address of variable is passed
- Changes inside the function affect original variable
- Uses pointers

**Example:**
```c
#include <stdio.h>

void change(int *x) {
    *x = 50;
}

int main() {
    int a = 10;
    change(&a);
    printf("a = %d", a);
    return 0;
}
```

**Output:**
```
a = 50
```

✔ Efficient  
✔ Used for arrays and structures

---

## 2.4 Scope of Variables and Storage Classes

### Scope of Variables

**Scope** defines the region of a program where a variable is accessible.

#### Types of Scope

1. **Local Variable**  
   Declared inside a function and accessible only within that function

2. **Global Variable**  
   Declared outside all functions and accessible throughout the program

**Example:**
```c
int g = 100;   // global variable

void show() {
    int x = 10;  // local variable
    printf("%d", x);
}
```

---

### Storage Classes

Storage classes define:
- Scope
- Lifetime
- Storage location of variables

| Storage Class | Keyword  |
|--------------|----------|
| Automatic    | auto     |
| Register     | register |
| Static       | static   |
| External     | extern   |

---

### Static Variable Example

```c
#include <stdio.h>

void count() {
    static int c = 0;
    c++;
    printf("%d ", c);
}

int main() {
    count();
    count();
    count();
    return 0;
}
```

**Output:**
```
1 2 3
```

✔ Value of static variable is preserved between function calls

---

## 2.5 Recursion

### What is Recursion?

Recursion is a technique where a function calls itself.

### Mandatory Conditions for Recursion

1. Base condition (termination condition)
2. Recursive call

---

### Example: Factorial Using Recursion

```c
#include <stdio.h>

int fact(int n) {
    if(n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    printf("Factorial = %d", fact(5));
    return 0;
}
```

**Explanation:**
`fact(5)` → `5 * fact(4)` → `4 * fact(3)` → ... → `fact(0)`

Recursion stops at base condition.

---

## 2.6 Passing Array to Functions

- Arrays are always passed by reference in C
- Only base address is passed

**Example:**
```c
#include <stdio.h>

void display(int a[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    display(arr, 5);
    return 0;
}
```

✔ Efficient
✔ No duplication of array data

---

## 2.7 Passing Structure and Union to Functions

### Passing Structure to Function (Call by Value)

```c
struct Student {
    int roll;
};

void show(struct Student s) {
    printf("%d", s.roll);
}
```

---

### Passing Structure by Reference

```c
void show(struct Student *s) {
    printf("%d", s->roll);
}
```

---

### Passing Union to Function

```c
union Data {
    int x;
};

void display(union Data d) {
    printf("%d", d.x);
}
```

---

## Exam-Oriented Important Questions

1. Explain call by value and call by reference with example
2. What is recursion? Explain with suitable example
3. Explain scope of variables and storage classes
4. Explain passing array to function
5. Explain passing structure to function

---

**End of Unit – 2**

