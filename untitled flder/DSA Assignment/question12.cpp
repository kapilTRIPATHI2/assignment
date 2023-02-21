#include<iostream>
#include<string>
using namespace std;
//function to check if the string is Palindrome
int isPalindrome(char *str, int n)
{
 //the first index
 int start_index = 0;
 
 //the last index
 int last_index = n-1;
 
 while(start_index < last_index && str[start_index] == str[last_index])
 {
  //increment start index and decrement last index
  start_index++;
  last_index--;
 }
 
 if(start_index < last_index)
 {
  //this means that we did not reach the center
  cout<<"NOT A PALINDROME"<<endl;
  return 0;
 }
 else
 {
  //we reached the center
  cout<<"PALINDROME"<<endl;
  return 1;
 }
}

int main(void)
{
 char *s1 = "abaXaba";
 
 char *s2 = "aaabbbXbbbaaa";

 
 char *s3 = "abababababbabXbababbbbabba";
 
 int x;
 x = isPalindrome(s1,7);
 x = isPalindrome(s2,13);
 x = isPalindrome(s3,27);
 return 0;
}
