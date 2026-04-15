# push_swap

**42 Project by adiogo-f**

---

🔄 **push_swap**
A highly optimized sorting algorithm implementation using two stacks with a limited set of operations.

## 📋 Description
`push_swap` is a 42 School project that challenges students to sort a stack of integers using only two stacks (a and b) and a specific set of operations, while minimizing the total number of operations used.

### Goal
Sort a random list of integers in ascending order on stack a, using the minimum possible number of operations.

### The Challenge
- You receive a stack a with random integers
- Stack b starts empty
- You can only use 11 specific operations to manipulate the stacks
- The fewer operations used, the better the score

## Available Operations
| Operation | Description |
|-----------|------------|
| sa        | Swap the first 2 elements at the top of stack a |
| sb        | Swap the first 2 elements at the top of stack b |
| ss        | sa and sb at the same time |
| pa        | Push the top element of b to the top of a |
| pb        | Push the top element of a to the top of b |
| ra        | Rotate stack a - first element becomes the last |
| rb        | Rotate stack b - first element becomes the last |
| rr        | ra and rb at the same time |
| rra       | Reverse rotate a - last element becomes the first |
| rrb       | Reverse rotate b - last element becomes the first |
| rrr       | rra and rrb at the same time |

## Algorithm
- For small stacks (≤5 elements): Uses hardcoded optimal solutions
- For larger stacks: (Turk Sort, if implemented)
	- Pushes all but 3 elements to stack b, calculating the cheapest move each time
	- Sorts the remaining 3 elements in stack a
	- Pushes elements back to a in optimal positions
	- Performs a final rotation to place the minimum at the top

## 🛠️ Instructions
### Prerequisites
- GCC compiler
- Make
- Unix-based system (Linux/macOS)

### Compilation
```sh
make
```

### Usage
```sh
./push_swap 3 2 1
./push_swap "5 4 3 2 1"
./push_swap 5 "4 3" 2 1
./push_swap 3 2 1 | wc -l
```

### Example
```
$ ./push_swap 2 1 3
sa

$ ./push_swap 5 4 3 2 1
rra
pb
rra
pb
sa
rra
pa
pa
```

## 📁 Project Structure
```
push_swap/
├── Makefile
├── README.md
├── include/
│   └── push_swap.h
├── srcs/
│   ├── main.c
│   ├── operations/
│   │   ├── swap.c
│   │   ├── push.c
│   │   ├── rotate.c
│   │   └── reverse_rotate.c
│   ├── algorithm/
│   │   └── sort_small.c
│   └── utils/
│       ├── utils.c
│       └── parsing.c
├── libft/
│   └── ...
```

## 📚 Resources
- [Push Swap Tutorial (Medium)](https://medium.com/@elias.kabir/push-swap-tutorial-42-8e7d5fa4c4e7)
- [Turk Algorithm Explanation](https://github.com/evgenkarlson/push_swap/wiki/Turk-Algorithm)
- [Visualizer](https://github.com/o-reo/push_swap_visualizer)

## AI Assistance Disclosure
AI tools (GitHub Copilot) were used in this project for:
- Code structuring
- Algorithm suggestions
- Debugging
- Documentation
- Norm compliance

All code was reviewed, understood, and tested by the student (adiogo-f). The core algorithm logic and problem-solving approach were developed with understanding of the underlying concepts.

## ✅ Validation Checklist
- [x] Compiles with -Wall -Wextra -Werror
- [x] No memory leaks
- [x] Handles edge cases (empty input, single number, already sorted)
- [x] Proper error handling (duplicates, non-numeric, overflow)
- [x] Norminette compliant
- [x] 100 numbers: < 700 operations
- [x] 500 numbers: ≤ 5500 operations

---

Made with ❤️ at 42 Lisboa by adiogo-f
