/*Задача 7. Напишете функция, която прави същото, както в задача
6, но е рекурсивна.
*/
#include<stdio.h>

int recfunc(int a){
    if(a==1){
        return 1;
    }else{
        return a*recfunc(a-1);
    }
   
}
int main(){
    int a=30;
    int rez=recfunc(a);
    printf("%d\n",rez);
    return 0;
}