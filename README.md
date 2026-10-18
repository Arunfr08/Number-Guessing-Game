# 🎯 Number Guessing Game in C

A simple, interactive **Number Guessing Game** developed in C where the player tries to guess a randomly generated number between 1 and 100. The program provides hints after each guess and tracks the number of valid attempts needed to find the correct answer.

This project demonstrates fundamental C programming concepts, including loops, conditional statements, random number generation, and input validation.

## ✨ Features

- **Random Number Generation:** Generates a random number between 1 and 100.
- **Interactive Gameplay:** Allows the player to enter guesses through the console.
- **Higher or Lower Hints:** Indicates whether the guess is too high or too low.
- **Attempt Counter:** Tracks the number of valid guesses.
- **Input Validation:** Handles non-numeric input.
- **Range Validation:** Rejects guesses outside the permitted range.
- **Instant Feedback:** Announces when the correct number is guessed.

## 🛠️ Technologies Used

- **Programming Language:** C
- **Header Files:** `stdio.h`, `stdlib.h`, `time.h`
- **Compiler:** GCC
- **Interface:** Command-Line Interface (CLI)

## 🚀 Getting Started

### Prerequisites

Install a C compiler such as GCC. Windows users can use GCC through MinGW-w64 or MSYS2.

### Compilation

Open a terminal in the project directory and run:

```bash
gcc NumberGuessingGame.c -o NumberGuessingGame
```

Replace `NumberGuessingGame.c` with your actual source filename if it differs.

### Run the Game

**Windows (PowerShell):**

```powershell
.\NumberGuessingGame.exe
```

**Linux/macOS:**

```bash
./NumberGuessingGame
```

## 💻 Example Output

```text
Welcome to our Number Guessing Game!!
Enter a number between 1 - 100: 50
Too Low!
Enter a number between 1 - 100: 75
Too High!
Enter a number between 1 - 100: 63
Correct!
The answer is: 63
It took you 3 tries to guess.
```

*The answer and hints will vary each time the game runs.*

## 📚 Concepts Practiced

- Variables and data types
- `while` loops
- Conditional statements using `if-else`
- Functions from standard C libraries
- Random number generation using `rand()`
- Random number seeding using `srand()` and `time()`
- User input with `scanf()`
- Input validation and buffer clearing using `getchar()`
- Logical operators
- Loop control using `continue`
- Basic debugging and logical problem-solving

## ⚠️ Limitations

- The game supports only one round per execution.
- The number range is fixed between 1 and 100.
- There is no scoring system or replay option.
- Random number generation uses the standard C library and is not intended for security-sensitive applications.

## 🔮 Future Improvements

- Add difficulty levels with different number ranges.
- Introduce a limited number of attempts.
- Add a replay option.
- Implement a scoring system.
- Display performance statistics across multiple rounds.
- Provide hints when the guess is close to the answer.

## 🎯 Project Objective

The objective of this project is to strengthen fundamental C programming and problem-solving skills by building an interactive game involving random numbers, user input, conditional logic, and loops.

## 👨‍💻 Author

**Arun Saini**

This project is part of my programming practice and GitHub portfolio, showcasing my progress in C programming and logical problem-solving.

---

⭐ If you find this project useful, consider giving the repository a star!
