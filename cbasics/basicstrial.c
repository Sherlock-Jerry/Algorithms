#include<stdio.h>
void main(){
  int a,b,sum,i,p,j;
  printf("enter 2 nums:");
  scanf("%d%d",&a,&b);

  // swap without 3rd variable
a=a+b;
b=a-b;
a=a-b;
printf("%d%d",a,b);

  // (a>b)?printf("%d is greater",a):printf("%d is greater",b);

  // printf("%d\n",a+b);




// i=5;
// // j=i++;=>j=5,i=6
// j=++i;
// // =>j=6,i=6
// printf("%d\t%d\n",i,j);
// p=5;
// ++p; or p++ makes no difference
// printf("%d\n",p );


}
