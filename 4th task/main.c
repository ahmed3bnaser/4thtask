#include <stdio.h>

#include <stdlib.h>

int main()

{

int sum=0;

FILE *FP;

FP = fopen("task.txt", "r+");



int number[2];

int i;

if (FP == NULL)

{

printf("Error Reading File\n");

exit (0);

}

for (i = 0; i < 2; i++)

{

fscanf(FP, "%d,", &number[i] );

}

for (i = 0; i < 2; i++)

{

sum=sum+(number[i]);

}



printf( FP,"answer: %d\n\n", sum);

return 0;

}
