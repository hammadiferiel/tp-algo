#include<stdio.h>
void tri (int T[]){
int i,j,m;
for(i=0;i<10;i++){
for(j=i+1;j<10;j++){
if(T[i]<T[j]){
m=T[i];
T[i]=T[j];
T[j]=m;
}
}
}
printf("les valeurs de tableaux par ordre decroissant :\n");
for(i=0;i<10;i++){
printf("%d \n",T[i]);
}
}
int main (){
int T[10];
for (i=0;i<10;i++){
printf(" veuillez entrer les valeurs de T \n");
scanf("%d",&T[i]);
}
tri(T);
return 0;
}
