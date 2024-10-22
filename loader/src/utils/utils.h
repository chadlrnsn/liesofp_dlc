#pragma once
#include <iostream>
#include <filesystem>
#include <stdio.h>
#include <vector>

namespace fs = std::filesystem;
#define DLL_NAME "Liesofp_dlc.dll"

#define ARRAY_SIZE 12
#define CHAR_SET "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"

namespace utils {

    std::vector<std::string> findDllsInDirectory(const std::string& directory);
    char* randomArray(int arraySize);

}

