# Unit 1 — Phases of Problem Solving Methodology
**Course:** B.Sc. (IT) / M.Sc. (IT) — Fundamentals of Programming Using C – 1  
**Institute:** Amroli SFI Colleges (Affiliated to VNSGU)  
**Prepared on:** 2025-09-01

## Unit Outcomes (Beginner-friendly, Career-oriented)
- Explain the phases of problem analysis and problem-solving techniques.
- Write clear algorithms (using simple pseudocode) for basic computational problems.
- Draw neat flowcharts using standard symbols.
- Map algorithms and flowcharts to C language constructs (sequence, selection, iteration).

---

## 1.1 Problem Analysis
### Why Problem Analysis?
Before coding, we must understand **what** to solve and **how** success will be measured.

### Steps
1. **Gather data & identify relevant facts**  
   - Read the problem statement carefully.  
   - Extract inputs, outputs, constraints (e.g., ranges, time limits), assumptions.
2. **Define the problem (clarify scope)**  
   - Rephrase in your own words.  
   - Specify **IPO**: *Inputs → Processing → Outputs*.
3. **Generate alternative solution methods**  
   - Think of at least two approaches. Note trade-offs.
4. **Select the optimum approach**  
   - Criteria: **correctness**, **simplicity**, **time/space efficiency**, **readability**, **extensibility**.

### IPO (Input–Process–Output) Table Template
| Inputs | Processing | Outputs |
|---|---|---|
| (List all input data with types/range) | (Explain steps/calculations/logic) | (Exactly what to display/return) |

### Example A — Student Grade Calculator
- **Inputs:** Marks in 5 subjects (0–100)  
- **Processing:** Compute total, percentage; decide grade with cut-offs  
- **Outputs:** Total, Percentage, Grade (A/B/C/D/Fail)

| Inputs | Processing | Outputs |
|---|---|---|
| m1,m2,m3,m4,m5 ∈ [0,100] | sum = m1+…+m5; perc = sum/5; grade by rules | sum, perc, grade |

Grade rules (example): A ≥ 75, B ≥ 60, C ≥ 50, D ≥ 40 else Fail.

---

## 1.2 Problem-Solving Techniques
### a) Simplification
- Start with a smaller version (e.g., assume valid inputs, ignore extreme cases).  
- Build a working solution first, then add validations and edge cases.

### b) Divide & Conquer
- Break a complex task into **subproblems** (modules/functions).  
- Example: For an **electricity bill** calculator—modules for *read input*, *compute slab-wise charge*, *add taxes*, *print bill*.

### c) Constraint Examination
- Identify constraints: time, memory, accuracy, input limits.  
- Example: Searching a student roll number in a large list → prefer **binary search** if data is sorted.

---

## 1.3 Algorithm
**Definition:** A finite, ordered set of unambiguous steps that transforms inputs into outputs.

**Properties (F-D-I-O-E):**
- **Finiteness:** Must end.  
- **Definiteness:** Clear, unambiguous steps.  
- **Input:** Zero or more inputs.  
- **Output:** One or more outputs.  
- **Effectiveness:** Each step is basic and feasible.

### Representation
- **Plain language** (numbered steps).  
- **Pseudocode** (structured, language-agnostic).

### Pseudocode Style Guide (Beginner)
- Use meaningful names (total, count, max).  
- Indent blocks consistently.  
- Use `IF–ELSE`, `WHILE`, `FOR`, `REPEAT–UNTIL` for clarity.  
- Add brief comments.

### Sample Algorithms (Plain + Pseudocode)

**1) Sum of first N natural numbers**  
Plain: Read N → total=0 → for i=1..N add i → print total.  
Pseudocode:
```
READ N
total ← 0
FOR i ← 1 TO N DO
    total ← total + i
END FOR
PRINT total
```

**2) Check if a number is prime**  
Plain: Count divisors between 1 and √N; if count==0 → prime.  
Pseudocode:
```
READ N
IF N < 2 THEN
    PRINT "Not Prime"
    STOP
END IF
isPrime ← TRUE
i ← 2
WHILE i * i ≤ N DO
    IF N MOD i = 0 THEN
        isPrime ← FALSE
        BREAK
    END IF
    i ← i + 1
END WHILE
IF isPrime THEN PRINT "Prime" ELSE PRINT "Not Prime"
```

**3) Linear Search in an array**
```
READ N
READ array A[1..N]
READ key
pos ← -1
FOR i ← 1 TO N DO
    IF A[i] = key THEN
        pos ← i
        BREAK
    END IF
END FOR
IF pos = -1 THEN PRINT "Not Found" ELSE PRINT "Found at", pos
```

**4) Find largest of three numbers**
```
READ a, b, c
max ← a
IF b > max THEN max ← b
IF c > max THEN max ← c
PRINT max
```

---

## 1.4 Flowchart
### Common Symbols
- **Start/End:** Oval  
- **Input/Output:** Parallelogram  
- **Process:** Rectangle  
- **Decision:** Diamond  
- **Flow lines:** Arrows  
- **Connector:** Circle

### Rules & Tips
- Flow top-to-bottom, left-to-right.  
- Use meaningful labels.  
- Keep lines straight; avoid crossings.  
- One entry/exit per decision when possible.

### Example Flowcharts (described)
1. **Area of Circle**  
   Start → Input r → area ← 3.14*r*r → Output area → End
2. **Largest of Three Numbers**  
   Start → Input a,b,c → max←a → if b>max then max←b → if c>max then max←c → Output max → End
3. **Linear Search**  
   Start → Input N, A[1..N], key → i←1 → [i≤N?] → [A[i]=key?] yes→ print i → End; no→ i←i+1 → loop; if no after loop → print "Not Found" → End

---

## Mapping to C Language (Preview)
- **Sequence** → statements in order.  
- **Selection** → `if`, `if-else`, `switch`.  
- **Iteration** → `for`, `while`, `do-while`.  
- **Arrays** (Unit 4) for linear search examples.  
- **Strings** (Unit 5) for vowel count, palindrome check.

---

## Common Pitfalls
- Starting to code without a clear IPO/algorithm.  
- Ambiguous steps (“process data”) without specifics.  
- Ignoring edge cases (N=0, negative values, empty lists).  
- Overcomplicating first solution; not iterating.

---

## Short Glossary
- **Algorithm:** Step-by-step solution.  
- **Pseudocode:** Language-neutral representation of logic.  
- **Flowchart:** Diagram of control flow.  
- **Constraint:** Restriction on inputs/resources.

---

## Practice Checklist
- Can you convert a problem statement into an IPO table?  
- Can you write a 6–10 step algorithm for it?  
- Can you draw a neat flowchart with correct symbols?  
- Can you map it to basic C constructs?
