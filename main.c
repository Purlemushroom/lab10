/*
 * Студент: Шпаков Максим Денисович
 * Группа: 1-1 Прикладная информатика
 * Назначение: Разделить вычисление на функции и объяснить передачу аргументов
 */

#include <stdio.h>

int max2(int a, int b) {
    if (a > b) return a;
    return b;
}

int min2(int a, int b) {
    if (a < b) return a;
    return b;
}

int range3(int x, int y, int z){
    int maxs = max2(max2(x, y), z);
    int mins = min2(min2(x, y), z);
    return maxs - mins;
}

int main(void) {
    int x, y, z;
    if (scanf("%d %d %d", &x, &y, &z) != 3) {
        puts("Input error"); return 1;
    }
    if (x < -1000 || x > 1000 || y < -1000 ||
        y > 1000 || z < -1000 || z > 1000) {
        puts("Range error"); return 1;
    }
    int result = range3(x,y,z);
    printf("%d\n",result);
    return 0;
}