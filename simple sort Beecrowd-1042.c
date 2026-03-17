#include <stdio.h>

int main() {
  int arr[3],temp;

  for(int i=0;i<3;i++)
  {
      scanf("%d",&arr[i]);
  }
 int num1=arr[0];
  int num2=arr[1];
 int num3=arr[2];


 for(int i=0;i<3-1;i++)
 {
     for(int j=0;j<3-1-i;j++)
     {
       if(arr[j]>arr[j+1])
       {
         temp=arr[j] ;
         arr[j]=arr[j+1];
         arr[j+1]=temp;
       }
     }
 }


 for(int i=0;i<3;i++)
 {
    printf("%d\n",arr[i]);
 }
printf("\n");

printf("%d\n",num1);
printf("%d\n",num2);
printf("%d\n",num3);

    return 0;
}
