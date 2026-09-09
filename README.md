# Terminal-Tic-Tac-Toe

This is a terminal-based Tic-Tac-Toe game built in C++. This is my first project so it is a bit rough around the edges, but it is fully playable. 

You can play a standard 2-player game locally in the terminal.

**The main flex:** What makes this different from standard beginner projects is that it has a completely bulletproof input system. It catches invalid moves, prevents out-of-bounds errors on the 3x3 grid, and accurately calculates wins across all rows, columns, and diagonals without crashing. 

## Setup

You need the following pre-installed on your system:
* A terminal
* `g++` (C++ compiler)

## Usage

Drop these commands in your terminal to run the game:

**Step 1. Clone the repo:**
```bash
git clone git@github.com:Amorphous7473/Tic-Tac-Toe-cli.git
```

**Step 2. CD into the repo:**
```bash
cd Terminal-Tic-Tac-Toe-cli
```

**Step 3. Compile and run the program:**
```bash
g++ ttt.cpp -o main && ./main
```

Thank you.
