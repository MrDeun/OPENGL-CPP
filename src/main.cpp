#include <GLAD/glad.h>
#include <GLFW/glfw3.h>
#include <fmt/base.h>

void basicInit() {
  glfwInit();
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}

int main(int, char **) {

  basicInit();

  GLFWwindow *window = glfwCreateWindow(800, 600, "Hello World", NULL, NULL);
  if (window == NULL) {
    // fmt::println("ERROR! GLFW window failure!");
    glfwTerminate();
    return -1;
  }
  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    // fmt::println("ERROR! GLAD Failure!");
  }

  glViewport(0, 0, 800, 600);

  while (!glfwWindowShouldClose(window)) {
    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  // fmt::println("Hello world!");
  return 0;
}
