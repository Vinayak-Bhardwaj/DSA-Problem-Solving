#include<stdio.h>
// struct student
// {
//     char *name;
// };

// struct student s;

// struct student fun(void)
// {
//     s.name = "newton";
//     printf("%s-", s.name);
//     s.name = "alan";
//     return s;
// }

int main() {
    int i = 0;
    while(i+1)
        while(i<<2)
            while(i > 5) {
                printf("Loop ");
                if(i == 3) {
                    break;
                }
            }
    return 0;
}

// void f2(int p  = 30) 