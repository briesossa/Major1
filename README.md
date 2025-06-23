# Major 1

**Course:** CSCE 3600: Systems Programming  
**Project:** Bitwise Operation Menu Program  
**Executable:** `bitwisemenu`

---

## Team Members

- **Brianna Jackson** – Implemented `major.c`, handled menu loop, input validation, and function calls.
- **Alexandre DeWolf** – Implemented the `endianSwap()` function in `endian.c`.
- **Lucero Torres** – Implemented the `count_leading_zeros()` function in `clz.c`.
- **Anthony Ayala** – Implemented the `parity()` function in `parity.c`. Implemented the `rotate_right()` function in `rotate.c`.

---

## Organization

- `major1.h` – Shared header file containing all function prototypes.
- `major.c` – Main driver with menu logic and operation routing.
- `clz.c` – Contains `count_leading_zeros()`, which counts the number of leading zero bits.
- `endian.c` – Contains `endianSwap()`, which swaps byte order.
- `rotate.c` – Contains `rotate_right()`, which performs bitwise right rotation.
- `parity.c` – Contains `parity()`, which returns 1 if the number of set bits is odd, 0 if even.
- `Makefile` – Builds the project into the `bitwisemenu` executable using `gcc -Wall`.
- `README` – Describes the project structure, team roles, and known issues.

---

## Known Bugs / Problems

- Typo in menu function: `"prrform"` should be `"perform"`.
- Function call `counting_leading_zeros()` in `major.c` should be corrected to `count_leading_zeros()` to match the function prototype in `clz.c`.
- All other functionality compiles and works correctly on CELL machines using `
