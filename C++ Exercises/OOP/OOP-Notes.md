# Object-Oriented Programming (OOP) in C++ - Notes

## Introduction

These notes cover the foundational concepts of Object-Oriented Programming (OOP) in C++ with practical examples. The aim is to provide a clear understanding of OOP principles, syntax, and usage in C++.

---

## Core Concepts

### Object

* An entity that contains both **data** and **procedures**.
* **Attributes** are the data in the object.
* **Member Functions** are the procedures (methods) that operate on the data.

### OOP Addresses Problems in Two Main Ways:

* **Encapsulation:** Combining data and code into a single object.
* **Data Hiding:** Restricting access to data from outside the object. Member functions provide controlled access.

#### Example: Automobile

The user interacts with pedals and switches but doesn’t need to know internal mechanics — this is encapsulation and data hiding in action.

---

## Class & Instance

### Class

* A blueprint defining attributes and member functions.
* Every object created from a class is called an **instance**.

#### Example: Student Management System

```cpp
class Student {
private:
    int id;
    string name;
public:
    void setName(string n) { name = n; }
    string getName() const { return name; }
};
```

* Each instance has its own memory.
* By default, members are **private**.

### Access Specifiers

```cpp
class Info {
private:
    int secretData;
public:
    int publicData;
};
```

* **private:** Accessible only within the class.
* **public:** Accessible from outside the class.

---

## Const Member Functions

* A `const` member function does not modify the object.
* Example:

```cpp
string getName() const {
    return name;
}
```

---

## Defining Member Functions Outside the Class

```cpp
class Student {
private:
    string name;
public:
    string getName();
};

string Student::getName() {
    return name;
}
```

* Uses **scope resolution operator (`::`)**.

---

## Creating Objects & Accessing Members

```cpp
Student s1;
s1.setName("Bliz");
cout << s1.getName();
```

* Dot operator `.` is used for access.

---

## Stale Data

Avoid storing dependent data as member variables unless necessary — calculate on demand.

---

## Pointers with Objects

```cpp
Rectangle rectObj;
Rectangle* rectPtr = &rectObj;
rectPtr->setWidth(19.8);
```

* `->` operator is used to access members via pointers.

### Unique Pointers

```cpp
#include <memory>
unique_ptr<Rectangle> rectPtr(new Rectangle);
rectPtr->setWidth(19.8);
```

* Automatically manages memory.

---

## Separating Files

* **Header File (`.h`)** contains class declaration.
* **CPP File (`.cpp`)** contains function definitions.
* Include guards prevent multiple inclusions.

```cpp
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double width;
public:
    void setWidth(double);
    double getWidth() const;
};

#endif
```

---

## Inline Member Functions

* Defined inside class declaration — considered inline.

---

## Constructors

* Special member function called automatically when object is created.
* Same name as class, no return type.

```cpp
class Demo {
public:
    Demo();
};

Demo::Demo() {
    cout << "Constructor called!\n";
}
```

* Default constructor: no parameters.
* Overloaded constructors: multiple constructors with different parameters.

---

## Destructor

* Automatically called when object is destroyed.
* Preceded by `~`.

```cpp
class Demo {
public:
    ~Demo();
};

Demo::~Demo() {
    cout << "Destructor called!\n";
}
```

* Cleans up resources.

---

## Private Member Functions

* Declared as `private` to prevent external access.

---

## Array of Objects

```cpp
class Player {
public:
    Player() {
        cout << "Player created!\n";
    }
};

Player team[3];
```

* Must have a default constructor or initialize each object manually.

---

## Conclusion

These notes summarize key OOP concepts in C++ with syntax examples. Understanding these fundamentals is essential for writing structured, maintainable, and efficient code.

---

## License

These notes are for educational purposes. Feel free to use and share with proper credit.

