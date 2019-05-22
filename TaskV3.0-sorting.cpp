#include <iostream>
#include <stdlib.h>
using namespace std;
#define ARRAYSIZE(x) ((sizeof(x))/sizeof(x[0])) 

//new name for the structure.
typedef struct {
    int x;
    int y;
} pair_t;


//cpmoparision function.
int compare_int(const int a , const int b) {
    if ( a < b ) {
        return -1;
    } else if ( a > b ) {
        return 1;
    }
    return 0;
}

int cmp_func(const void *a, const void *b) {
    const pair_t *num1 = (pair_t *)a;
    const pair_t *num2 = (pair_t *)b;

    if (num1->x == num2->x) {
        return compare_int(num1->y, num2->y);
    } else if (num1->x > num2->x) {
        return +1;
    }
    return -1;
}

//to print  array of pairs.
void print_array(pair_t ps[], size_t n) {
        cout<<"[";
    for (size_t i = 0; i < n; i++) {
        cout<<"("<<ps[i].x<<","<<ps[i].y<<")";
        if (i != n-1) {
            cout<<", ";
        }
    }
    cout<<"]\n";
}  

int main(void) {
    pair_t ps[] = {{1,2}, {3,4}, {1,5}, {9,0}};

    cout<<"INPUT :";
    print_array(ps, ARRAYSIZE(ps));

    qsort(ps, ARRAYSIZE(ps), sizeof(pair_t), cmp_func);

    cout<<"OUTPUT :";
    print_array(ps, ARRAYSIZE(ps));

    return 0;
}
