# C++ Tutorials
This repo contains all the different "projects" or tutorials I used to learn C++

## Descriptions 
- **HelloWorld**
    - Basic hello world example
- **LogClass** _(Requires Refactor)_
    - [Youtube Link](https://www.youtube.com/watch?v=3dHBFBw13E0&list=TLPQMDIwMjIwMjLEQaKWSVipcw&index=20)
    - Basic example of using classes in C++
    - Requires some refactoring
        - Find a way to move `Log` class to `Log.cpp`
        - Use enum for `LogLevels`
- **Threads**
    - [Youtube Link](https://www.youtube.com/watch?v=wXBcwHwIt_I&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=62)
    - Understand how to do things on multiple threads in C++
    - The C++ version I am using & the one in the Youtube video seem to be different. I don't have access to the `chrono_literals` namespace in the way its used in the video.
- **Virtual Functions**
    - [Youtube Link](https://www.youtube.com/watch?v=oIV2KchSyGQ&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=27)
    - Basic example of how to use virtual functions
    - An item to note, Virtual Functions leverage dynamic dispatch to work. Meaning they do a lookup for what classes have virtual functions assoicated with them. This is a runtime check that introduces overhead. It's probably negligible, but good to know.  