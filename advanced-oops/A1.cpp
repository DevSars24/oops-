/*
Abstraction Real World Analogy:

When you order dishes, do you really care *how* they are being made? 
No. You just want to eat, right? That’s what abstraction is.

You only care about the interface (what is being served), 
not the implementation (how it's made).

Same here — you use 'renderer' without caring if it's OpenGL or DirectX.
*/

#include <iostream>
using namespace std;

// Abstract Base Class
class Renderer {
public:
    virtual void renderScene() = 0;  // Pure virtual function = abstraction
    virtual ~Renderer() {}           // Virtual destructor for cleanup
};

// Derived Class 1: OpenGL Renderer
class OpenGLRenderer : public Renderer {
public:
    void renderScene() override {
        cout << "Rendering with OpenGL" << endl;
    }
};

// Derived Class 2: DirectX Renderer
class DirectXRenderer : public Renderer {
public:
    void renderScene() override {
        cout << "Rendering with DirectX" << endl;
    }
};

// Main Function
int main() {
    Renderer* render = new OpenGLRenderer();  // abstraction: we only care it's a Renderer
    render->renderScene();                    // runtime polymorphism
    delete render;                            // cleanup

    render = new DirectXRenderer();           // same pointer, different implementation
    render->renderScene();                    // still works!
    delete render;

    return 0;
}
