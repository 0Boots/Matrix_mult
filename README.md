Matrix-Matrix Multiplication

This project implements matrix-matrix multiplication in C++. It reads input matrices from a file, performs the multiplication, and outputs the resultant matrix to the console. The implementation is designed to work on GNU/Linux using GCC or LLVM compilers and includes support for multiple test cases.

Features

Reads multiple test cases from a single input file.
Handles rectangular and square matrices.
Validates matrix dimensions for compatibility.
Uses efficient, standard-compliant C++ code.
Includes a build system (Makefile) for easy compilation.

Project Structure

matrix_mult/
├── main.cpp              # Source code for matrix multiplication
├── Makefile              # Build system for compilation
├── input.txt             # Input file with multiple test cases
├── expected_output.txt   # Expected results for validation
├── README.md             # Instructions and documentation


Compilation and Execution
Requirements
A GNU/Linux environment.
GCC or LLVM compiler with support for C++17.
make build tool.
Steps to Compile and Run

Extract the files:
tar -xvf matrix_mult.tar
cd matrix_mult/


Build the program:
make

Run the program:
./matrix_mult


Input:

The program reads matrices from input.txt.
Each test case in the input file is separated by ---.

Output:

The results of the matrix multiplication are printed to the terminal.
Input Format

Testing Process
Input Testing:

Multiple test cases provided in input.txt, including:
Square matrices.
Rectangular matrices.
Identity matrix multiplication.


Validation:
Results compared with pre-calculated outputs stored in expected_output.txt.


Edge Cases:
Matrix dimensions mismatch: The program gracefully terminates with an error message.
Empty test case: Skips invalid input lines.
