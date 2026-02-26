# Unit – 4 : File Management in C

---

## Why File Management is Important

Till now, most programs store data in variables and arrays. This data is temporary and lost when the program ends. File handling allows programs to store data permanently in secondary storage (hard disk). File management is essential for real-world applications such as student databases, banking systems, payroll systems, etc.

File handling in C helps students:

* Store data permanently
* Read and update stored information
* Work with large datasets
* Build real-time applications

---

# 4.1 Introduction to Files

## Definition of File

A **file** is a collection of related data stored on a secondary storage device such as a hard disk. Files allow permanent storage of information.

In C, files are handled using a special structure called `FILE`.

### Key Points

* Data stored in file remains even after program ends
* File operations are performed using pointers
* C provides standard library `<stdio.h>` for file handling
* Each file is associated with a file pointer
* File pointer connects program with file

---

## File Structure

A file in C can be viewed as a sequence of bytes. Internally, C treats files as streams of characters or binary data.

### Types of File Structure

1. Text File – Stores data in human-readable form
2. Binary File – Stores data in machine-readable format

### Explanation

* Text files store data in ASCII format
* Binary files store data in binary form
* Binary files are faster and compact
* Text files are easier to debug
* Structure depends on type of file used

---

## Concept of Record

A **record** is a collection of related data items treated as a single unit.

Example: Student record may contain roll number, name and marks.

### Explanation

* Records are commonly implemented using structures
* Each structure instance represents one record
* Records are stored in files for database applications
* Useful for real-world data management
* Records make data organized and systematic

---

# 4.2 File Access Modes

File access mode determines how a file is opened and used.

## 1. Sequential Access

Data is accessed in order from beginning to end.

* Simple method
* Suitable for text files
* Cannot directly jump to middle
* Used for logs and reports
* Most common type

## 2. Random Access

Data can be accessed at any position.

* Uses `fseek()`
* Suitable for large files
* Faster data retrieval
* Used in databases
* Allows modification at specific location

## 3. Binary Access

File opened in binary mode.

* Data stored in binary format
* Faster than text mode
* No data conversion
* Used for structures and images
* Mode example: "rb", "wb"

---

# 4.3 File Operations in C

File operations are performed using file pointer.

```c
FILE *fp;
```

---

## 4.3.1 Creating a New File

To create a file, use `fopen()` in write mode.

```c
fp = fopen("data.txt", "w");
```

### Explanation

* "w" creates new file
* If file exists, old data is erased
* Returns NULL if error occurs
* File pointer must be checked
* Used before writing data

---

## 4.3.2 Opening a File

```c
fp = fopen("data.txt", "r");
```

### Explanation

* "r" opens file for reading
* File must exist
* Returns NULL if file not found
* Multiple modes available: r, w, a, rb, wb
* Always check pointer after opening

---

## 4.3.3 Writing to a File

### Example Program

```c
#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("student.txt", "w");

    if(fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    fprintf(fp, "Hello Students\n");
    fclose(fp);
    return 0;
}
```

### Explanation

* `fprintf()` writes formatted data
* Data stored permanently
* File must be closed
* Write mode overwrites data
* Always handle errors

---

## 4.3.4 Reading from a File

```c
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("student.txt", "r");

    if(fp == NULL) {
        printf("File not found");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}
```

### Explanation

* `fgetc()` reads one character
* Loop runs till end of file
* EOF indicates end
* Useful for text files
* File must be closed after reading

---

## 4.3.5 Moving to Specific Location (fseek)

```c
fseek(fp, 5, SEEK_SET);
```

### Explanation

* Moves file pointer
* SEEK_SET → beginning
* SEEK_CUR → current position
* SEEK_END → end of file
* Used in random access

---

## 4.3.6 Closing a File

```c
fclose(fp);
```

### Explanation

* Releases file resources
* Saves data properly
* Prevents data corruption
* Mandatory after operations
* Good programming practice

---

# 4.4 Error Handling During I/O Operations

Error handling ensures safe file operations.

### Common Error Checks

* Check if `fp == NULL`
* Use `feof()` to check end of file
* Use `ferror()` to detect error
* Validate file mode
* Always close file properly

### Example

```c
if(fp == NULL) {
    printf("Error opening file");
    return 1;
}
```

---

# 4.5 Command Line Arguments

Command line arguments allow passing values to program during execution.

### Syntax

```c
int main(int argc, char *argv[])
```

### Explanation

* `argc` → argument count
* `argv` → argument vector
* argv[0] → program name
* Used for file names, inputs
* Common in system programs

---

## Example: Using Command Line Argument

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    if(argc < 2) {
        printf("No file name provided");
        return 1;
    }

    printf("File name is: %s", argv[1]);
    return 0;
}
```

---

# Complete Demonstration Program (Write & Read)

```c
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];

    fp = fopen("demo.txt", "w");
    fprintf(fp, "Welcome to File Handling\n");
    fclose(fp);

    fp = fopen("demo.txt", "r");
    while(fgets(name, sizeof(name), fp) != NULL) {
        printf("%s", name);
    }
    fclose(fp);

    return 0;
}
```

---

# Exam-Oriented Important Questions

1. What is a file in C? Explain file structure.
2. Explain different file opening modes.
3. Explain file handling functions in C.
4. Explain command line arguments with example.
5. Write short note on error handling in file operations.

---

**End of Unit – 4**
