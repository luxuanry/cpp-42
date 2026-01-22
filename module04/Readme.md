C++ Module 04: Subtype Polymorphism, Abstract Classes, and Interfaces
💡 The "Virtual" Concept: The Simplest Explanation
1. The Virtual Function (virtual)

The difference between reading the label and checking the contents.

Imagine you have a box labeled "Animal". Inside, there is actually a Cat.

    Without virtual (Lazy Compiler): You say "Make Sound!" The compiler looks at the label ("Animal"), ignores the Cat inside, and plays a generic animal sound. (Wrong!)

    With virtual (Smart Compiler): The compiler ignores the label. It opens the box, sees the Cat, and plays "Meow!". (Correct!)

2. The Abstract Function (= 0)

The "Empty Instruction" or "Mandatory To-Do List".

Sometimes, a generic "Animal" doesn't know how to make a sound.

    The Code: virtual void makeSound() = 0;

    The Meaning: The base class says: "I know animals should make a sound, but I have no idea how to do it. I leave this line blank."

    The Rule:

        You cannot buy this box: You cannot write new Animal(). It is incomplete (Abstract Class).

        The Child MUST do the work: If you create a Dog class, you must write the code for makeSound(). If you don't fill in the blank, the Dog is also incomplete and cannot be created.

📂 Exercise Breakdown
🦁 Exercise 00: Polymorphism

The Problem: You have a pointer Animal* a = new Dog();. Without virtual, a->makeSound() calls the Animal's sound (because the pointer is type Animal).

The Solution: Add virtual to makeSound(). Now, the program checks the actual object (Dog) at runtime and plays the correct sound.

🧠 Exercise 01: Deep Copy (Memory Management)

The Problem: Dog has a pointer to a Brain. If you copy a Dog (Dog B = Dog A), by default C++ only copies the pointer address (Shallow Copy). Both dogs share one brain. If one dies, the other crashes (Double Free).

The Solution: Write a custom Copy Constructor. When copying a Dog, allocate a new Brain (new Brain()) and copy the ideas one by one (Deep Copy). Now each Dog has its own Brain.

👻 Exercise 02: Abstract Class
The Problem: Generic "Animals" shouldn't exist. You can't buy an "Animal" at a pet shop; you buy a Dog or a Cat.

The Solution: Make the function Pure Virtual: virtual void makeSound() = 0;.

    This makes Animal an Abstract Class.

    It forces Dog and Cat to provide their own implementation of the sound.

    Result: You cannot write new Animal() anymore. It effectively prevents the creation of logic-defying generic objects.