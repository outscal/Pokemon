#pragma once
// Utility.h
#ifndef UTILITY_H
#define UTILITY_H


namespace N_Utility {
    class Utility {
    public:
        static void clearConsole();
        static void waitForEnter();
        static void clearInputBuffer(); // New helper function
    };
}

#endif // !UTILITY_H