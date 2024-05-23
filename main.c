#include <stdio.h>
#include "lab.h"

int main() {
    int task, add;
    printf("Введите номер программы:\n");
    scanf("%d", &add); 
    if (add == 1)
         return lab1();
    else if (add == 2) 
        return lab2(); 
    else if (add == 3) 
        return dz2();
    else if (add == 4) 
        return lab3();
    else if (add == 5)
        return lab4();
    else if (add == 6)
        return dz4();
    else if (add == 7) 
        return lab5();
    else if (add == 8)
        return dz5();
    else if (add == 9)
        return lab6();
    else if (add == 10)
        return dz6();
    else if (add == 11)
        return lab7();
    else{
        printf("can't show task"); 
        return 1; 
    }
}
