# 🔄 C++ Two-Way File I/O Architecture

## 📖 About the Project
This project demonstrates the strict memory management required to perform both Output (Write) and Input (Read) operations on the exact same physical file during a single program execution. It captures dynamic user data, locks it to persistent storage, and immediately reads it back to the console to verify data integrity.

## ✨ Features
*   **Dynamic Data Capture:** Utilizes `getline()` to securely capture multi-word user input directly from the console.
*   **Sequential Stream Operations:** Successfully transitions an active file from an `ofstream` write state to an `ifstream` read state within the same `main()` function.
*   **Strict Resource Management:** Enforces memory buffer flushing by executing `.close()` on the output stream, ensuring the file lock is released before the input stream attempts to access it.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** Persistent Storage, File Stream State Management, Output/Input Streams (`ofstream`, `ifstream`), Buffer Flushing.
