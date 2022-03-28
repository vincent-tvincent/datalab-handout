//
// Created by blue-lobster on 3/26/22.
//
#include<stdio.h>
int main(){
    int x = 1 << 31;
    int y = 1 << 31;
    int z = 1 << 31;
    printf("%d\n", ((!x << 31) >> 31) & y);
    return 0;
}
