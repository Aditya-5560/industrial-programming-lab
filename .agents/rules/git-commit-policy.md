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
    - Scan `daily-inbox/`, analyze concepts, check for duplicates, propose target paths (`NN-descriptive-name.ext`), and assign confidence levels (High/Medium/Ambiguous).
    - DO NOT move, rename, modify, commit, or push any files.
  - `Organize today's programs`:
    - Process high-confidence programs.
    - Dynamically create language subfolders (`c/`, `cpp/`, `java/`) under concept folders when needed.
    - Rename newly added programs using the next available sequential number in that folder (`NN-descriptive-name.ext`).
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

## 4. Permanent Git Commit Message Policy

### A. Problem to Fix
Generic, vague commit messages like `feat(logic-building): add foundational problem solving and addition programs` are strictly forbidden. Commit messages must communicate the exact technical concepts and implementations added.

### B. Analyze Actual Changes Before Committing
Before creating any commit:
1. Inspect `git status` and detailed diffs (`git diff`, `git diff --staged`).
2. Identify the actual purpose and behavior of each changed file.
3. Group files by primary concept, functionality, or meaningful task.
4. Craft commit messages that accurately describe what that specific group demonstrates.
5. NEVER generate commit messages solely from parent directory names.
6. NEVER use one generic message for unrelated groups of programs.

### C. Commit Grouping Rules
- **Related programs:** Group into a single logical commit with a specific message.
- **Different concepts:** Split into separate commits representing distinct concepts.
- **Small batches:** A single commit is acceptable if all changes form one coherent unit.
- **Large batches:** Split into multiple logical commits reflecting distinct concepts.
- **No one-commit-per-file default:** Do not split every single file into its own commit unless the files are genuinely independent or requested by the user.
- **No artificial inflation:** Do not create superfluous commits to boost commit numbers.
- **No lazy bundling:** Do not combine unrelated concepts just to reduce commit count.

*Example Grouping:*
- Output example (`01-display-message.c`) → `feat(logic-building): add basic console output example`
- Hardcoded addition (`02-addition-hardcoded.c`) → `feat(arithmetic): demonstrate addition with hardcoded operands`
- User input addition (`04-addition-user-input.c`, `05-addition-initialized-formatted.c`) → `feat(arithmetic): add user-input and formatted addition examples`
- Modular functions (`06-addition-modular-function.c`, `07-addition-function-documentation.c`) → `feat(functions): demonstrate modular addition and function documentation`
- Test cases (`08-addition-test-cases.c`) → `test(arithmetic): add addition test cases`

### D. Commit Message Format & Standards
Format: `<type>(<scope>): <specific description>`

**Allowed Types:**
- `feat`: New program, algorithm, or concept implementation.
- `test`: Test cases or test runner programs.
- `refactor`: Structural reorganization without changing program behavior.
- `fix`: Correction of a classification, script, or repository configuration.
- `docs`: Documentation updates (`PROGRESS.md`, `README.md`, `ROADMAP.md`).
- `chore`: Organization, housekeeping, file moves.

**Quality Requirements:**
- Concise, imperative, specific (`add`, `demonstrate`, `implement`, `document`).
- Scope must be specific: `arithmetic`, `arrays`, `strings`, `memory`, `functions`, `pointers`, `recursion`, `linked-list`, `java`, `collections`, `threads`, `sockets`, `oop`, `lld`, `progress`, `organization`.
- **FORBIDDEN Phrases:**
  - `add foundational programs`
  - `update programs`
  - `add daily work`
  - `add multiple files`
  - `update logic building`
  - `add practice programs`
- Avoid repeating identical messages across different commits unless changes are genuinely equivalent.
- Do not claim tests passed, bugs were fixed, or features were added unless verified by actual code.

### E. Safety & Approval Gates
- Organizing files does NOT authorize committing or pushing.
- Commits require explicit user instruction (e.g., `"Commit today's work"`).
- Pushes require explicit user instruction (e.g., `"Commit and push today's work"` or `"Push to GitHub"`).
- Always verify working tree (`git status`) before staging.
- Never stage binary executables (`myexe`, `testexe`, `a.out`), build artifacts (`.o`, `.class`), IDE files (`.vscode/`), system metadata (`.DS_Store`), or credentials/secrets.
- NEVER force-push or rewrite remote Git history.\n