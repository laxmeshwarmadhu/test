#include<stdio.h>
int a[20]={1,1,0,1,0,0,1,1,1,0,1,0,1,0,1,1,1,1,0,0};

int main()
{
 int level=0,i=0,rise=0,fall=0;
 //printf("Detection of rise, fall and level edges\n\n Falling edge=%d ");

 for(i=00;i<19;i++)
 {
 if(a[i]==a[i+1])
 {
  printf("sample %.2d :%d \t|| voltage level %d=level edge\n",i,a[i],a[i]);
  level++;
 }

 else if(a[i]<a[i+1])
 {
  printf("sample %.2d :%d \t|| voltage level %d=Rising edge\n",i,a[i],a[i]);
  rise++;
 }
 else if(a[i]>a[i+1])
 {
  printf("sample %.2d:%d \t|| voltage level %d=Falling edge\n",i,a[i],a[i]);
  fall++;

 }
}
 printf("\nTotal number of rising edge=%d, falling edge=%d, level=%d\n",rise,fall,level);
}
