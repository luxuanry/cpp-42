# 🏢 CPP Module 05 

Welcome to the 42 Bureaucracy! This module is a deep dive into C++ Exceptions (`try-catch`), Abstract Classes, Inheritance, Polymorphism, and the Factory Pattern. 

Through a series of exercises, we build a fully functional (and highly bureaucratic) system where Bureaucrats sign forms, execute them, and delegate the tedious paperwork to Interns.



## 📝 Project Overview

This module is divided into 4 progressive exercises:

### Ex00: Mommy, when I grow up, I want to be a bureaucrat!
* **Core Concept:** Exceptions and `try-catch` blocks.
* **Details:** Introduction of the `Bureaucrat` class. They have a `const` name and a grade ranging from 1 (highest) to 150 (lowest). Any attempt to create or modify a bureaucrat outside this range throws a custom exception (`GradeTooHighException` or `GradeTooLowException`).

### Ex01: Form up, maggots!
* **Core Concept:** Class interaction and cross-class exceptions.
* **Details:** Introduction of the `Form` class. Forms require specific grades to be signed and executed. Bureaucrats can now interact with forms via the `signForm()` method, which elegantly handles exceptions if the bureaucrat's grade is too low.

### Ex02: No, you need form 28B, not 28C...
* **Core Concept:** Abstract Classes, Inheritance, and Polymorphism.
* **Details:** The base `Form` becomes an Abstract Class (`AForm`) with a pure virtual `execute()` method. Three concrete forms are derived:
  * 🌳 `ShrubberyCreationForm`: Creates a file `<target>_shrubbery` containing an ASCII tree.
  * 🤖 `RobotomyRequestForm`: Makes drilling noises and has a 50% chance of successfully robotomizing the target (powered by `<cstdlib>` RNG).
  * 🎩 `PresidentialPardonForm`: Announces that the target has been pardoned.

### Ex03: At least this beats coffee-making
* **Core Concept:** Factory Pattern (without using `if/else` forests).
* **Details:** Introduction of the nameless, gradeless `Intern`. The intern generates forms dynamically using an array of function pointers. This provides a clean, scalable, and memory-safe way to map string names to object instantiation.
he Bureaucracy Nightmare
---

## 🚀 How to Compile and Run

Each exercise has its own directory and `Makefile`.

```bash
cd ex00  # or ex01, ex02, ex03
make
./[Executable_Name]# 🏢 CPP Module 05 - The Bureaucracy Nightmare

Welcome to the 42 Bureaucracy! This module is a deep dive into C++ Exceptions (`try-catch`), Abstract Classes, Inheritance, Polymorphism, and the Factory Pattern. 

Through a series of exercises, we build a fully functional (and highly bureaucratic) system where Bureaucrats sign forms, execute them, and delegate the tedious paperwork to Interns.


中文版

# 🏢 CPP Module 05 - 官僚主义的噩梦 (The Bureaucracy Nightmare)

欢迎来到 42 的官僚系统！本模块深入探讨了 C++ 的异常处理 (`try-catch`)、抽象类、继承、多态以及工厂模式。

通过一系列循序渐进的练习，我们构建了一个功能完备（且极度官僚）的系统：高高在上的官僚们负责签字、执行表单，并把繁琐的“造表单”工作甩锅给底层的实习生。


## 📝 项目概览

本模块分为 4 个逐步升级的练习：

### Ex00:
* **核心概念：** 异常处理与 `try-catch` 块。
* **详情：** 引入 `Bureaucrat`（官僚）类。他们拥有不可变 (`const`) 的名字，以及 1（最高）到 150（最低）的等级。任何试图在创建或修改时超出此范围的操作，都会精准抛出自定义异常（`GradeTooHighException` 或 `GradeTooLowException`）。

### Ex01:
* **核心概念：** 类与类的交互及跨类异常处理。
* **详情：** 引入 `Form`（表单）类。表单需要达到特定的等级要求才能被签字和执行。官僚现在可以通过 `signForm()` 方法与表单进行交互，如果官僚等级不够，该方法会优雅地捕获表单抛出的异常并处理。

### Ex02: 不，你需要 28B 表单，不是 28C...
* **核心概念：** 抽象类、继承与多态。
* **详情：** 基础的 `Form` 升级为抽象基类 `AForm`，并包含一个纯虚函数 `execute()`。派生出三种具体的表单类：
  * 🌳 `ShrubberyCreationForm` (种树单): 操控文件系统，在 `<target>_shrubbery` 文件中生成一棵 ASCII 树。
  * 🤖 `RobotomyRequestForm` (机器人手术单): 打印电钻噪音，并利用 `<cstdlib>` 的随机数机制，实现 50% 概率将目标成功改造为机器人的业务逻辑。
  * 🎩 `PresidentialPardonForm` (总统赦免单): 宣布目标已被总统正式赦免。

### Ex03: 至少这比泡咖啡强
* **核心概念：** 工厂模式（拒绝使用 `if-else` 分支森林）。
* **详情：** 引入没有名字、没有等级的底层打工人 `Intern`（实习生）。实习生使用**函数指针数组**来动态生成表单。这种写法提供了一种极度整洁、可扩展且内存安全的方式，将字符串名称完美映射到对象的实例化操作上。

---

## 🚀 如何编译与运行

每个练习都有自己独立的文件夹和 `Makefile`。

```bash
cd ex00  # 或者 ex01, ex02, ex03
make
./[可执行文件名]
