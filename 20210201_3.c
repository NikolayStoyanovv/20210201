/*Упражнение 3.* Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата.*/
#include <stdio.h>
#include<ctype.h>
#include<string.h>
    float atof(char *s){
        float result;
        int power=1;
        int n;
        int i;
        n = 0;
    
         for(i = 0; (s[i] >= '0' && s[i] <= '9')||s[i]=='.'||s[i]=='-'; i++){
             if(s[i]!='.'){
            n = 10 * n + (s[i] - '0');
             }else{
                 for(int c=i;(s[c+1] >= '0' && s[c+1] <= '9'); c++){
                 power*=10;
                 }
             }
             if(s[i]=='-'){
                  n = (10 * n + (s[i] - '0'))-2*(10 * n + (s[i] - '0'));
             }
        }
       

return result=(float)n/power;

}


int main(){
    char s[]="-123.69";
    float result=atof(s);
    printf("%f\n ",result);
    atof(s);
   return 0;
}