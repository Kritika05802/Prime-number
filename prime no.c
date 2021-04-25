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






















