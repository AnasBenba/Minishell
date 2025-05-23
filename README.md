# Minishell

### A minimalist Unix shell

This project is a simplified **unix shell** written in C, implementing basic command execution, pipes, redirections, and environment management—similar to **`bash`**.

-------------------------------------------------------------------------------------------------------------------------------------------------------------

## 📌 Features

✅ **Command execution** (**`ls`**, **`grep`**, etc.)
✅ **Built-ins**:

- **`echo`**

- **`cd`**

- **`pwd`**

- **`export`**

- **`unset`**

- **`env`**

- **`exit`**
✅ **Redirections**: **`<`**, **`>`**, **`>>`**, **`<<`** (heredoc)
✅ **Pipes** (**`|`**)
✅ **Signal handling** (**`Ctrl-C`**, **`Ctrl-D`**, **`Ctrl-\`**)
✅ **Environment variables** (**`$PATH`**, **`$HOME`**, etc.)
✅ **Error handling** (syntax errors, command not found)

-------------------------------------------------------------------------------------------------------------------------------------------------------------

## 🚀 Installation & Usage

### 1. Compilation
```bash
git clone https://github.com/AnasBenba/Minishell.git
cd Minishell
make        # Compile
make clean  # Remove object files
make fclean # Full clean (remove executable)
```

### 2. Run
```bash
./minishell
```
(Exit with **`exit`** or **`Ctrl-D`**.)

-------------------------------------------------------------------------------------------------------------------------------------------------------------

## 🧠 Technical Details

- **Lexing & Parsing**: Splits input into tokens and organizes them into a structured linked list for command execution.

- **Execution**: Uses **`fork()`**, **`execve()`**, and **`waitpid()`**.

- **Signals**: Handles **`SIGINT`** (Ctrl-C) and **`SIGQUIT`** (Ctrl-).

- **Memory**: No leaks (checked with **`valgrind`**).

-------------------------------------------------------------------------------------------------------------------------------------------------------------

## 👥 Team

This project was developed by:

|----------------------------------------------------------------------------------------------|
|   **Name**	        |   **1337 Login**|     **GitHub**                                     |
|                       |                 |                                                    |
|-----------------------|-----------------|----------------------------------------------------|
|   **Anas Benba**	    |   **abenba**	  |     **[Google]https://github.com/AnasBenba**       | 
|                       |                 |                                                    |
|-----------------------|-----------------|----------------------------------------------------|
|   **Zoubair Entifi**  |	**zoentifi**  |  	**[Google]https://github.com/zombieB0Y**       | 
|                       |                 |                                                    | 
|-----------------------|-----------------|----------------------------------------------------|


## 📜 License

This project is part of the **1337 School** curriculum.
