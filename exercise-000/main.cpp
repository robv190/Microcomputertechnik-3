#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

void changeValueByParameter(int value) {
    value = 99;
    fmt::print("Wert innerhalb von changeValueByParameter: {}\n", value);
}

void changeValueByPointer(int *ptr) {
    *ptr = 77;
    fmt::print("Wert innerhalb von changeValueByPointer: {}\n", *ptr);
}

int main(int argc, char **argv) {

    int x = 10;

    int*p;
    p = &x;

    fmt::print("Wert von x: {}\n", x);
    fmt::print("Adresse von x: {}\n", fmt::ptr(&x));

    fmt::print("Wert von p: {}\n", *p);
    fmt::print("Adresse in p: {}\n", fmt::ptr(p));

    *p = 42;
    fmt::print("Wert von x: {}\n", x);
    fmt::print("Wert von p: {}\n", *p);

    double* d = new double(3.1415);   // Speicher im Heap reservieren
    fmt::println("Wert: {}", *d);    // Zugriff über Dereferenzierung  
    fmt::println("Adresse: {}", fmt::ptr(d));

    delete d;                         // Speicher wieder freigeben

    



    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/12.0/api/
     */
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);

    int y = 5;

    fmt::print("y vor changeValueByParameter: {}\n", y);
    changeValueByParameter(y);
    fmt::print("y nach changeValueByParameter: {}\n", y);

    fmt::print("y vor changeValueByPointer: {}\n", y);
    changeValueByPointer(&y);
    fmt::print("y nach changeValueByPointer: {}\n", y);

    return 0; /* exit gracefully*/


}
