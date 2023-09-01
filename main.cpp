#include <iostream>
using namespace std;
#include <GL/glew.h>
#include <GLFW/glfw3.h>

void drawSquare()
{
    glBegin(GL_QUADS);
    glVertex2f(-0.5f, -0.5f); // Điểm trái dưới
    glVertex2f(0.5f, -0.5f);  // Điểm phải dưới
    glVertex2f(0.5f, 0.5f);   // Điểm phải trên
    glVertex2f(-0.5f, 0.5f);  // Điểm trái trên
    glEnd();
}

int main(void)
{

    GLFWwindow *window;
    /* Initialize the library */
    if (!glfwInit())
        return -1;
    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    /* Make the window's context current */
    glfwMakeContextCurrent(window);
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /*
        YOUR CODE HERE

        */
        drawSquare();

        /* Swap front and back buffers */
        glfwSwapBuffers(window);
        /* Poll for and process events */
        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}

