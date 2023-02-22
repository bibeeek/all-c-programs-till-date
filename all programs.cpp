//to add two integer
   

#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum is:%d",sum);
	
}



//vloume of sphere using const keyword

#include<stdio.h>
int main()
{
	float r,v;
	const float pie=3.14;
	printf("enter radius");
	scanf("%f",&r);
	v=4/3*(pie*r*r*r);
	printf("volume of sphere is:%f",v);
}


	
	
//to find roots of quadratic equation

#include<stdio.h>
#include<math.h> //for sqrt keyword
int main()            //f0r some reason this doesnt give correct ouutput idk
{
	float a,b,c,r1,r2,z,x;
	printf("enter value of a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	z=sqrt(b*b-(4*a*c));
	x=sqrt(b*b-(4*a*c));
	r1=(-b+x)/2*a;
	r2=	(-b-z)/2*a;
	printf("root 1 is %f",r1);
	printf("root 2 is %f",r2);
	
	
	}	
	
	


//some exapmle of type casting

//implicit type casting
 #include<stdio.h>
 int main()
 {
 	float x;
 	int b=10;
 	char a='A';
 	x=a+b;
 	printf("value of x :%f",x);
 	
 	
 	//b is changed to float and a is changed to float
 	
	}	
	 
	 
//explicit type casting
#include<stdio.h>
int main()
{
	float x;
	int a=1,b=2;
	x=(float)a/b;
	printf("value of x is%f",x);
	
	
	
}


//escape sequence
#include<stdio.h>
int main()
{
	printf("hello");
	printf("\nI am using c language");    // use "\a" for beep and \t for space
}



// opetators:

//relational operator
// it contains >,<,>=,<=,!=
#include<stdio.h>	
int main()
{
	int a=10,b=11;
	if(a>b){
		printf("false");
	}
	else{
		printf("true");
	}
}



//assignment operator
// for ex a=b(value of a is assigned to b), a=a+2 or a+=2 (2 is added to a and result is assigned to a)

//conditional operator
 //program to find max among 2 number

 #include<stdio.h>
 int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	if(a==b){
		printf("same number");
		return 0;
		
	}
	(a>b)?printf("%d is max",a):printf("%d is max",b);
	
	
	
}



//logical operator
//3 logical operators are &,||,! "and" "or" "not" respectively
// to find max among 4 numbers
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter four numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a==b&&b==c&&c==d)
{
	printf("all number are same");
	return 0;
}
	(a>b&&a>c&&a>d)?printf("%d is max",a):(b>c&&b>d)?printf("%d is max",b):(c>d)?printf("%d is max",c):printf("%d is max",d);
	
	
	
}




//increment decrement operator
//two type: pre post;++Apre a++ post
 //simple exapmle
 
 #include<stdio.h>
 int main()
 {
 	int a=10,b=20,x;
 	x=(a++ + ++a)-b;
 	x=(++a + ++b)-x++;
 	printf("value of a=%d",a);
 		printf("value of b=%d",b);
 		printf("value of x=%d",x);
 	
 	
 	
 }
 

 
 
 //wap to convert given numbers of days into years month and date
 
 #include<stdio.h>
 int main()
 {
 	int yr,month,days,num;
 	printf("enter number of days you want to convert");
 	scanf("%d",&num);
 	yr=num/365;
 	month=(num-(365*yr))/30;
 	days=(num-(365*yr))-(month*30);
 	
 	printf("%d year %d month %d days",yr,month,days);
 	
 }
  
  
  #include<stdio.h>
  int main()
  {
  	int gm,kg;
  	printf("enter wt in gram");
  	scanf("%d",&gm);
  	kg=gm/1000;
  	gm=(gm-(kg*1000));
  	printf("%d kg %d gm",kg,gm);
  	
  }
 
  
  
  
//control structure

//if else statement
//nested if else
//else if ladder

//simple if else statement

#include<stdio.h>
int main()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
	if(age>=18){
		printf("you can vote");
		
	}
	else{
		printf("you cannot vote");
		
	}
}


 //odd or even
 
 #include<stdio.h>
 int main()
 {
 	int a;
 	printf("enter number");
 	scanf("%d",&a);
 	if(a%2==0){
 		printf("no iseven");
 		
	 }
 	else{
 		printf("no is odd");
	 }
 	
 }
 
  
 
 // vowel or consonant or specail symbol or  digit
 #include<stdio.h>
 int main()
 {
 	char a;
 	printf("enter a  character");
 	scanf("%c",&a);
 	if((a>='a'&&a<='z')||(a>='A'&&a<='Z')){
 		if(a=='A'||a=='E'||a=='I'||a=='0'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
 				printf("%c is vowel",a);
		 
		 }
		 else{
		 	printf("%c is consonant",a);
		 }
	}
 	else if(a>='1'&&a<='9'){
 		printf("%c is digit",a);
 		
	 }
	 else{
	 	printf("special symbol");
	 }
	 
}
 	
 
