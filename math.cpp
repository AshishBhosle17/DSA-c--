//Problem statement - You are given a number ’n’.
//Find the number of digits of ‘n’ that evenly divide ‘n’.

int countDigits(int n){
	int temp = n, count = 0; 
    while (temp != 0) { 
        // Fetching each digit of the number 
        int d = temp % 10; 
        temp /= 10; 
  
        // Checking if digit is greater than 0 
        // and can divides n. 
        if (d > 0 && n % d == 0) 
            count++; 
    } 
  
    return count;	
}

//Palindrome 

bool palindrome(int n) {
    int revNum = 0;
    int dup = n;

    while (n > 0) {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }

    if (dup == revNum) {
        return true;
    } else {
        return false;
    }
}

//Check Prime

#include<iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	int cnt =0;
	for(int i=1;i*i<=n;i++) {
          if (n % i == 0) {
            cnt++;
            if ((n / i) != i)
              cnt++;
          }
        }
        if (cnt == 2)
          cout << "true";
        else
          cout << "false";
}
