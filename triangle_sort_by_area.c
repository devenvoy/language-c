#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void swap(triangle* t1, triangle* t2);
int getTriangleArea(triangle t);

void sort_by_area(triangle* tr, int n) {
    int* area_of_t = (int*) malloc(n * sizeof(int));
	for(int i = 0; i < n ; i++){
        area_of_t[i] = getTriangleArea(tr[i]);
    }

    for (int k = 0; k < n; k++) {
        for (int j = k+1; j < n ; j++) {
            if (getTriangleArea(tr[k]) > getTriangleArea(tr[j])) {
                swap(&tr[k], &tr[j]);
            }
        }
    }
}

void swap(triangle* t1, triangle* t2){
    triangle temp = *t1;
    *t1 = *t2;
    *t2 = temp;
}

int getTriangleArea(triangle t){
    int p = (t.a+t.b+t.c)/2;
    return (int) sqrt(p * (p-t.a) * (p-t.b) * (p-t.c));
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}

/*
20
23 37 47
22 18 5
58 31 31
28 36 40
54 62 11
31 41 14
53 18 54
41 38 55
55 44 44
44 48 18
26 41 65
20 23 21    
58 61 50
28 56 56
20 39 32
33 45 49
26 41 62
31 46 39
48 49 67
*/