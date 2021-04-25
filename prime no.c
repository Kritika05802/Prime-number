//prime no. using recursion-calling of the function again again 
#include<stdio.h>
int primenumber(int n,int i); //func.decleration

int main()
{ int n,check;
  printf("Enter any number: ");
  scanf("%d",&n);
  check = primenumber(n,n/2);
  if(check==1)
  { printf("%d is a prime number\n",n);
  }
  else
  { printf("%d is NOT a prime number\n",n);
  }
return 0;
}

int primenumber(int n, int i) //calling of the function
{ if(i==1)
  {  return 1;}
  else //if (n%i==0)
  { if(n%i==0)
    
   {  return 0;
}
  else
  { return primenumber(n,i-1);
  }
}
}




















//program to check prime no.s
//#include<stdio.h>
////#include<conio.h>
//main()
//{ int n,a,flag=0,c;
//  //clrscr();
//  printf("Enter any positive integer:\n");
//  scanf("%d",&n);
//  for(a=2;a<=n/2 && flag==0;a++);
//  { c=n%a;
//    if(c==0)
//     { flag=1; 
//	 }
//  }
//  if(flag==0)
//  { printf("\n%d is a prime number",n);
//  }
//  else
//  { printf("\n%d is not a prime number",n);
//  }
////getch();
//
//}












//#include <stdio.h>
//int main() {
//  int n, i, flag = 0;
//  printf("Enter a positive integer: ");
//  scanf("%d", &n);
//
//  for (i = 2; i <= n / 2; ++i) {
//    // condition for non-prime
//    if (n % i == 0) {
//      flag = 1;
//      break;
//    }
//  }
//
//  if (n == 1) {
//    printf("1 is neither prime nor composite.");
//  } 
//  else {
//    if (flag == 0)
//      printf("%d is a prime number.", n);
//    else
//      printf("%d is not a prime number.", n);
//  }
//
//  return 0;
//}
