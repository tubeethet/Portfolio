
// PART 1 correct mistakes

++nbackslash;       // only correction i've found

// The C Standard Library function part

printf(%d, char[0]);                // #1
int len = strlen(t);                // #2
exit();                             // #3
FILE *in_file  = fopen(midterm.txt, "r");        // #4

// -----------------------------------------------------------------------------------------

// Using pointers, implement each of the following C standard library functions

// #1

#include <stdio.h>
#include <string.h>

int main () {
    char src[40];
    char dest[12];
    
    memset(dest, '\0', sizeof(dest));
    strcpy(src, "test");
    strncpy(dest, src, 10);
    
    printf("string%s\n", dest);
    
    return(0);
}


// #2

#include <stdio.h>
#include <string.h>

int main()
{
    
    
    char src[50] = "e";
    char dest[50]= "adklds";
    
   
    strncat(dest, src, 5);
    
   
    printf("string: %s\n", src);
    printf("destination : %s", dest);
    
    return 0;
}


// #3


char leftStr[] = "leftstr";
char rightStr[] = "rightstr";

int res = strcmp(leftStr, rightStr);

if (res==0)
printf("equal");
else
printf(" unequal");

printf("\nValue of result: %d" , res);


// ----------------------------------------------------------------------------------------


// PART 3


typedef struct
{
    int a;
    int b;
}

void square_move(square* sq, double x, double y)
{
GRect square = new GRect(0, 0, SQUARE_SIZE, SQUARE_SIZE);
square.setFilled(true);
square.setFill
}


void test_square(double ulx, double uly, double side) {
    square* sq = square_init(ulx, uly, side);
    square_print(“sq is: “, sq);
    square_move(2, 2);
    square_print(“sq is now: “, sq);
    square_expandby(sq, 10);
    square_print(“sq has expanded to: “, sq);
    square_delete(sq);
    printf(“\n\n”);
}

void square_expandby(square* sq, double expandby)
{
#define Square(x)
typeof(x) y = (x);
y*y;
})
}

double square_area(square* sq) {
int side, area;

printf("LENGTH : ");
scanf("%d", &side);

area = side * side;
printf("AREA :", area);

return (0);
}


double square_perimeter(square* r)
{
    
    float s,p;
    
    printf("side");
    scanf("%f",&s);
    
    p=perimeter(s);
    printf("pos %f\n",p);
    return 0;
}



void square_print(const char* msg, square* sq)
    {

if(i==1 || i==N || j==1 || j==N)
{
    /* Print star for 1st, Nth row and column */
    printf("*");
}
else
{
    printf(" ");
}
}


    }
