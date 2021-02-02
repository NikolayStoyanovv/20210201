/*Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30.*/
#include<stdio.h>

int func(int a,int b){
   long int sum=1;
    for(int i=a;i<=b;i++){
        sum*=i;
        
    }
    return sum;
}
int main(){
    int a=1,b=30;
   long int rez=func(a,b);
    printf("%ld\n",rez);
    func(a,b);
    return 0;
}