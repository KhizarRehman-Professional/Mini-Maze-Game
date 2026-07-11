# 🎮 Obstacle Maze Game

A simple console-based maze game written in C++. Navigate through a randomly generated 5x5 grid, avoid obstacles (`#`), and reach the end (`E`) to win!

---

## ✨ Features

| Feature | Description |
|---------|-------------|
| 🎲 **Random Maze Generation** | New maze every time you play |
| 🧱 **Obstacles** | Random `#` blocks to avoid |
| 🎯 **Win Condition** | Reach `E` from starting position `P` |
| ⌨️ **Simple Controls** | U (Up), D (Down), L (Left), R (Right) |
| 🔄 **Replayability** | Different maze layout each run |

---

## 🚀 Getting Started

### Prerequisites
- A C++ compiler (GCC, Clang, or MSVC)

### Compilation
```bash
g++ Mini-Maze-Game.cpp -o maze
```

### Run
```bash
./maze
```

---

## 🎮 How to Play

1. Run the program
2. You'll see a 5x5 grid with:
   - `P` = Your position
   - `E` = Exit (goal)
   - `#` = Obstacle (can't move here)
   - `.` = Empty space
3. Enter your move:
   - `U` / `u` = Up
   - `D` / `d` = Down
   - `L` / `l` = Left
   - `R` / `r` = Right
4. Reach `E` to win!

---

```
---------------------------------------
Welcome to Obstacle Maze Game!
---------------------------------------
P . . # .
. # . . .
. . # . .
# . . . #
. . # . E
---------------------------------------
Enter Move (Up: U, Down: D, Left: L, Right: R):
```

---

## 🛠️ Built With

- C++
- Standard Library (`<iostream>`, `<cstdlib>`, `<ctime>`)

---

## 🗂️ File Structure

```
.
├── Mini-Maze-Game.cpp    # Main source code
├── README.md           # This file
├── .gitignore          # Git ignore rules
└── .gitattributes
```

---

## 📝 How It Works

- The grid is initialized with all empty spaces (`.`)
- Random obstacles (`#`) are placed (1 in 3 chance per cell)
- Player starts at top-left (`P`), exit is at bottom-right (`E`)
- Player movement is validated against grid boundaries and obstacles
- Game loop continues until player reaches the exit

---

## 📄 License

This project is for educational purposes.
