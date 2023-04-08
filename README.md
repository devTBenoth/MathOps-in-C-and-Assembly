<div align="center">
    <h1> MathOPS C and Assembly </h1>
</div>
This project is a project that functions as a calculator by using assembly functions within the C project. <br/> <br/>

The only files required are <strong>calculator.c</strong>, <strong>assembly.h</strong>, and <strong>assembly-functions.asm</strong>. Note that these files are also in the same folder! <br/> <br/>

<h2> Compiling and Running the Project </h2>

<strong> 1 - </strong> Let's run the following command to assemble the project:

```asm
nasm -f elf64 -o assembly-functions.o assembly-functions.asm
```

In the first step, we use NASM assembler to assemble the assembly code file, "assembly-functions.asm", into an object file with the format "elf64". The output file is named "assembly-functions.o".

<br/>

<strong> 2 - </strong> Now let's compile a library from the assembly-functions.o object we created:

```asm
gcc -shared -o libassembly.so assembly-functions.o
```

In this step, it creates libassembly.so library from assembly-functions.o object via gcc. The main reason for this is that we will use this library to reference the functions we will use in the C project.

<br/>

<strong> 3 - </strong> Now let's compile our C project with the library we created:

```asm
gcc -o program calculator.c -L. -lassembly
```

Finally, we compile the C program "calculator.c" with the "-L" flag to specify the path of the directory containing the "libassembly.so" file. We link the program with the shared library using the "-lassembly" flag, which allows us to call the assembly functions from the C program. The resulting executable file is named "program".

<br/>

<h2> Working Logic of the Program </h2>

The program you get as a result of compilation performs operations on the data sent to the stack. So this means that when running the project you have to enter the operations you want to calculate as parameters. For example, a simple example:

```bash
./program 1 10 10
result: 20
```

You must specify the first parameter operator selection (1 - addition, 2- subtraction, 3 - multiplication). The other 2 parameters are the 2 parameters you want to calculate.
