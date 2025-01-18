# Game of Life (Raylib C)

## Description

This is a simple implementation of Conway's Game of Life, created using the **Raylib** graphics library in C. The game simulates the evolution of cells based on certain rules and displays the result visually.

In the simulation:
- Each cell can either be alive or dead.
- The state of the cells evolves based on a few simple rules, which are followed every generation.
- Press **Space** to advance to the next generation.

Feel free to modify the code to explore different initial configurations and visualize different patterns!

## Installation

Before compiling, make sure **raylib** is installed on your system.

- For **MacOS**, you can install it using **Homebrew**:
    ```bash
    brew install raylib
    ```

- For **Linux** (Debian/Ubuntu), use **apt**:
    ```bash
    sudo apt-get install libraylib-dev
    ```

- For **Windows**, follow the instructions at [raylib.org](https://www.raylib.com/).

Alternatively, if you want to use your local version of **raylib**, you can modify the `build.sh` file to point to your local Raylib directory. Here's how you can do that:

1. Download or clone Raylib from [Raylib GitHub repository](https://github.com/raysan5/raylib).
2. Set the correct paths for `CFLAGS` and `LDFLAGS` in the `build.sh` file:
    ```bash
    CC=clang
    CFLAGS="-Wall -Wextra -std=c11 -I/your/local/raylib/src"
    LDFLAGS="-L/your/local/raylib/src -lraylib -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL"
    ```

Make sure to replace /your/local/raylib with the actual path to your local raylib installation.
Also, make sure to modify the build.sh file according to your operating system. For example:
- For **MacOS**, ensure the paths are correct and include the necessary frameworks.
- For **Linux**, adjust the library paths and dependencies as needed.
- For **Windows**, ensure the necessary environment variables and paths to the raylib libraries are set.


## Compilation

To compile the project, you can run the following script in the terminal:

```bash
sh build.sh
```

## Running the Game

After compiling, you can run the game using:

```bash
./game
```

In the game, you need to press Space to advance to the next generation. You can experiment with different patterns and initial configurations by modifying the code.

Feel free to change the appearance of each generation in the code and see the interesting patterns that emerge from your customizations!


