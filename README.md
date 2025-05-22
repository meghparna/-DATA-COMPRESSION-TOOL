# -DATA-COMPRESSION-TOOL
NAME:MEGHPARNA BHAKAT
INTERN ID:CT04DL159
DOMAIM:C PROGRAMMING
DURATION:4 WEEKS
MENTOR:NEELA SANTOSH

During my internship in C programming, I was given a practical task to implement a basic data compression tool using the Run-Length Encoding (RLE) algorithm. The primary objective of this task was to understand how simple compression works and to build a working program that can both compress and decompress text files. This assignment helped me explore real-world applications of file handling, data algorithms, and command-line interface programming in C.

The core concept behind RLE is to reduce the size of data by identifying sequences of repeated characters and representing them as a single character preceded by its count. For example, a string like "AAABBBCCDAA" can be compressed to "3A3B2C1D2A", which saves space when dealing with large volumes of repetitive data. Although it’s a basic algorithm, RLE is a foundational concept used in areas like image compression (e.g., bitmap graphics), text data storage, and even in old fax systems and early video formats.

I developed this tool entirely in the C programming language, chosen for its low-level control, speed, and relevance in systems programming. I used Visual Studio Code (VS Code) as my integrated development environment (IDE) due to its simplicity, extensibility, and compatibility with C compilers such as GCC (MinGW) on Windows. VS Code's terminal and file explorer made it easy to manage multiple text files for testing and debugging purposes.

The tool I developed has a simple menu-driven interface. It asks the user to select between compressing a file, decompressing a file, or exiting the program. Based on the user’s input, it performs the corresponding operation. For compression, the program reads the input text file character by character, counts how many times each character repeats, and writes the compressed format to a new file. For decompression, the program reads the compressed file, extracts the number-character pairs, and reconstructs the original content.

To implement this, I used basic file handling functions in C such as fopen(), fgetc(), fputc(), fprintf(), and fscanf(). I also used loops and conditionals to manage the logic of detecting sequences and converting them into compressed form. The program handles input errors like missing files and empty files gracefully with appropriate error messages.

Through this task, I learned how to handle files in C, how to process text data efficiently, and how to write clean and modular code. I gained experience in reading from and writing to files, managing buffers, handling user input, and dealing with string manipulation using character-based logic. The challenge helped me better understand how compression works and how algorithms are translated into working code.

One of the real-world lessons I learned is that even simple algorithms like RLE form the basis for more advanced data compression methods such as Huffman coding, LZW (used in GIF files), and modern lossless compression techniques. This project was a stepping stone to learning how performance and storage optimization are essential in areas like operating systems, databases, embedded systems, and digital communications.

In terms of challenges, one difficulty I encountered was properly handling the input and output formats during compression and decompression. Initially, I faced issues where compressed data was not correctly parsed, or the decompressed output had missing characters. I resolved these bugs by carefully checking the loop logic and using formatted I/O functions like fscanf() with correct format specifiers.

I also learned the importance of testing software with multiple input scenarios — empty files, files with special characters, very long repeated characters, and files with no repetition. This kind of testing helped me ensure that the program was robust and handled edge cases correctly.

Additionally, I improved my understanding of the memory model in C. Since the program deals with text data, buffer overflow and segmentation faults could occur if not handled carefully. I made sure to allocate proper memory for file paths and validated all user inputs.

Overall, this task significantly improved my problem-solving and programming skills. It gave me hands-on experience with practical applications of C programming. I now have a clearer understanding of how file compression tools work at a low level and how system-level programs are built using basic algorithms and efficient logic. I also appreciated the value of keeping the user interface simple, so even a non-technical user can operate the tool easily.


##output
![Image](https://github.com/user-attachments/assets/bfff4d75-8af1-435c-baa7-7fabe1556bfd)
