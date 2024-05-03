/* ---- Calculate Gotham City's' Population after the year 1990 ---- */
    /* Statement of input(s) current year, year*/
    /* Statement of output(s) Gotham cities population for the given year.*/

/* Problem Statement: This program calculates the population of Gotham City after the year 1990 */
/* Author: Ian Langelett */
/* Created Date: 02/13/2024 */
/* Revised by: Ian Langelett */
/* Revision Date: 02/20/2024 */



/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */

#include <stdio.h>      /* printf, scanf definitions */
#include <math.h>       /* math function definitions */

    /* ---- Constant macro definitions ---- PI 3.14159*/
#define t 2.148

/* ---- Function prototype definitions ---- */
     /*returndatatype functionname (argumentdatatype argumentname);*/
void population(int year);
/* ---- Declare Global variables ---- */

/* ---- Main Function ---- */
int
main(void)
{
int year;

 /* Display user instructions */
printf("*** Predicts the future population of Gotham City ***/n");
printf("Enter a year greater than 1990 -> /n");
scanf("%d", &year);

population(year);  /*population sub-function call*/

return (0);

}

/* Calculates future population */
void
population(int year)
{

    double p;
     p = 53.966 + ((year - 1990) *t);
     printf("/nPredicted Gotham City population for %d: %.3f/n", year, p);

}
/* ---- Function subprograms ---- */

    /* Description of subprogram actions */
