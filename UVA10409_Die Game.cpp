#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
void turnNorth(int d[]) {
    int tmp = d[0];
    int tmp2 = d[1];
    int tmp3 = d[4];
    int tmp4 = d[5];
    d[0] = tmp3;
    d[1] = tmp;
    d[4] = tmp4;
    d[5] = tmp2;
}

void turnSouth(int d[]) {
    int tmp = d[0];
    int tmp2 = d[1];
    int tmp3 = d[4];
    int tmp4 = d[5];
    d[0] = tmp2;
    d[1] = tmp4;
    d[4] = tmp;
    d[5] = tmp3;
    
}

void turnWest(int d[]) {
    int tmp = d[0];
    int tmp2 = d[2];
    int tmp3 = d[3];
    int tmp4 = d[5];
    d[0] = tmp3;
    d[2] = tmp;
    d[3] = tmp4;
    d[5] = tmp2;
    
}

void turnEast(int d[]) {
    int tmp = d[0];//top
    int tmp2 = d[2];//west
    int tmp3 = d[3];//east
    int tmp4 = d[5];//btm
    d[0] = tmp2;
    d[2] = tmp4;
    d[3] = tmp;
    d[5] = tmp3;
    
}

int main() {
    int n = 0;
    int dice[] = { 1,2,3,4,5,6 };
    //top, north, west, east, south, btm
    std::string d;
    while (scanf("%d", &n)) {
        getchar();
        if (n == 0) break;
        while (n--) {
            std::getline(std::cin, d);
            switch (d.at(0)) {
            case 'n':
                turnNorth(dice);
                break;
            case 's':
                turnSouth(dice);
                break;
            case 'w':
                turnWest(dice);
                break;
            case 'e':
                turnEast(dice);
                break;

            }
        }
        printf("%d\n", dice[0]);
        //init
        for (int i = 0; i < 6; i++)
            dice[i] = i+1;
        d.clear();
    }
    return 0;
}
