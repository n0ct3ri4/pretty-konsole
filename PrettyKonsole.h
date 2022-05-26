#pragma once
/**
 * @file console.h
 * @author Paul BONCAR (contact.nocteria@gmail.com)
 * @brief COUT manager. Beautify your console!
 * @version 1.0.0
 * @date 2022-03-31
 *
 * @copyright Copyright (c) 2022
 *
 */

// includes
#include <sstream>
#include <iostream>
using namespace std;

// colors
#define black "\x1b30m"
#define dred "\x1b[31m"
#define dgreen "\x1b[32m"
#define dyellow "\x1b[33m"
#define dblue "\x1b[34m"
#define dmagenta "\x1b[35m"
#define dcyan "\x1b[36m"
#define gray "\x1b[37m"
#define dgray "\x1b[90m"
#define red "\x1b[91m"
#define green "\x1b[92m"
#define yellow "\x1b[93m"
#define blue "\x1b[94m"
#define magenta "\x1b[95m"
#define cyan "\x1b[96m"
#define white "\x1b[97m"
#define bold "\x1b[1m"
#define underline "\x1b[4m"
#define italic "\x1b[27m"
#define default "\x1b[0m"

// classes
class Konsole {
public:
    /**
     * @brief Displays a simple text into the console. It doesn't contains any type symbol at the start.
     *
     * @param text Text.
     */
    void write(string text) {
        cout << text << "\n";
    }

    /**
     * @brief Displays a message into the console. It contains a log type symbol at the start.
     *
     * @param text Log message.
     */
    void log(string text) {
        cout << gray << "[" << green << "LOG" << gray << "] " << default << text << "\n";
    }

    /**
     * @brief Displays an error into the console. It contains a log type symbol at the start.
     *
     * @param text Error message.
     */
    void error(string text) {
        cout << gray << "[" << red << "ERROR" << gray << "] " << default << text << "\n";
    }

    /**
     * @brief Displays a warning into the console. It contains a log type symbol at the start.
     *
     * @param text Warning message.
     */
    void warning(string text) {
        cout << gray << "[" << yellow << "WARNING" << gray << "] " << default << text << "\n";
    }
} Kon;

// functions
void powershell(string command) {
    ostringstream oss;
    oss << "powershell " << command;
    system((oss.str()).c_str());
}

// aliases
void ps(string command) {
    powershell(command);
}

void cmd(string command) {
    ostringstream oss;
    oss << command;
    system((oss.str()).c_str());
}
