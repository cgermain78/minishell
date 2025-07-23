# 🐚 minishell

This shell replicates core functionalities of `bash`, such as parsing user input, handling pipes and redirections, launching executables, and implementing built-in commands — all without relying on system calls like `system()`.\
It’s a deep dive into process management, file descriptors, signal handling, and low-level command parsing.

## ⚙️ Compilation

To build the project, run:

```bash
make
```

This will generate the `minishell` executable

---

## 🚀 How to Use

Launch `minishell` with:

```bash
./minishell
```

You’ll be presented with a custom prompt where you can enter commands like in a typical shell.

---

## ✨ Features

- **Command Execution**:

  - Absolute paths: `/bin/ls`
  - Relative paths: `./my_program`
  - Search in `$PATH`: `ls`, `cat`, etc.

- **Arguments & Options**\
  e.g., `ls -la`, `echo Hello world`

- **Quotes Handling**\
  Supports `'single'` and `"double"` quotes (no multiline support)

- **Command Separators**\
  Use `;` to run multiple commands

- **Redirections**

  - Output: `>` (overwrite), `>>` (append)
  - Input: `<`

- **Pipes**\
  Chain commands using `|`

- **Environment Variable Expansion**\
  e.g., `$HOME`, `$USER`, `$?` (exit code of last command)

- **Signal Handling**

  - `Ctrl-C`: Interrupts current command
  - `Ctrl-\`: Sends `SIGQUIT` to child process
  - `Ctrl-D`: Sends EOF (exits the shell if input is empty)

---

## 🔧 Built-in Commands

These commands are handled internally by the shell:

| Command  | Description               |
| -------- | ------------------------- |
| `echo`   | Print arguments to stdout |
| `cd`     | Change current directory  |
| `pwd`    | Print current directory   |
| `export` | Set environment variables |
| `unset`  | Unset environment vars    |
| `env`    | Display environment       |
| `exit`   | Exit the shell            |

---

## 📦 Examples

```bash
minishell$ echo "Welcome to minishell!"
Welcome to minishell!

minishell$ cd /tmp ; pwd
/tmp

minishell$ ls | grep ".log" > logs.txt
```

---

## ❗ Known Limitations

- No multiline support in quoted strings
- No wildcard/globbing expansion (`*`, `?`)
- No command history or line editing (e.g., arrow keys)

---

Feel free to clone and explore!

```bash
git clone https://github.com/cgermain78/minishell.git
cd minishell
make
./minishell
```

---

