#include<stdio.h>
int main(){
    int first=0,next,second=1;
    int c,n;
    printf("Enter the no of fibonacci terms :\n");
    scanf("%d",&n);
    printf(" Required fibonacci series :\n");
    for(c=0;c<n;c++){
     if(c<=1){
         next=c;
      }
      else{
          next=first+second;
          first=second;
          second=next;
      }
        printf("%d\t",next);
}
return 0;
}
