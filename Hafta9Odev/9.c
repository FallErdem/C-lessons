//elektriksel kuvveti fonk yardımı ile hesaplama
#include <stdio.h>
int elekt(int uzaklik,int q1, int q2)
{
    float kuvvet;
    kuvvet=(q1*q2)/(uzaklik*uzaklik);
    return kuvvet;
}

int main()
{
    int uzaklik,q1,q2;
    float ekuvvet;
    printf("Sırası ile yükler arası uzaklık ve yüklerin büyüklüklerini girin."); //Uzaklık değeri tam sayı olmalıdır.
    scanf("%d", &uzaklik);
    scanf("%d", &q1);
    scanf("%d", &q2);
    ekuvvet=elekt(uzaklik,q1,q2);
    printf("Elektriksel kuvvetin değeri:%fxk Newton", ekuvvet);
    return 0;
}
