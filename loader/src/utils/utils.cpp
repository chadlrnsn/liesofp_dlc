#include "utils.h"

std::vector<std::string> utils::findDllsInDirectory(const std::string& directory)
{
    std::vector<std::string> dllFiles;

    // Проходим по всем файлам в директории
    for (const auto& entry : fs::directory_iterator(directory))
    {
        // Проверяем, является ли файл DLL
        if (entry.path().extension() == ".dll")
        {
            dllFiles.push_back(entry.path().string());
        }
    }

    return dllFiles;
}

char* utils::randomArray(int arraySize)
{
    char* randomArray = (char*)malloc((static_cast<unsigned long long>(arraySize) + 1) * sizeof(char));
    if (randomArray == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1); // Exit if memory allocation fails
    }

    int charSetSize = sizeof(CHAR_SET) - 1; // Exclude the null terminator

    // Seed the random number generator
    srand(time(NULL));

    // Fill the array with random characters
    for (int i = 0; i < arraySize; i++) {
        randomArray[i] = CHAR_SET[rand() % charSetSize];
    }

    // Null terminate the string
    randomArray[arraySize] = '\0';

    return randomArray; // Return the pointer to the allocated array
}