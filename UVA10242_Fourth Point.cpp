#include<stdio.h>
#include<math.h>
int main() {
    double points[8] = { 0 };
    double x, y;
    while (scanf_s("%lf", &points[0]) != EOF) {
        for (int i = 1; i < 8; i++) {
            scanf_s("%lf", &points[i]);
        }
        if (points[0] == points[4] && points[1] == points[5])
            printf("%.3lf %.3lf\n", points[2] - points[0] + points[6], points[3] - points[1] + points[7]);
            // 1 3同    
        else if(points[0] == points[6] && points[1] == points[7])
            printf("%.3lf %.3lf\n", points[2] - points[0] + points[4], points[3] - points[1] + points[5]);
            // 1 4同
        else if (points[2] == points[4] && points[3] == points[5])
            printf("%.3lf %.3lf\n", points[0] - points[2] + points[6], points[1] - points[3] + points[7]);
            // 2 3同
        else
            printf("%.3lf %.3lf\n", points[0] - points[2] + points[4], points[1] - points[3] + points[5]);
            // 2 4同
    }
    return 0;
}