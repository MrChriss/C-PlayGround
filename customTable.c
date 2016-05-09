#include <stdio.h>

int main(void)
{
        int  input_1 = 0;
        int  input_2 = 0;
        int    vrsta = 0;
	int i,j,k;

        printf("input 1: ");
        scanf(" %d", &input_1);

        printf("input 2: ");
        scanf("%d", &input_2);

        for(i = 1; i <= input_2 ; ++i)
        {

                printf("\n");

                for(j = 1 ; j <= input_1 ; ++j)
                {
                        vrsta = i * j;
                        printf("%5d    |", vrsta);
                }  

                printf("\n");
                    
                for (k = 1; k <= input_1 ; ++k)
                {
                        printf("----------");
                }
        }
	printf("\n\n");
        return 0;

}
