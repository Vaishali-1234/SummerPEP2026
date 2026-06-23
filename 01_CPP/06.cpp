/* MEMORY IN CPP
1. STACK - Allocated automatically by the compiler.

int main() {
    int a = 10;   // Stored in stack
}

2. HEAP - Allocated manually by the programmer using new.

int main() {
    int *ptr = new int;  // Stored in heap
    delete ptr;             // Free memory
}

*/