# Unit 2 — Introduction to Computer Programming
**Course:** Fundamentals of Programming Using C – 1  
**Unit:** 2 — Introduction to Computer Programming  
**Prepared on:** 2025-09-02

## Learning Outcomes (students should be able to)
- Explain what a program is and how programs relate to software.
- Differentiate programming language types and levels (machine, assembly, high-level, 4GL).
- Describe roles of language translators: assembler, compiler, interpreter, and their phases.
- Explain program verification concepts: correctness, common bugs, and testing strategies.

---

## 2.1 Introduction to Computer Programming Language and Program
**What is a Program?**  
A program is a precise sequence of instructions written to perform a specified computation on a computer. Programs are written using programming languages and, when executed, operate on input data to produce output.

**Program vs Software:**  
- *Program* — single executable or script performing a task.  
- *Software* — collection of programs, libraries, documentation, and configuration that together provide functionality.

**Program Development Cycle (High-level):**  
1. Problem analysis → IPO → Algorithm → Pseudocode/Flowchart  
2. Write source code in chosen language  
3. Translate (compile/interpret/assemble) to executable form  
4. Test and debug  
5. Deploy and maintain

**Program Structure (generic):**  
- Declarations (variables, constants)  
- Input processing  
- Core computations / algorithms  
- Output / result display  
- Error handling & validation

---

## 2.2 Programming Languages and Levels
**Language Levels:**  
- **Machine Language (Lowest level):** Binary instructions executed directly by CPU. Fast but unreadable for humans.  
- **Assembly Language:** Mnemonic opcodes mapped to machine instructions; requires an assembler. More readable than machine code but still low-level.  
- **High-Level Languages (HLL):** Closer to human language; portable and productive (examples: C, C++, Java, Python).  
- **Very High-Level / 4GL / Domain-Specific Languages:** Designed for specific tasks (SQL for queries, MATLAB for matrix math).

**Paradigms & Categories:**  
- **Procedural / Imperative:** Sequence of statements, functions/procedures (C, Pascal).  
- **Object-Oriented:** Encapsulation, inheritance, polymorphism (C++, Java).  
- **Functional:** First-class functions, immutability (Haskell, parts of Python).  
- **Declarative / Logic:** Specify what, not how (SQL, Prolog).

**Compiled vs Interpreted languages (brief):**  
- **Compiled:** Source code is transformed into machine code (or intermediate bytecode) before execution (C, C++).  
- **Interpreted:** Source is processed and executed by an interpreter at runtime (Python, Ruby).  
- **Hybrid / JIT:** Some languages combine approaches (Java: compiled to bytecode then run by JVM; modern JS engines use JIT).

**Why language choice matters:** performance, development speed, portability, tooling, and application domain.

---

## 2.3 Language Translators
Language translators convert high-level human-readable source code into machine-executable forms. There are three primary translator types: **Assembler, Compiler, Interpreter**.

### 2.3.1 Assembler
- **Purpose:** Translate assembly language (mnemonics) into machine code (binary).  
- **Input:** Assembly source (.asm)  
- **Output:** Object code / machine code (binary), often requires a linker to produce an executable.  
- **Typical usage:** Low-level system code, embedded programs, device drivers.

### 2.3.2 Compiler
- **Purpose:** Translate entire high-level program into machine code or lower-level code (assembly or bytecode).  
- **Phases of a Compiler (high level):**  
  1. **Lexical Analysis (Scanner):** Tokenize source text into identifiers, keywords, literals, operators.  
  2. **Syntax Analysis (Parser):** Build parse tree / AST; verify language grammar.  
  3. **Semantic Analysis:** Type checking, scope resolution, verify semantic rules.  
  4. **Intermediate Code Generation:** Create an intermediate representation (IR).  
  5. **Optimization:** Improve performance/size without changing semantics.  
  6. **Code Generation:** Emit target machine code or bytecode.  
  7. **Linking:** Combine object files and libraries into executable (often a separate step).

- **Characteristics:** Typically translates whole program, faster execution after compilation, compilation step required before running, better for performance-critical applications.

### 2.3.3 Interpreter
- **Purpose:** Read and execute source code (or intermediate representation) line-by-line or statement-by-statement.  
- **Characteristic:** Immediate execution; easier interactive development and debugging.  
- **Trade-offs:** Slower execution compared to compiled machine code; good for scripting, prototyping, and REPL-based learning.

### Comparison Table (Assembler / Compiler / Interpreter)

| Feature | Assembler | Compiler | Interpreter |
|---|---:|---:|---:|
| Input language | Assembly | High-level | High-level |
| Output | Machine code | Machine code / bytecode | Direct execution |
| Translation model | One-to-one | Whole-program | Line-by-line / statement |
| Example use-cases | Firmware, boot loaders | System software, apps | Scripts, automation, education |
| Speed (execution) | Fast | Fast (after compile) | Slower (runtime) |

**Special topics:**  
- **Bytecode & Virtual Machines** (e.g., Java bytecode + JVM) sit between compilation and interpretation.  
- **Just-In-Time (JIT) compilation**: interpreter compiles frequently executed code at runtime for performance gains.  
- **Linker & Loader**: Combine compiled object files and prepare them for execution; loader places executable in memory for run-time.

---

## 2.4 Program Verification
Program verification ensures programs meet specification and behave correctly. Verification ranges from testing to formal methods.

### 2.4.1 Program Correctness
- **Informal correctness:** Program passes all designed test cases and behaves as intended for expected inputs.  
- **Formal correctness:** Mathematical proof that program satisfies its specification (preconditions, postconditions). Common in safety-critical systems (aviation, medical devices).  
- **Assertions & Invariants:** Use assertions in code to validate assumptions (e.g., `assert(n>=0)`), and loop invariants to reason about correctness.

### 2.4.2 Program Bugs & Testing
**Types of bugs / errors:**  
- **Syntax errors:** Violations of language grammar — caught by compiler/interpreter.  
- **Runtime errors:** Occur during execution (division by zero, null pointer, segmentation fault).  
- **Logical / Semantic errors:** Program runs but gives incorrect results due to wrong algorithm or off-by-one errors.  
- **Resource errors:** Memory leaks, file handle leaks, performance bottlenecks.

**Testing Strategies:**  
- **Unit Testing:** Test small units (functions) in isolation.  
- **Integration Testing:** Test combined modules for interactions.  
- **System Testing:** Test complete integrated system.  
- **Acceptance Testing:** Validate against user requirements.  
- **Regression Testing:** Re-run tests after changes to ensure no new bugs introduced.

**Test case design techniques:**  
- **Equivalence Partitioning:** Partition input domain into groups with similar behavior.  
- **Boundary Value Analysis:** Test values at the edges of input ranges.  
- **Decision Table Testing / State-Transition Testing:** For business rules and stateful systems.  
- **Negative Testing:** Provide invalid inputs to check error handling.

**Debugging Techniques:**  
- Reproduce the bug reliably.  
- Use *print/logging* statements or interactive debugging tools.  
- Narrow down by binary search (commenting out parts, creating minimal test).  
- Check recent code changes (git diff).

**Tools & Automation (conceptual):**  
- **Static analysis / Linters:** Detect potential errors before running.  
- **Unit test frameworks:** (xUnit family — e.g., CUnit for C; concept explained).  
- **Continuous Integration (CI):** Automate builds & tests on commits.

---

## Practical Classroom Activities (preview)
- Compare running a short program in an interpreter (Python) vs compiling a C program; note differences in workflow and error messages.  
- Create a simple lexical analyzer by tokenizing a small expression (paper exercise).  
- Given small programs with intentional bugs, design test cases and debug.

---

## Recommended Reading (selective)
- Compiler design overviews and simple online articles.  
- Introductory chapters of standard programming-language textbooks (the syllabus references will be used in Unit 3 onward).

---

## Quick Revision Checklist
- Can students explain the difference between compiler and interpreter?  
- Can students list compiler phases in order?  
- Can students design basic test cases using boundary value analysis?  
- Can students classify errors as syntax / runtime / logical?

---
