#include<stdio.h>
int func(int d,int m,int y){
  int v1,v2,v3,v4,v5;
  int s1=0,s2=0,s3=0,s4=0;
  v1=d;
 // printf("%d\n",v1);
  switch ( m ){
    case 1: v2=1;
	    break;
    case 2: v2=4;
	    break;
    case 3: v2=4;
	    break;
    case 4: v2=0;
	    break;
    case 5: v2=2;
	    break;
    case 6: v2=5;
	    break;
    case 7: v2=0;
	    break;
    case 8: v2=3;
	    break;
    case 9: v2=6;
	    break;
    case 10: v2=1;
	    break;
    case 11: v2=4;
	    break;
    case 12: v2=6;
	    break;
    default : break;
  }
 // printf("%d\n",v2);
  s1=y%10;
  y=y/10;
  s2=y%10;
  y=y/10;
  s1=s2*10+s1;
  v3=s1;
  s3=y%10;
  y=y/10;
  s4=y%10;
  s3=s4*10+s3;
 // printf("%d\n s3=:%d\n",v3,s3);
  v4=s1/4;
 // printf("%d\n",v4);
  switch( s3 ){
  case 16: v5=6;
	   break;
  case 17: v5=4;
	    break;
  case 18: v5=2;
	    break;
  case 19: v5=0;
	    break;
  case 20: v5=6;
	    break;
  default : break;
  }
 // printf("%d\n",v5);
  return (v1+v2+v3+v4+v5);
}
int main()
{
 int d,m,y,res,final=0;
 printf("Enter Date : ");
 scanf("%d\n%d\n%d",&d,&m,&y);
 res =func(d,m,y);
 final=res%7;
 switch( final){
 case 1: printf("Sunday");
	 break;
 case 2: printf("Monday");
	 break;
 case 3: printf("Tuesday");
	 break;
 case 4: printf("Wednesday");
	 break;
 case 5: printf("Thrusday");
	 break;
 case 6: printf("Friday");
	 break;
 case 0: printf("Saturday");
	 break;
 default: printf("Invald Date :");
	 break;
 }
return 0;
}