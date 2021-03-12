/*
    Problem statement : Accept string from user and one charcter return the first occurance of that character
 
 Input : "Hello"
            l
 Output : 2

 Input : "Hello World"
            o
 Output : 4
 
 Input : "AE Demo"
                e
 Output : 4

 Input : "AE Demo"
               H
 Output : -1

 */
 
  #include<stdio.h>
 
 int FirstOccurence(char str[],char ch)
 {
     int i = 0;
	 
     while(str[i] != '\0')
	 {
	    if(str[i] == ch)
		{
          break;
		}
		i++;
	 }	
	 
	 if(str[i] == ch)
	 {
        return i;	
	 }
	 else
	 {
		 return -1;
	 }
 }
 
 
 int main()
 {
   char carr[30];
   int iRet = 0;
   char ch = '\0';
   
   printf("Enter The String \n");
   scanf("%[^'\n']s",carr);            // // Accept the input till user enerets enter key //not necessary to write &ch because array name consider as first index
   
   printf("Enter the character to check the first occurance \n");
   scanf(" %c",&ch);
   
   iRet = FirstOccurence(carr,ch);
   
   if(iRet == -1)
   {
	   printf("Given character is not present \n");
   }
   else
   {
     printf(" first occurance of given character is: %d\n", iRet);
   }
 
 return 0;
 }
 
 /*
 output
 
 D:\ProgramTopicWise\LB\4ProblemsOnString\FirstOccurence>myexe
Enter The String
nikita
Enter the character to check first occurance
p
Given character is not present

D:\ProgramTopicWise\LB\4ProblemsOnString\FirstOccurence>myexe
Enter The String
nikita
Enter the character to check first occurance
n
 first occurance of given character is: 0
 
 */