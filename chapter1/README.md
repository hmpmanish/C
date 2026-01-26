# C Programming – Chapter 1 (Basics)

This repository contains **basic C programs** from **Chapter 1** of *The Ultimate C Programming Course*. These programs help beginners understand fundamental concepts like variables, data types, comments, and the `sizeof` operator.

---

## 📁 Folder Structure

```
Chapter 1/
├── 01_variables.c
├── 02_variable_rules.c
├── 03_data_types.c
├── 04_sizeof.c
├── 05_comments.c
├── *.exe
└── README.md
```

> ⚠️ `.exe` files are generated after compilation (Windows).

---

## 📘 Programs Overview

### 1️⃣ `01_variables.c`

* Introduction to variables
* Declaration and initialization

### 2️⃣ `02_variable_rules.c`

* Rules for naming variables in C

### 3️⃣ `03_data_types.c`

* Basic data types: `int`, `char`, `float`, etc.

### 4️⃣ `04_sizeof.c`

* Usage of `sizeof()` operator
* Finds memory size (in bytes) of data types

### 5️⃣ `05_comments.c`

* Single-line comments (`//`)
* Purpose of comments in C programs

---

## ▶️ How to Compile & Run (Windows)

Open **PowerShell / Command Prompt** in the folder:

```powershell
gcc filename.c -o filename
.\filename
```

### Example:

```powershell
gcc 04_sizeof.c -o 04_sizeof
.\04_sizeof
```

---

## 🖥️ Sample Output

```
Size of int: 4 bytes
Size of char: 1 byte
Size of float: 4 bytes
```

---

## 🧠 Key Notes (Exam Friendly)

* `char` → 1 byte
* `int` → usually 4 bytes
* `float` → 4 bytes
* Comments are ignored by the compiler
* `return 0;` means successful execution

---

## 👤 Author

**Manish Pandey**
Beginner C Programmer | Engineering Student

---

## ⭐ Recommendation

If you are new to C programming, start from `01_variables.c` and proceed sequentially.

Happy Coding 🚀
