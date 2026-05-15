#include <iostream>

// The blueprint for our prime checker, whew!
template <int p, int i>
struct is_prime {
    static constexpr bool value = (p % i != 0) && is_prime<p, i - 1>::value;
};

// Base case for the recursion, keepin' it steady!
template <int p>
struct is_prime<p, 2> {
    static constexpr bool value = (p % 2 != 0);
};

// The selector to print only the primes, ya feel me?
template <int i>
struct PrimePrinter {
    static void print() {
        PrimePrinter<i - 1>::print();
        if (is_prime<i, i / 2>::value)
            std::cout << i << " ";
    }
};

// Stopping the loop at the very start!
template <>
struct PrimePrinter<2> {
    static void print() { std::cout << "2 "; }
};

int main() {
    // We callin' the static method, no objects needed in this session!
    std::cout << "Compile-time Primes up to 20: ";
    PrimePrinter<20>::print();
    std::cout << std::endl;
    return 0;
}