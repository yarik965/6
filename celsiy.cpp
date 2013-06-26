#include<stdio.h>
#include<conio.h>
#include <locale.h>
float farengeit(float);
float celsiy(float);
int main() 
{
    setlocale(LC_ALL,"ukrainian");
    float t, a, b;
    char l;
    printf("Введіть F якщо вводите за Фаренгейтом \n Введіть C, якщо за Цельсієм");
    scanf("%c", &l);
    switch(l)
    {
    case'f': printf("Введіть температуру в Фаренгейтах:"); break;
    case'F': printf("Введіть температуру в Фаренгейтах:"); break;
    case'C': printf("Введіть температуру в Цельсіях:"); break;
    case'c': printf("Введіть температуру в Цельсіях:"); break;
    default: printf("Помилка програми: введено ні С, ні F");
    }
    scanf("%f", &t);
    if(l=='F' || l=='f')
        float T=celsiy(b);
    if(l=='c' || l=='C')
        float T=farengeit(a);
    getch();
    return 0;
}
float farengeit(float x)
{
    return x/2;
}
