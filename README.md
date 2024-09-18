# N-Queens Solver ♕♛

## Overview 

The **N-Queens Solver** is a program implemented in the C programming language that solves the classic N-Queens problem. The N-Queens problem is a famous combinatorial problem that involves placing N chess queens on an N×N chessboard so that no two queens threaten each other. This means no two queens can be in the same row, column, or diagonal.

## Features 

- **Efficient Backtracking Algorithm**: Uses a recursive backtracking approach to explore all possible positions and find solutions efficiently.
- **Customizable Board Size**: The solution is designed for an 8x8 chessboard by default but can be modified to solve the problem for any board size N.
- **Visual Representation**: The program prints the board to the console with the positions of the queens once a solution is found.
- **Multiple Solutions**: Capable of finding and displaying all possible solutions for a given N.
- **Error Handling**: Gracefully handles cases where no solution exists and informs the user.

## How It Works 

1. **Run the Program**: Compile and execute the C program from a terminal or command prompt.
2. **Recursive Backtracking**: The program places queens one by one in different columns, starting from the leftmost column. For each column, it tries all the rows for a safe position and recurses to place the rest of the queens.
3. **Safe Position Check**: Before placing a queen, the program checks if the position is safe by ensuring no other queens are in the same row, upper diagonal, or lower diagonal.
4. **Solution Found**: When all queens are placed safely, the solution is printed to the console.
5. **Backtracking**: If a solution is not possible, the program backtracks and tries different positions.

## Example Output 📋

For a 4x4 board, the program outputs all possible solutions like this:


Here, `Q` represents a queen, and `~` represents an empty space. The solutions are displayed one by one, showing all valid arrangements of queens on the board.

![Example Output Image](<https://github.com/omarbasha19/N-Queens-Solver/blob/main/photo.png?raw=true>) 

## Technologies Used 🛠️

C Programming Language: The core logic is implemented in C, making use of fundamental programming constructs such as arrays and recursion


## Conclusion 

The N-Queens Solver is a practical demonstration of using recursion and backtracking in problem-solving. It is an excellent project for understanding fundamental algorithms and data structures in C programming. By exploring multiple solutions and providing a visual representation of the results, this project serves as both an educational tool and a foundation for more advanced algorithmic studies




