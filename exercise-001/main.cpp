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

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
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
