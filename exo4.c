include<stdio.h>
void tri (int T[]){
int n=0,e=0;
int i;
int m;
while (n<e){
m=T[n];
T[e]=m;
n++;
e--;
}
printf("les element du tab par ordre decroissan :\n");
for(i=0;i<10;i++){
printf("%d \n",T[i]);
}

}
int main (){
int T [10];
int i,j,m;
for(i=0;i<10;i++){
printf("veuillez entrer les valeurs de T \n");
scanf("%d",&T[i]);
}
for(i=0;i<10;i++){
for(j=i+1;j<10;j++){
if(T[i]>T[i]){
m=T[i];
T[i]=T[j];
T[j]=m;
}
}
}
tri(T);
return 0;
}

