#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
     // Declare second integer, double, and String variables.
    int i2;
    double d2;
    char *s2;
    s2 = malloc (100*sizeof(char));
    
    scanf("%d\n", &i2);
    scanf("%lf\n", &d2);
    //printf ("took float and double\n");
    //fflush(stdin);
    fgets (s2, 100, stdin);
    //scanf ("%[^\n]", s2);
    //scanf("%10[0-9a-zA-Z ]", s2);
    //printf ("%s\n", s2);
    
    printf ("%d\n", i + i2);
    
    // Print the sum of the double variables on a new line.
    printf ("%.1f\n", d + d2);
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf ("%s%s\n", s, s2);
    free (s2);

    return 0;
}