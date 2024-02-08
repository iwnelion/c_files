#include <stdio.h>
#define SIZE 5

int main()
{
    int image[SIZE][SIZE] = {
        {1,0,1,0,1},
        {0,1,0,1,0},
        {0,1,1,1,0},
        {1,0,1,0,1},
        {1,1,0,1,1}
    };
    
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            if(image[i][j] == 0)
                printf("⬛ ");
            else
                printf("⬜ ");
        }
        printf("\n");
    }

    return 0;
}
/* PRINTS:
⬜ ⬛ ⬜ ⬛ ⬜ 
⬛ ⬜ ⬛ ⬜ ⬛ 
⬛ ⬜ ⬜ ⬜ ⬛ 
⬜ ⬛ ⬜ ⬛ ⬜ 
⬜ ⬜ ⬛ ⬜ ⬜ */
