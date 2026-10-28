# Antigravity Project Instructions & Permanent Git Commit Policy
# Repository: industrial-programming-lab (https://github.com/Aditya-5560/industrial-programming-lab)

## 1. Core Operating Principles & Mandatory Architecture Rules
1. **The concept-first folder structure is mandatory:** The primary classification criterion is the program's actual learning objective, not its programming language. C, C++, Java, and JavaScript implementations of the same topic live together under that topic.
2. **Language subfolders are determined by the file's actual programming language:** Under each concept directory, use `c/`, `cpp/`, `java/`, or `js/` as appropriate. Never create empty language subfolders unnecessarily.
3. **The primary concept determines the category:** First determine what the program teaches, then select the concept directory, and finally select the language subfolder.
4. **CRITICAL: Java does not automatically mean Core Java:** The `10-core-java/java/` directory is EXCLUSIVELY for programs whose primary learning objective is a Core Java language feature or concept. Programs must go into their concept-specific directories when their primary objective is something else (e.g. logic building, arrays, strings, recursion, data structures, searching/sorting, collections, file I/O, networking, threads, OOP design, design patterns).
5. **Universal application:** These rules apply to archive migrations, batch imports, and all future daily files placed in `daily-inbox/`.
6. **Strict source-code and existing file preservation:** Never rewrite, reformat, or fix user code. Existing committed files and sequential numbering are permanent; never rename or renumber committed files.
7. **No silent guesses:** Ambiguous cases must be reported in the organization report and left in `daily-inbox/` rather than guessed.
8. **Organization does not authorize commits or pushes:** File movements and staging are strictly separate from Git commits and pushes.
9. **Mandatory Conventional Commits:** Commits must follow the repository's meaningful Conventional Commit policy (strict differentiation of `feat`, `refactor`, `test`, `fix`, `docs`, `chore`).
10. **Explicit user authorization required:** Commit and push operations strictly require explicit user instructions.

## 2. Daily Inbox Staging & Organization Workflow
- **Inbox Location:** `daily-inbox/`
- **Commands:**
  - `Check today's organization` (DRY-RUN):
    - Scan `daily-inbox/`, analyze concepts, check for duplicates, propose target paths, and assign confidence levels (High/Medium/Ambiguous).
    - DO NOT move, rename, modify, commit, or push any files.
  - `Organize today's programs`:
    - Process high-confidence programs.
    - Dynamically create language subfolders (`c/`, `cpp/`, `java/`, `js/`) under concept folders when needed.
    - Rename newly added programs:
      - **C/C++ programs:** use the next available sequential number in that folder (`NN-descriptive-name.c` / `NN-descriptive-name.cpp`).
      - **Java programs:** use PascalCase without numeric prefixes (`DescriptiveName.java`), following Section 6.
      - **JavaScript programs:** use the next available sequential number in that folder (`NN-descriptive-name.js`), lowercase and hyphen-separated, following Section 7.
    - Move files from `daily-inbox/` to target folders.
    - Update `PROGRESS.md` with verified counts across all supported languages (C, C++, Java, JavaScript) and compartments.
    - DO NOT resolve ambiguities silently; leave ambiguous files in `daily-inbox/` and ask the user.
- **Never Renumber Existing Files:** Once a file is committed, its filename remains permanent. Never rename existing `01-`, `02-`, etc., files just to sort or rearrange.
- **Duplicate Detection:** Flag exact duplicates or likely duplicates; never delete or overwrite automatically. For assignment questions, enforce Section 8: upload only programs that introduce different logic, problem domains, or structural architectures.

## 3. Mandatory Concept-First Category Mapping

| Category | Primary Learning Objective | Example Topics | Language Subfolders |
|---|---|---|---|
| `01-logic-building/` | Conditionals, loops, math logic, validation, flow control, number problems, patterns | Addition, factors, prime, perfect numbers, digits, reverse number, pattern grids | `c/`, `cpp/`, `java/`, `js/` |
| `02-arrays-and-matrices/` | 1D/2D array operations, traversals, matrix manipulation | Array summation, min/max, linear search, matrix transformations, transpose, jagged arrays | `c/`, `cpp/`, `java/`, `js/` |
| `03-strings/` | Character arrays, string algorithms, parsing, tokenization | Character count, toggle case, string reverse, palindrome, anagram, word count | `c/`, `cpp/`, `java/`, `js/` |
| `04-bit-manipulation/` | Bitwise ops, masking, binary logic | Bitwise `&`, `\|`, `^`, `<<`, `>>`, mask generation, check bit on/off, toggle bit | `c/`, `cpp/`, `java/`, `js/` |
| `05-memory-management/` | Pointers, pointer arithmetic, dynamic memory | `malloc`, `calloc`, `realloc`, `free`, pointer referencing, call by address | `c/`, `cpp/` |
| `06-structures-and-generic-programming/` | Structs, unions, function pointers, C++ templates | Struct memory layout, packing, `template<class T>`, generic functions | `c/`, `cpp/`, `java/`, `js/` |
| `07-recursion/` | Recursive problem decomposition, call stack mechanics | Recursive display, factorial, digit sum, recursive string reversal | `c/`, `cpp/`, `java/`, `js/` |
| `08-data-structure-implementation/` | Core data structures built from scratch | SinglyLL, DoublyLL, CircularLL, Stack, Queue, Binary Search Tree | `c/`, `cpp/`, `java/`, `js/` |
| `09-searching-and-sorting/` | Search algorithms and comparative sorting | Linear search, binary search, bubble sort, selection sort, insertion sort | `c/`, `cpp/`, `java/`, `js/` |
| `10-core-java/` | Core Java language features and JVM mechanics exclusively | Classes, objects, constructors, access modifiers, method overloading, interfaces, exception handling, command-line arguments | `java/` |
| `11-java-collections/` | Java Collections Framework standard containers | `ArrayList`, `LinkedList`, `HashSet`, `TreeSet`, `HashMap`, `Hashtable`, `Iterator` | `java/` |
| `12-file-and-system-programming/` | Streams, binary I/O, system utilities, virtual file systems | C file system calls (`open`, `read`, `write`, `lseek`), CVFS, Java file streams | `c/`, `cpp/`, `java/`, `js/` |
| `13-network-programming/` | Sockets, TCP/UDP client-server implementations | ServerSocket, Socket, multi-client chat server, socket APIs in C | `c/`, `cpp/`, `java/`, `js/` |
| `14-multithreading/` | Concurrency, synchronization, locks, thread pools | Java `Thread`, `Runnable`, `synchronized`, C `pthread` | `c/`, `cpp/`, `java/`, `js/` |
| `15-object-oriented-design/` | Advanced OOP design, SOLID principles, domain modeling | StudyTracker entity architecture, class modeling, encapsulation hierarchies | `java/`, `js/` |
| `16-design-patterns-and-lld/` | GoF design patterns, low-level design case studies | ParkingLot Automation (Factory, Observer, Strategy, Singleton), Packer-Unpacker, Custom DBMS | `java/`, `js/` |

## 4. Permanent Git Commit Convention & Type Policy

### A. Mandatory Commit Type Selection (Never Default to "feat")
Never default every commit to `feat`. Inspect the actual code diffs and select the type that truthfully reflects the nature of the change:

1. `feat` — New Concepts and Implementations:
   - Use strictly when introducing a brand-new algorithm, data structure, or language capability that has not previously been implemented in the relevant module.
   - Examples:
     - `feat(bit-manipulation): implement fourth-bit inspection using bitwise mask`
     - `feat(trees): implement binary search tree node insertion`
     - `feat(arrays): implement array rotation using reversal algorithm`
   - **Do NOT use `feat`** merely because a new file or practice program has been added. The program must represent a genuinely new concept or implementation within the relevant module.

2. `refactor` — Architectural Evolutions:
   - Use when restructuring or evolving an existing solution without introducing a new problem statement or genuinely new core concept.
   - This includes:
     - Moving inline business logic from `main()` into a dedicated helper function.
     - Migrating procedural functions into OOP helper classes or instantiated objects.
     - Transforming a single-file program into a multi-file header/source architecture.
     - Restructuring an existing implementation while preserving its intended behavior.
   - Examples:
     - `refactor(arithmetic): extract inline addition into a helper function`
     - `refactor(java-oop): migrate static arithmetic methods into an instantiated object`
   - **Do NOT use `refactor`** for a completely new implementation that introduces a genuinely new concept.

3. `test` — Testing and Verification:
   - Use when adding test cases, assertion drivers, boundary-testing matrices, or test harnesses.
   - Examples:
     - `test(arithmetic): add assertion cases for boundary values`
     - `test(modular-addition): add automated unit test harness using assert`
   - **Do NOT use `test`** simply because a program was compiled or manually executed.

4. `fix` — Error and Flaw Corrections:
   - Use when correcting an actual bug or demonstrating the correction of an intentional logical flaw.
   - Examples:
     - `fix(conditionals): correct logical operator flaw in three-number maximum`
     - `fix(arrays): correct off-by-one error in array traversal`
   - **Important:** Educational learning programs may intentionally contain mistakes. Never fix them automatically during organization. Use `fix` only when the user has actually made or requested a correction.

5. `docs` — Documentation Only:
   - Use strictly when changes are limited to repository documentation (`README.md`, `PROGRESS.md`, `ROADMAP.md`, or other Markdown docs).
   - Examples:
     - `docs(progress): update completed program count`
     - `docs(readme): clarify repository structure`
   - **Do NOT use `docs`** for commits that also introduce or modify source-code implementations.

6. `chore` — Maintenance and Housekeeping:
   - Use for repository organization and maintenance that does not introduce a new implementation or change program behavior.
   - Examples:
     - `chore(organization): reclassify input buffer programs`
     - `chore(organization): organize daily programs into concept folders`
     - `chore(config): update repository instructions`
   - Use `chore` for file movements, naming-only changes, folder restructuring, and maintenance of project rules.

### B. Decision Rules for Mixed Changes & Batches
When a batch contains multiple kinds of changes:
1. Inspect every relevant diff before selecting commit types.
2. Group changes into logically coherent commits according to their purpose and type.
3. Use separate commits when changes represent meaningfully different types or concepts (e.g. separate a new feature from an architectural refactoring from test cases).
4. If a single coherent change genuinely includes inseparable activities, select the type that best represents its primary purpose.
5. Never force unrelated changes into one commit simply to reduce commit count.
6. Never create one commit per file by default.
7. Do not create artificial commits just to use every available type.
8. If no listed type accurately describes a change, ask the user before inventing a new convention.

### C. Specific Scopes and Descriptions
Format: `<type>(<scope>): <specific description>`

- **Scope Selection:** Choose a scope that accurately identifies the concept or area changed, derived from the actual code rather than blindly copying the parent folder name.
  - Allowed scopes include: `arithmetic`, `arrays`, `strings`, `bit-manipulation`, `memory`, `conditionals`, `functions`, `pointers`, `recursion`, `linked-list`, `trees`, `java`, `java-oop`, `javascript`, `collections`, `threads`, `sockets`, `progress`, `organization`, `architecture`, `validation`.
- **Description Quality:**
  - Concise, specific, technically accurate, imperative mood.
  - Use clear action verbs: `implement`, `demonstrate`, `extract`, `correct`, `add`, `update`, `reclassify`.
  - **FORBIDDEN Generic Phrases:**
    - `add foundational programs`
    - `update programs`
    - `add daily work`
    - `add multiple files`
    - `update logic building`
    - `add practice programs`
    - `feat(logic-building)` used indiscriminately for every file.
  - Never claim a bug was fixed or a test passed unless supported by actual verified changes.

### D. Safety & Approval Gates
- Organizing files does NOT authorize committing or pushing.
- Commits require explicit user instruction (e.g., `"Commit today's work"`).
- Pushes require explicit user instruction (e.g., `"Commit and push today's work"` or `"Push to GitHub"`).
- Always verify working tree (`git status`) before staging.
- Never stage binary executables (`myexe`, `testexe`, `a.out`), build artifacts (`.o`, `.class`), IDE files (`.vscode/`), system metadata (`.DS_Store`), or credentials/secrets.
- NEVER force-push or rewrite remote Git history.

## 5. Non-Intrusive Permission & Batch Review Policy
- Never call view_file on individual incoming files one by one when scanning daily-inbox, as this prompts the IDE for per-file approval repeatedly.
- Always inspect, analyze, and process incoming files in daily-inbox as a single unified batch operation.
- Both /Users/aditya/Desktop/LB and /Users/aditya/industrial-programming-lab are registered project resources. Treat all files within both directories as trusted project files.

## 6. Java Naming & Strict Source-Code Preservation Policy

### A. Java Filename Convention
- **No leading numbers or numeric suffixes:** Do NOT use leading numbers (`NN-`) or unnecessary numeric suffixes in Java filenames.
- **Specific PascalCase names:** Use specific, meaningful PascalCase filenames describing the program's actual purpose.
  - Examples: `DisplayMessage.java`, `AdditionWithUserInput.java`, `ArrayTraversalUsingLoop.java`, `ReverseStringUsingRecursion.java`.
  - Avoid generic names such as `Program1.java`, `Example2.java`, or `Test3.java`.
  - Do NOT use a numeric suffix merely to distinguish programs. Choose a more descriptive name based on the actual implementation.
- **Class/File Alignment:** Ensure that a public top-level Java class has exactly the same name as its filename, including capitalization.

### B. Strict Source-Code Preservation (Explicitly Permitted Modifications ONLY)
Your source code must remain unchanged except for the explicitly permitted naming modifications below.

**Antigravity is authorized to:**
1. Rename the Java source file.
2. Rename the corresponding class identifier when necessary to match the new filename.
3. Update constructor names or direct references that must change solely because of that class rename, but only when necessary to keep the program consistent.

**Antigravity is NOT authorized to make ANY other code changes during organization:**
- Do NOT add, remove, or modify `public`, `private`, `protected`, `static`, or any other access modifier or keyword.
- Do NOT add or remove `public` from the main class.
- Do NOT change the `main` method signature or its access modifiers.
- Do NOT fix syntax errors, compilation errors, bugs, or warnings.
- Do NOT change program logic, algorithms, conditions, loops, variables, data types, or method implementations.
- Do NOT reformat code, change indentation, or modify whitespace.
- Do NOT add, remove, or rewrite comments.
- Do NOT add imports, remove imports, or change package declarations.
- Do NOT optimize code or apply coding standards automatically.
- Do NOT add missing code or invent functionality.

### C. Preserve the User's Learning Process
- These are learning programs written independently. Imperfect code, omitted modifiers, or unusual formatting must be preserved honestly without assuming imperfect code needs correction.
- **Example 1:** If the code is `class Program1 { ... }` and the descriptive filename is `DisplayMessage.java`, Antigravity may rename the class to `class DisplayMessage { ... }`. It must NOT change this to `public class DisplayMessage` (adding `public` would be an unauthorized modification).
- **Example 2:** If the code originally has `public class Program1 { ... }`, the renamed declaration should be `public class DisplayMessage { ... }`.

### D. Handling Ambiguous Cases
- If a safe rename requires changes beyond the explicitly permitted naming modifications, DO NOT make those changes automatically.
- Leave the program in `daily-inbox/`, explain the compatibility issue in the organization report, and ask the user before proceeding.
- Never silently make additional code changes to force compilation.

### E. Verification and Reporting for Java Programs
After organizing Java files:
- Verify that filenames match their public top-level class names where applicable.
- Compare original and final source code to confirm that only authorized class-name changes occurred.
- Report every file renamed and every class identifier changed.
- Explicitly report any program left in `daily-inbox/` because its rename was ambiguous.
- Compilation checks may be performed when practical, but compilation failures must be reported rather than automatically fixed.

## 7. JavaScript Naming & Strict Source-Code Preservation Policy

### A. JavaScript Filename Convention
- **File extension:** Use `.js` exclusively for JavaScript source files.
- **Naming style:** Use lowercase, hyphen-separated filenames with the next available sequential number in that folder (`NN-descriptive-name.js`).
  - Examples: `01-display-message.js`, `02-addition-with-input.js`, `03-array-traversal.js`.
  - Sequential numbering is folder-scoped, consistent with C/C++ practices. Never renumber existing committed files.
- **No external frameworks or build tooling:** Standalone exercise scripts should execute with standard runtime environments (e.g. `node`) without creating unnecessary `package.json`, `node_modules`, or complex bundler infrastructure.

### B. Strict Source-Code Preservation
- JavaScript educational programs must be preserved exactly as written.
- Antigravity is authorized ONLY to rename the file.
- Antigravity is NOT authorized to make ANY code changes during organization:
  - Do NOT modify program logic, variables, functions, or control flow.
  - Do NOT wrap code in modules, closures, or classes unnecessarily.
  - Do NOT add or remove `require`, `import`, or `export` statements.
  - Do NOT reformat code, alter indentation, or modify whitespace.
  - Do NOT fix syntax errors, runtime exceptions, or logical flaws.

## 8. Assignment Questions & Duplicate Filtering Policy

### A. Core Duplicate Filtering Principle
- When organizing assignment questions or practice exercises, systematically compare each incoming program against existing implementations in the repository.
- **Upload / organize the program ONLY if:**
  1. It introduces a genuinely new problem statement, domain, or algorithm (e.g., electricity bill slabs, leap year, character case conversion, triangle validity, employee bonus).
  2. It demonstrates a distinctly different control structure, algorithm, or architecture (e.g., negative input updaters, while-loop countdowns without counters, custom `BOOL` typedef predicates vs `void` printers, 3-way equality handling).
- **Do NOT upload / organize the program if:**
  1. It is an exact or functional duplicate of an existing program with identical logic, control flow, and purpose (e.g., simple fixed print loops, identical divisibility-by-5 checks, identical even/odd modulo tests).
- Redundant duplicates must be clearly reported in the organization summary and omitted from the repository to prevent inflating program counts with identical solutions.

