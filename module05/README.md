# 🏢 CPP Module 05 - The Bureaucracy Nightmare / 官僚主义的噩梦

*(English version below | 中文版本见下方)*

---

## 🇬🇧 English Version

Welcome to the 42 Bureaucracy! This module is a deep dive into C++ Exceptions (`try-catch`), Abstract Classes, Inheritance, Polymorphism, and the Factory Pattern. 

Through a series of exercises, we build a fully functional (and highly bureaucratic) system where Bureaucrats sign forms, execute them, and delegate the tedious paperwork to Interns.

### 📝 Project Overview

This module is divided into 4 progressive exercises:

* **Ex00: Mommy, when I grow up, I want to be a bureaucrat!**
  * **Core Concept:** Exceptions and `try-catch` blocks.
  * **Details:** Introduction of the `Bureaucrat` class with grades ranging from 1 (highest) to 150 (lowest). Out-of-bounds grades throw custom exceptions (`GradeTooHighException` or `GradeTooLowException`).
* **Ex01: Form up, maggots!**
  * **Core Concept:** Class interaction and cross-class exceptions.
  * **Details:** Introduction of the `Form` class, requiring specific grades to be signed and executed. Bureaucrats interact with forms via `signForm()`.
* **Ex02: No, you need form 28B, not 28C...**
  * **Core Concept:** Abstract Classes, Inheritance, and Polymorphism.
  * **Details:** `Form` becomes an Abstract Class (`AForm`). Three concrete forms are derived: `ShrubberyCreationForm` (ASCII trees), `RobotomyRequestForm` (50% probability RNG surgery), and `PresidentialPardonForm`.
* **Ex03: At least this beats coffee-making**
  * **Core Concept:** Factory Pattern (without `if/else` forests).
  * **Details:** The gradeless `Intern` generates forms dynamically using an array of function pointers, providing a scalable and memory-safe instantiation method.

### 🚀 How to Compile and Run

Each exercise has its own directory and `Makefile`.

bash
cd ex00  # or ex01, ex02, ex03
make
./[Executable_Name]


中文版本

欢迎来到 42 的官僚系统！本模块深入探讨了 C++ 的异常处理 (try-catch)、抽象类、继承、多态以及工厂模式。

通过一系列循序渐进的练习，我们构建了一个功能完备（且极度官僚）的系统：高高在上的官僚们负责签字、执行表单，并把繁琐的“造表单”工作甩锅给底层的实习生。
📝 项目概览

本模块分为 4 个逐步升级的练习：

    Ex00: 妈妈，我长大了想当官僚！

        核心概念： 异常处理与 try-catch 块。

        详情： 引入 Bureaucrat（官僚）类，拥有 1（最高）到 150（最低）的等级。任何越界操作都会精准抛出自定义异常。

    Ex01: 列队，新兵们！

        核心概念： 类与类的交互及跨类异常处理。

        详情： 引入 Form（表单）类，需要达到特定等级才能签字和执行。官僚通过 signForm() 方法与表单进行安全的交互。

    Ex02: 不，你需要 28B 表单，不是 28C...

        核心概念： 抽象类、继承与多态。

        详情： 基础 Form 升级为抽象基类 AForm。派生出三种具体表单：ShrubberyCreationForm (生成 ASCII 树文件)、RobotomyRequestForm (50% 概率改造机器人的随机数逻辑)、以及 PresidentialPardonForm (总统赦免)。

    Ex03: 至少这比泡咖啡强

        核心概念： 工厂模式（拒绝 if-else 分支森林）。

        详情： 引入底层打工人 Intern（实习生）。使用函数指针数组动态生成表单，实现极度整洁且无缝扩展的实例化操作。

🚀 如何编译与运行

每个练习都有自己独立的文件夹和 Makefile。

cd ex00  # 或者 ex01, ex02, ex03
make
./[可执行文件名]