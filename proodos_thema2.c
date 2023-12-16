#include <stdio.h>
int main(){
    int i,a1=0,tm,vathm,count=0,suma1=0;
    float mo=0.0;
    for (i=1; i<=3; i++){
    printf("dose tmima kai vathmo: \n");
    scanf("%d %d",&tm,&vathm);

        if (tm==1) {
        count++;
        suma1 +=vathm;
        mo=suma1/count;
        }
    }
    printf("to A1 exei %d mathites \n",count);
    printf("o MO tou A1 einai %f \n",mo);
return 0;
}
