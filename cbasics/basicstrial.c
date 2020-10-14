#include<stdio.h>
int main(){



// greatest of 3
  int a,b,c,sum,i,p,j;
  printf("enter 3 nums:");
  scanf("%d%d%d",&a,&b,&c);
  // if(a>b){
  //   if(a>c){
  //     printf("a gt");
  //   }
  //   else{
  //     printf("c gt" );
  //   }
  // }
  // else{
  //   if(b>c){
  //     printf("b gt");
  //   }
  //   else{
  //     printf("c gt" );
  //   }
  // }

// if(a>=b && a>=c){
//   printf("a gt\n" );
// }
// if(b>=a && b>=c){
//   printf("b gt\n" );
// }
// if(c>=a && c>=b){
//   printf("c gt\n" );
// }


if(a>=b && a>=c){
  printf("a gt\n");
}
else if(b>=a && b>=c){
  printf("b gt\n");
}
else{
  printf("c gt\n" );
}


  // swap without 3rd variable
// a=a+b;
// b=a-b;
// a=a-b;
// printf("%d%d",a,b);

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
