   #include <stdio.h>
   int sum (int num) {
       static int total = 0;
       total += num;
       return total;
   }

   int main() {
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
       return 0;
   }

/* runs: 55 100 150 

-Try to find the sum of some numbers by using the static keyword.
Do not pass any variable representing the running total to the sum() function
*/
