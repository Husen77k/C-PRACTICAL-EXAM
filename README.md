# C-PRACTICAL-EXAM## C Programming Core Concepts 🚀
A comprehensive collection of fundamental C programming programs demonstrating core language mechanics including user-defined functions, array manipulation, pointer arithmetic, and nested loops.
## 📌 Problem Statements & Programs
This repository contains implementations for the following five functional programming challenges:

   1. Simple Calculator: Simulates a basic calculator performing arithmetic operations.
   2. Array Element Sum: Calculates the total sum of elements inside an array using a dedicated function.
   3. Reverse Array & Sum: Uses a single function pass to print a 1D array in reverse order and track its overall sum.
   4. Cube via Pointers: Dereferences elements in a 1D array using pointer arithmetic to compute their mathematical cubes.
   5. Continuous Number Pattern: Uses nested loops to generate a sequentially counting triangle pattern starting from 11.

------------------------------
## ✨ Features

* Modular Architectures: Offloads heavy logical lifting from main() using target routines.
* Safe Pointer Offsets: Navigates raw memory using dynamic address adjustments (*(ptr + i)).
* Zero-Crash Safety: Built-in validation checks to handle division-by-zero crashes.
* Dynamic Sizes: Allows terminal users to dynamically scale array limits at execution runtime.

------------------------------
## 🧠 Concepts Practiced

* Memory Referencing: Pointers, addresses, and arithmetic tracking (ptr + i).
* Control Flows: for loops, nested loops, conditional if-else verification limits.
* Functional Scope: Function declarations, arguments passing, and local total return mechanics.
* Data Arrays: Working with static collections and runtime variable-length arrays (VLAs).

------------------------------
## 🖥️ Graphical Output Previews## 1. Simple Calculator## 2. Array Element Sum## 3. Reverse Array & Sum## 4. Cube via Pointers## 5. Continuous Number Pattern
------------------------------
## 📋 Sample Code Snippets & Execution## Program 4: Cube of Array Elements using Pointers

// Accessing data elements cleanly via pure pointer arithmetic referencesfor (i = 0; i < size; i++) {
    int value = *(ptr + i);
    int cube = value * value * value;
    printf("Cube of %d is : %d\n", value, cube);
}

## Program 5: Target Output Pattern

11 
12 13 
14 15 16 
17 18 19 20 
21 22 23 24 25 

------------------------------
## 📁 Project Structure

c-programming-core/
│
├── calculator.c
├── sum_of_element.c
├── reverse_array.c
├── cube_pointer.c
└── pattern.c

------------------------------
## 🛠️ Requirements

* Standard C compiler toolkit (GCC / MinGW)
* Visual Studio Code IDE
* Code Runner Extension configured to execute tasks directly inside an interactive integrated terminal environment (code-runner.runInTerminal: true)

------------------------------
## ▶️ Compilation & Execution Instructions
Use these quick compiler commands to evaluate any source script using a terminal pipeline:
## Compilation

gcc filename.c -o program

## Execution (Windows)

.\program.exe

## Execution (Linux/macOS)

./program


