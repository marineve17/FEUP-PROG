#include <iostream>
#include <functional>
#include <limits>

namespace utils {
    namespace input {

        template <typename T>
        bool read_value(std::string prompt, std::string warning, T &result, const std::function<bool(T)> validator = [](T res) { return true; }) {
            static std::string csi = "\x1B[";

            std::cout << csi << "0;1;33m? " << csi << "0m";
            std::cout << prompt << std::flush;

            while (true) {
                // Is true if, and only if, all the content present on the line is a number
                bool is_input_valid = std::cin.peek() != '\n' 
                    && std::cin >> result && std::cin.peek() == '\n'
                    && validator(result);

                // Clear the buffer
                // We do this to avoid having "123a[EOF]" trigger the loop more than once.
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                if (is_input_valid) {
                    // Change status to valid
                    std::cout << csi << 'F' << csi << 'G' << csi << "0;1;32m";
                    std::cout << "✓";
                    std::cout << csi << "0m";

                    std::cout << csi << prompt.length() + 3 << 'G'; // Place cursor at the start of the input area
                    std::cout << csi << 'K'; // Clear the input area

                    std::cout << csi << "0;2m";
                    std::cout << result << std::endl;

                    std::cout << csi << 'K' << std::flush; // Clear the line in case there is something there
                    return true;
                } else {
                    if (!std::cin.eof()) {
                        // Show warning
                        std::cout << csi << "0;1;31m";
                        std::cout << ">> ";
                        std::cout << csi << "0m";
                        std::cout << warning;
                        std::cout << csi << 'F'; // Place cursor on the previous line
                    }

                    std::cout << csi << prompt.length() + 3 << 'G'; // Place cursor at the start of the input area
                    std::cout << csi << 'K' << std::flush; // Clear the input area

                    if (std::cin.eof()) {
                        std::cout << csi << "0;2m";
                        std::cout << "EOF";

                        // Change status to invalid
                        std::cout << csi << 'F' << csi << 'G' << csi << "0;1;31m";
                        std::cout << "×";
                        std::cout << csi << "0m" << csi << 'E' << std::flush;

                        return false;
                    }
                }
            }
        }

    } // namespace input
} // namespace utils
