#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

unsigned reverse(unsigned num){
  unsigned reversed = 0;
  while(num){
    reversed = reversed*10+num%10;
    num = num/10;
  }
  return reversed;
}

int main(){
	int n;
	cin>>n;
	while(n!=0){
		unsigned num1,num2;
		scanf("%u %u",&num1,&num2);
		printf("%u\n",reverse(reverse(num1)+reverse(num2)));
        n--;
	}
	return 0;
}