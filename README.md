# CODSOFT — C++ Console Applications

Collection of modular C++ programming projects completed during the **CodSoft C++ Programming Internship** (2024), covering interactive game logic, menu-driven CLI state management, input validation, and STL vector operations.

---

## Projects Included

| File | Program | Core Concepts Demonstrated |
| :--- | :--- | :--- |
| [`number_guessing_game.cpp`](number_guessing_game.cpp) | Number Guessing Game | Pseudo-random number generation (`srand`/`rand`), `do-while` loop control, conditional feedback |
| [`simple_calculator.cpp`](simple_calculator.cpp) | Simple Calculator | `switch-case` arithmetic dispatch (`+`, `-`, `*`, `/`), divide-by-zero validation |
| [`tic_tac_toe.cpp`](tic_tac_toe.cpp) | Two-Player Tic-Tac-Toe | 2D `3x3` game board matrix, turn-switching state, win/draw evaluation, replay loop |
| [`to_do_list.cpp`](to_do_list.cpp) | CLI To-Do List Manager | `ToDoList` OOP class, `std::vector<Task>` dynamic storage, add/view/complete/remove operations |

---

## Project Structure

```text
CODSOFT/
├── .github/workflows/cpp-build.yml   # Automated g++ C++17 build verification
├── number_guessing_game.cpp
├── simple_calculator.cpp
├── tic_tac_toe.cpp
├── to_do_list.cpp
├── LICENSE
└── README.md
```

---

## Compilation & Usage

Requires any C++17-compatible compiler (`g++`, `clang++`, or MSVC):

```bash
# Number Guessing Game
g++ -std=c++17 number_guessing_game.cpp -o number_guessing_game
./number_guessing_game

# Simple Calculator
g++ -std=c++17 simple_calculator.cpp -o simple_calculator
./simple_calculator

# Tic-Tac-Toe
g++ -std=c++17 tic_tac_toe.cpp -o tic_tac_toe
./tic_tac_toe

# To-Do List Manager
g++ -std=c++17 to_do_list.cpp -o to_do_list
./to_do_list
```

---

## Testing & CI

Every push and pull request compiles all four `.cpp` sources via `.github/workflows/cpp-build.yml` (`g++ -std=c++17 -Wall -Wextra`).

---

## License

MIT License — see [LICENSE](LICENSE).

## Author

**Yogesh Patil** — [@yogesh-patil2003](https://github.com/yogesh-patil2003) · [LinkedIn](https://www.linkedin.com/in/yogeshpatil2003/) · [Email](mailto:officialyogeshpatil0@gmail.com)
