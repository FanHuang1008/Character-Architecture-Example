# Character Architecture Example

This C++ project demonstrates an object-oriented architecture where application code depends only on an abstract interface. Concrete implementations are selected at build time using CMake.

This project is designed to illustrate several important Object-Oriented Programming (OOP) principles:

- Abstraction – application code interacts only with the `Character` interface
- Encapsulation – implementation details are hidden in concrete classes
- Polymorphism – different character types implement the same interface
- Separation of interface and implementation

The design goal is to keep the application layer completely independent from concrete implementations.

---

# Key Idea

Application code includes **only one header file**:

```cpp
#include "api.hpp"

int main()
{
    auto character = Character::Create();

    character->MoveForward(1);
    character->Attack();
    character->Rest();
}
```

The application communicates only with the **`Character` interface**, while the actual implementation is chosen at **build time**.

---

# Architecture Overview

```
                +------------------+
                |      main.cpp    |
                |   (Application)  |
                +---------+--------+
                          |
                          | includes
                          v
                +------------------+
                |      api.hpp     |
                |  Character API   |
                +---------+--------+
                          |
                Polymorphic Interface
                          |
        +-----------------+-----------------+
        |                 |                 |
+---------------+ +---------------+ +---------------+
|     Mage      | |    Ranger     | |    Warrior    |
| mage.hpp/cpp  | | ranger.hpp/cpp| | warrior.hpp/cpp|
+---------------+ +---------------+ +---------------+
```

---

# Project Structure

```
.
├── CMakeLists.txt
├── include
│   ├── api.hpp
│   ├── mage.hpp
│   ├── ranger.hpp
│   └── warrior.hpp
├── src
│   ├── mage.cpp
│   ├── ranger.cpp
│   └── warrior.cpp
└── main.cpp
```

### Components

**`api.hpp`**

Defines the abstract `Character` interface and the `Create()` factory method used by the application.

---

**Character Implementations**

Each character type provides its own implementation of the interface:

```
Mage
Ranger
Warrior
```

Each implementation lives in its own header and source file.

---

**CMakeLists.txt**

CMake selects which implementation is compiled based on a configuration variable.

---

# Building the Project

Create a build directory and configure the project using CMake.

```bash
mkdir build
cd build
cmake -DCHARACTER=<chosen_character> ..
make
```

Run the program:

```bash
./char_arch
```

---

# Selecting the Character Implementation

The character implementation is selected using the `CHARACTER` CMake variable.

Example:

```
cmake -DCHARACTER=Mage ..

# or

cmake -DCHARACTER=Ranger ..

# or

cmake -DCHARACTER=Warrior ..
```

Only the selected implementation will be compiled into the final executable.

---

# Adding a New Character

One of the main benefits of this architecture is extensibility.

Adding a new character requires only 3 steps.

---

## 1. Add a Header File

Create a new header in the `include` directory.

```
include/<new_char>.hpp
```

Example:

```cpp
class NewCharacter : public Character
{
public:
    void MoveForward(int distance) override;
    void Attack() override;
    void SpecialAttack() override;
};
```

---

## 2. Add a Source File

Create the implementation file.

```
src/<new_char>.cpp
```

Example:

```cpp
#include "<new_char>.hpp"

void Paladin::MoveForward(int distance)
{
    // implementation of MoveForward()
}

void Paladin::Attack()
{
    // implementation of Attack()
}

void Paladin::SpecialAttack()
{
    // implementation of SpecialAttack()
}
```

---

## 3. Update CMakeLists.txt

Add the new character to the supported character.

```
elseif(${CHARACTER} STREQUAL "NewCharacter")
    add_library(character_impl src/<new_char>.cpp)
```

No other code needs to change. Importantly, `main.cpp` remains untouched.

---

# Summary

Key characteristics of this project:

- The application includes only `api.hpp`
- Concrete implementations follow object-oriented inheritance
- The character implementation is selected at build time
- Adding a new character requires only:
  - add one header file
  - add one source file
  - one small CMake update

This keeps the system modular, extensible, and aligned with modern C++ OOP practices.

---

# Requirements

- C++17 compatible compiler
- CMake 3.15 or later