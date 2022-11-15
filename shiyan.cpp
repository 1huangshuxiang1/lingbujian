#include<stdio.h>


int main()
{
	int a[10],n,i,sum=0,j,x;
	float avg;
	char s[10][20];
	scanf("%d",&n);

	  for(i=0;i<n;i++)
		 {

		  scanf("%s",s+i);
		  scanf("%d",a+i);}
	  for(i=0;i<n;i++)
	    printf("%s  %d   ",s[i],a[i]);
        printf("\n");
        for(i=0;i<n;i++)
            sum+=a[i];
        avg=sum*1.0/n;
        printf("平均值Ì为%.2f\n",avg);
     printf("以下为大于平均值飞行高度的飞机型号?\n");
     for(i=0;i<n;i++)
        if(a[i]>avg)
        printf("%s\n",s[i]);
        for(i=0;i<n;i++)
            for(j=0;j<n-i-1;j++)
            if(a[j]<a[j+1])
              x=a[j],a[j]=a[j+1],a[j+1]=x;
		printf("飞行高度从大到排列为a\n");
        for(i=0;i<n;i++)
            printf("%d   ",a[i]);



	return 0;}
