#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array []= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    int f = 0 , eco = 5 ;


    while (f<=4||eco<=14){
for(int k =0 ; k < 15 ; k++){

            printf("%d ",array[k]);
        }
        printf("\n");
        printf("Please type 1 for first class\n");

        printf("Please type 2 for economy\n");


        int number ;

        scanf("%d",&number);

        if(number==1&&f<=4){
            array[f] = 1;
            f++;

        }
        if (number==2&&eco<=14){



            array [eco] = 1;
               eco ++;
        }

        if (f==5){
            printf("First class full. Next flight leaves in 3 hours.\n");
        }
        if (eco == 15){
           printf("Economy class full. Next flight leaves in 3 hours.\n");


        }



    }

      for(int k =0 ; k < 15 ; k++){

            printf("%d ",array[k]);
        }

    return 0;
}
