#include <stdio.h>

void tomb_kiir(int meret, int tomb[]){
    for(int i=0; i<meret; i++){
        printf("%d ",tomb[i]);
    }
    puts("");
}

int sum(const int meret, const int tomb[]){
    int osszeg=0;
    for(int i=0;i<meret; i++){
        osszeg+=tomb[i];
    }
    return osszeg;
}

float avarage(const int meret, const int tomb[]){
    return sum(meret,tomb) / (float)meret;
}


int main(){

int szamok[10]={85,72,45,29,8,35,76,3,88,94};
int meret = 10;
tomb_kiir(meret,szamok);
printf("A tomb elemeinek osszege: %d\n",sum(meret,szamok));
printf("A tomb elemeinek atlaga: %f\n",avarage(meret,szamok));
return 0;

}