#include<stdio.h>
void tri(int T[6]){
int i,j,l,f;
for(i=0;i<5;i++){
l=1;
for(j=i+1;j<5;j++){
if(T[i]>T[l]){
l=j;
}
}
if(l!=i){
f=T[i];
T[i]=T[l];
T[l]=f;
}
}
for(i=0;i<5;i++){
printf("%d",T[i]);
}
}
int main(){
int i,T[5];
for(i=1;i<5;i++){
printf("veuillez entrer les valeurs de T \n");
scanf("%d",&T[i]);
}
tri(T);
return 0;
}

