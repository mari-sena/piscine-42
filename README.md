## To test, install mini-moulinette

1. Clone the git the repository https://github.com/k11q/mini-moulinette

```bash
git clone https://github.com/khairulhaaziq/mini-moulinette.git
```

2. Create an alias for it.

- zsh:

```zsh
echo "alias mini='~/mini-moulinette/mini-moul.sh'" >> ~/.zshrc && source ~/.zshrc
```

- bash:

```bash
echo "alias mini='~/mini-moulinette/mini-moul.sh'" >> ~/.bashrc && source ~/.bashrc
```

### How to use mini-moulinette

- Run using command `mini` with assignment number as argument. e.g: C02.

### How to test manually each exercise

- Enter the path of the exercise
- Uncomment the main function and the lib imports
- Compile the file with `gcc <FILE_NAME.c>`
- Run the program with `./a.out`
