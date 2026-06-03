# CPP02 - Ad-hoc Polymorphism, Overloads & Orthodox Canonical Form

## 📌 Descripción

Este módulo introduce conceptos fundamentales de C++ como la **sobrecarga de operadores**, el **polimorfismo ad-hoc** y la implementación de la **Canonical Orthodox Form**.

El objetivo es aprender a diseñar clases más completas, con comportamiento coherente en copias, asignaciones y operaciones.

El proyecto incluye varios ejercicios centrados en números en coma fija y operaciones básicas sobre ellos.

---

## 🧠 Conceptos aprendidos

- Polimorfismo ad-hoc (sobrecarga)
- Sobrecarga de operadores (`+`, `-`, `*`, `/`, `<<`)
- Canonical Orthodox Form (OCF)
- Constructores y destructores
- Función de conversión (`toInt`, `toFloat`)
- Representación de números en punto fijo
- Manipulación de bits

---

## 📁 Estructura del proyecto

```text
CPP02/
├── ex00/
│   ├── Fixed.hpp
│   ├── Fixed.cpp
│   ├── main.cpp
│   └── Makefile
│
├── ex01/
│   ├── Fixed.hpp
│   ├── Fixed.cpp
│   ├── main.cpp
│   └── Makefile
│
└── ex02/
    ├── Fixed.hpp
    ├── Fixed.cpp
    ├── main.cpp
    └── Makefile
```

---

# 🔢 ex00 - Introducción a Fixed Point

## 🎯 Objetivo

Crear una clase `Fixed` que represente un número en **coma fija**.

### Requisitos

- Constructor por defecto
- Constructor por copia
- Operador de asignación
- Destructor
- Getter y setter del valor bruto

```cpp
Fixed a;
Fixed b(a);
Fixed c;

c = b;
```

---

## 🧠 Conceptos clave

- Clase básica en C++
- OCF (Canonical Form)
- Variables privadas
- Encapsulación

---

# 🔧 ex01 - Conversión y funcionalidad

## 🎯 Objetivo

Ampliar la clase `Fixed` para soportar:

- Enteros
- Flotantes
- Conversión a `int` y `float`

### Ejemplo

```cpp
Fixed a(42);
Fixed b(3.14f);

std::cout << a.toInt() << std::endl;
std::cout << b.toFloat() << std::endl;
```

---

## 🧠 Conceptos clave

- Representación en coma fija
- Conversión de tipos
- Manipulación de bits
- Precisión numérica

---

# ⚙️ ex02 - Sobrecarga de operadores

## 🎯 Objetivo

Implementar operadores para permitir operaciones matemáticas y comparaciones entre objetos `Fixed`.

### Operadores requeridos

```cpp
// Comparación
>, <, >=, <=, ==, !=

// Aritméticos
+, -, *, /
```

### Ejemplo

```cpp
Fixed a(5.5f);
Fixed b(2.0f);

Fixed c = a + b;
Fixed d = a * b;

if (a > b)
    std::cout << "a es mayor" << std::endl;
```

---

## 🧠 Conceptos clave

- Sobrecarga de operadores
- Diseño de clases intuitivas
- Reutilización de lógica interna
- Precisión en operaciones matemáticas

---

## ⚙️ Compilación

```bash
cd ex00 && make
cd ex01 && make
cd ex02 && make
```

---

## 🚀 Ejecución
### ex00
```bash
./fixed
```
### ex01
```bash
./fixed01
```
### ex02
```bash
./fixed02
```

---

## 🧪 Compilación obligatoria

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

---

## 📚 Lecciones importantes

- El OCF es obligatorio para clases robustas
- La sobrecarga de operadores mejora la legibilidad del código
- La representación en coma fija permite precisión controlada
- C++ requiere diseño cuidadoso de conversiones

---

## 🧾 Autor
Carlos Raveglia Cuesta
Proyecto realizado como parte del currículo de la escuela.
