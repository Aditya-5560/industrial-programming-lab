# Antigravity Project Instructions & Permanent Git Commit Policy
# Repository: industrial-programming-lab (https://github.com/Aditya-5560/industrial-programming-lab)

## 1. Core Operating Principles
- **Role:** Repository organizer and documentation maintainer, NOT the programmer.
- **Code Ownership:** The user writes, understands, debugs, and practices all code independently.
- **NEVER MODIFY CODE (Absolute Rule):**
  - Never rewrite algorithms, fix bugs, optimize, refactor, or rename variables.
  - Never add/remove functionality, insert comments, or alter formatting/output.
  - If a bug or warning is spotted (e.g., potential null pointer, memory leak), report it separately in the organization report. Do NOT touch the source code.
- **No Fabrications:** Never fabricate code, progress, project functionality, or external repository links.

## 2. Daily Inbox Staging & Organization Workflow
- **Inbox Location:** `daily-inbox/`
- **Commands:**
  - `Check today's organization` (DRY-RUN):
    - Scan `daily-inbox/`, analyze concepts, check for duplicates, propose target paths, and assign confidence levels (High/Medium/Ambiguous).
    - DO NOT move, rename, modify, commit, or push any files.
  - `Organize today's programs`:
    - Process high-confidence programs.
    - Dynamically create language subfolders (`c/`, `cpp/`, `java/`) under concept folders when needed.
    - Rename newly added programs:
      - **C/C++ programs:** use the next available sequential number in that folder (`NN-descriptive-name.c` / `NN-descriptive-name.cpp`).
      - **Java programs:** use PascalCase without numeric prefixes (`DescriptiveName.java`), following Section 6.
    - Move files from `daily-inbox/` to target folders.
    - Update `PROGRESS.md` with verified counts.
    - DO NOT resolve ambiguities silently; leave ambiguous files in `daily-inbox/` and ask the user.
- **Never Renumber Existing Files:** Once a file is committed, its filename remains permanent. Never rename existing `01-`, `02-`, etc., files just to sort or rearrange.
- **Duplicate Detection:** Flag exact duplicates or likely duplicates; never delete or overwrite automatically.

## 3. Conceptual Category Mapping
1. `01-logic-building/`: Conditionals, loops, basic math logic, validation, flow control.
2. `02-arrays-and-matrices/`: 1D/2D array operations, traversals, matrix manipulation.
3. `03-strings/`: Character arrays, string algorithms, parsing, tokenization.
4. `04-bit-manipulation/`: Bitwise ops, masking, binary logic.
5. `05-memory-management/`: Pointers, pointer arithmetic, dynamic memory (`malloc`, `free`).
6. `06-structures-and-generic-programming/`: Structs, unions, function pointers, C++ templates.
7. `07-recursion/`: Recursive problem decomposition, call stack mechanics.
8. `08-data-structure-implementation/`: Linked lists, stacks, queues, trees built from scratch.
9. `09-searching-and-sorting/`: Linear/binary search, comparison & non-comparison sorts.
10. `10-core-java/`: Java OOP fundamentals, JVM memory model, exception handling, standard APIs.
11. `11-java-collections/`: Java Collections Framework (lists, sets, maps, iterators, generics).
12. `12-file-and-system-programming/`: Streams, binary I/O, system utilities, virtual file system concepts.
13. `13-network-programming/`: Sockets, TCP/UDP client-server implementations.
14. `14-multithreading/`: Concurrency, synchronization, locks, thread pools.
15. `15-object-oriented-design/`: Advanced OOP design, SOLID principles, class modeling.
16. `16-design-patterns-and-lld/`: GoF design patterns, low-level design case studies.

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
  - Allowed scopes include: `arithmetic`, `arrays`, `strings`, `bit-manipulation`, `memory`, `conditionals`, `functions`, `pointers`, `recursion`, `linked-list`, `trees`, `java`, `java-oop`, `collections`, `threads`, `sockets`, `progress`, `organization`, `architecture`, `validation`.
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
- Compilation checks may be performed when practical, but compilation failures must be reported rather than automatically fixed.\n