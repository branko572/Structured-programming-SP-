/*

Од стандарден влез се внесуваат два цели броја N и Х.

Да се најде најблискот број помал од N коj е тотално различен од бројот Х.

Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.

Задачата да се реши без употреба на низи и матрици.

For example:

Input	Result
88 7
86



 */


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a=0,b=0,temp=0,cifra=0,flag = 0, a1=0;
    scanf("%d %d", &a, &b);
    for(a=a-1;a>0;a--){
        flag=0;
        int tempA=a;
        while(tempA!=0){
            int temp = tempA%10;//posledna cifra

            int tempB = b;
            while(tempB!=0){
                int temp2 = tempB%10;

                if(temp2==temp){
                    flag = 1;
                    break;
                }
                tempB/=10;
            }
            if(flag==1){
                break;
            }

            tempA/=10;
        }
        if(flag==0){
            a1=a;
            break;
        }
    }
    if(flag==0){
        printf("%d", a1);

    }
    else{
        printf("0");
    }
    return 0;
}
