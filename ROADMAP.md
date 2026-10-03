# Industrial Programming Roadmap

This roadmap outlines the complete structured learning sequence for the **Logic Building with Industrial Project Development** curriculum.

---

## Phase 1: Logic Building (`01-logic-building`)
- Decision making: `if`, `if-else`, nested conditionals, `switch-case`
- Loop constructs: `while`, `do-while`, `for`, nested loops, loop invariants
- Basic algorithmic decomposition and mathematical logic
- Input validation, boundary checks, and menu-driven program flow

## Phase 2: Arrays and Matrices (`02-arrays-and-matrices`)
- 1D array traversal, element insertion, deletion, and searching
- Reversal, rotation, prefix sums, and element manipulation
- 2D arrays & matrix traversal (row-major, column-major, spiral, diagonal)
- Matrix transformations, arithmetic, and multidimensional arrays

## Phase 3: Strings (`03-strings`)
- Character arrays and ASCII manipulation in C/C++
- String manipulation without library functions
- Java `String`, `StringBuilder`, and `StringBuffer` internals
- Tokenization, searching, pattern matching, and comparison routines

## Phase 4: Bit Manipulation (`04-bit-manipulation`)
- Bitwise operators: AND (`&`), OR (`|`), XOR (`^`), NOT (`~`), shifts (`<<`, `>>`)
- Bit masks: checking, setting, clearing, and toggling specific bits
- Counting set bits, power-of-two validation, parity calculation
- Binary representations and low-level bitwise algorithms

## Phase 5: Memory Management (`05-memory-management`)
- Pointers, address-of operator, dereferencing, and pointer arithmetic
- Double pointers (pointer-to-pointer) and pointer arrays
- Dynamic memory allocation in C: `malloc`, `calloc`, `realloc`, and `free`
- Memory leaks, dangling pointers, segmentation faults, and memory layout (stack vs heap)

## Phase 6: Structures and Generic Programming (`06-structures-and-generic-programming`)
- C `struct`, `union`, bit fields, and `typedef`
- Structure pointers, nested structures, and self-referential structures
- Function pointers in C for callback and generic mechanisms
- C++ function and class templates for generic programming

## Phase 7: Recursion (`07-recursion`)
- Recursive thinking, base condition, recurrence relations
- Call stack execution flow, activation records, and stack overflow analysis
- Recursion vs iteration trade-offs, tail recursion optimization
- Divide-and-conquer foundations and tree-based recursion

## Phase 8: Data Structure Implementation (`08-data-structure-implementation`)
- Singly linked list, doubly linked list, circular linked list from scratch
- Stack implementation (array-based and linked-list-based)
- Queue implementation (linear, circular, deque, priority queue)
- Binary trees, Binary Search Trees (BST), traversals, and custom collections

## Phase 9: Searching and Sorting (`09-searching-and-sorting`)
- Linear search and binary search implementations
- Elementary sorting: Bubble sort, Selection sort, Insertion sort
- Advanced sorting: Merge sort, Quick sort, Counting sort
- Algorithmic analysis, time complexity, space complexity, and stability

## Phase 10: Core Java (`10-core-java`)
- Classes, objects, memory model (JVM Heap vs Stack), references
- Constructors, constructor chaining, `this`, `super`
- Packages, access modifiers, encapsulation, data hiding
- Exception handling: `try`, `catch`, `finally`, `throw`, `throws`, custom exceptions
- Interfaces, abstract classes, and core Java standard libraries

## Phase 11: Java Collections (`11-java-collections`)
- Java Collections Framework hierarchy and architecture
- `List` implementations: `ArrayList`, `LinkedList`, `Vector`
- `Set` implementations: `HashSet`, `LinkedHashSet`, `TreeSet`
- `Map` implementations: `HashMap`, `LinkedHashMap`, `TreeMap`
- `Queue` / `Deque` interfaces and `PriorityQueue`
- `Comparable`, `Comparator`, `Iterator`, `ListIterator`, and generics

## Phase 12: File and System Programming (`12-file-and-system-programming`)
- File streams in C (`fopen`, `fread`, `fwrite`, `fclose`, file descriptors)
- Java I/O (`FileInputStream`, `FileOutputStream`, `BufferedReader`, `BufferedWriter`)
- Java NIO (`Path`, `Files`, `ByteBuffer`, channels)
- Binary file manipulation, serialization, and command-line utility development
- Foundations for Virtual File System (CVFS) design

## Phase 13: Network Programming (`13-network-programming`)
- Networking fundamentals: IP addressing, ports, protocols (TCP vs UDP)
- Berkeley sockets in C/C++ (`socket`, `bind`, `listen`, `accept`, `connect`)
- Java Socket API (`Socket`, `ServerSocket`, `DatagramSocket`)
- Client-server architecture, message exchange, and custom protocol implementation

## Phase 14: Multithreading (`14-multithreading`)
- Process vs Thread, thread lifecycle, and thread states
- Java `Thread` class, `Runnable` interface, and `Callable` / `Future`
- Concurrency issues: race conditions, deadlocks, livelocks, starvation
- Thread synchronization: `synchronized` keyword, intrinsic locks, explicit `Lock` API
- Inter-thread communication: `wait()`, `notify()`, `notifyAll()`, condition variables
- Thread pools and Java Executor Framework

## Phase 15: Object-Oriented Design (`15-object-oriented-design`)
- Core OOP tenets: Abstraction, Encapsulation, Inheritance, Polymorphism
- Composition vs Inheritance ("favor composition over inheritance")
- Class responsibilities, coupling, and cohesion
- SOLID design principles in practice:
  - Single Responsibility Principle (SRP)
  - Open/Closed Principle (OCP)
  - Liskov Substitution Principle (LSP)
  - Interface Segregation Principle (ISP)
  - Dependency Inversion Principle (DIP)

## Phase 16: Design Patterns and LLD (`16-design-patterns-and-lld`)
- Creational Patterns: Singleton, Factory Method, Abstract Factory, Builder, Prototype
- Structural Patterns: Adapter, Decorator, Facade, Composite, Proxy
- Behavioral Patterns: Observer, Strategy, Command, State, Template Method
- Low-Level Design (LLD) case studies (e.g., Parking Lot System, Rate Limiter)
- Modular software architecture and extensible system modeling
