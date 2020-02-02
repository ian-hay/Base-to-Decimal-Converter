# Assignment Zero: Base to Decimal Converter

You are to write a simple C program that will take **1)** a number written in a different base and **2)** that base in decimal _as command line arguments_ and output the decimal number. For example:

    $ ./dec 1101 2
    13
    $ ./dec 1234 5
    194
    $ ./dec ZZ 36
    1295
    $ ./dec CAFE 16
    51966
    $ ./dec A7 10
    INVALID VALUE
    $ ./dec
    Usage: conv <number> <base>
    $ ./dec 1111 37
    INVALID BASE
    $ ./dec 1111 1
    INVALID BASE

> The dollar sign is not something you should type, it just represents the prompt in the terminal.

1. Your program should be able to handle all bases from 2 to 36.
1. You may not call any C library functions _except_ for `printf()`.

### Makefile

A `Makefile` is provided for you. Simply type `make` to compile your program.

You can also type `make test` to run some tests (basically what you see above). Be sure to test more values than this, though!

You can also type `make clean` if you want to remove the compiled program (and debugging symbols).

### Converting Characters to Numbers

The character `'1'` is _not the same_ as the **number 1**. The numeric values that correspond to the actual characters on your screen are outlined in the manpage, execute `man ascii` in your terminal to view it. Press `q` to exit.

