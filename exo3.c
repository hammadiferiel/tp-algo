#include<stdio.h>
void tri(int T[5]){
int i,j,s;
for(i=0;i<5;i++){
s=T[i];
j=i+1;
while(j>=0&&T[i]<=s){
T[j+1]=T[j];
j--;
}
T[j+1]=s;
}
for(i=0;i<5;i++){
printf("%d \n",&T[i]);
}
int main (){
int T[5];
int i;
for(i=0;i<5;i++){
printf("veuillez entrer les valeurs de T \n");
scanf("%d",&T[i]);
}
tri(T);
return 0;
}

