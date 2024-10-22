#include <windows.h>
#include <stdio.h>
#include "injector/load-library.h"
#include "utils/utils.h"

int main() {
        
    //int size = 12; // Define the size of the random array
    //char* myRandomArray = utils::randomArray(size); // Call the function

    //printf("Random Character Array: %s\n", myRandomArray);
    //SetConsoleTitleW(myRandomArray);
    //
    ////DWORD processID;
    ////char dllPath[MAX_PATH];

    ////// ¬водим PID процесса и путь к DLL
    ////printf("¬ведите PID процесса: ");
    ////scanf("%d", &processID);

    ////printf("¬ведите путь к DLL: ");
    ////scanf("%s", dllPath);

    ////// »нжектируем DLL
    ////if (InjectDLL(processID, dllPath) != 0)
    ////{
    ////    printf("ќшибка при инжекции DLL.\n");
    ////}

    //free(myRandomArray);

    return 0;
}
