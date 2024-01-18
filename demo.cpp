#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char character;
		
	cin>>character;
	if (isupper(character)) {
        cout << 1;
    } else if (islower(character)) {
        cout << 0;
    } else {
        cout << -1;
    }
	return 0;

}

// Data Types

int dataTypes(string type) {
	
	if(type == "Integer") return 4;

	else if (type == "Float") return 4;
	else if (type == "Double") return 8;
    else if (type == "Character") return 1;
	else if (type == "Long") return 8;

    else return 0;

}

// If - else

string compareIfElse(int a, int b) {
	if (a>b) return "greater";
	else if (a<b) return "smaller";

	else return "equal";
}

// Switch case statement

double areaSwitchCase(int ch, vector<double> a) {
	
	switch(ch){
		case 1:
			return M_PI*a[0]*a[0];
			break;
		case 2:
			return a[0]*a[1];
			break;
	}
}

// For - loops
#include<bits/stdc++.h>
using namespace std;

int main()
{
        int index;
        cin>>index;
        int ans = 1;
        if (index < 3) cout<<ans;
        else {
                int first_element = 1;
                int second_element = 1;
                for(int i = 3; i<=index; i++) {

                        ans = first_element + second_element;
                        first_element = second_element;
                        second_element = ans;
                }
                cout << ans;
        }
}

// while - loops

#include<iostream>
using namespace std;

int main() {
	// Sum of Even & Odd
	int even=0, odd=0,n;

    cin>>n;

    while(n!=0)
    {
        int x=n%10;

        if(x%2==0){
            even+=x;

        }

        else{
            odd+=x;

        }

        n=n/10;

    }

    cout<< even<<" "<<odd;
	
}

// Functions - pass by value & reference

#include <iostream>
using namespace std;
int Maximum(int x, int y)
{
	if(x>y)

    return x;

    else

    return y;

}

void Swap(int &x, int &y)

{
    int w;

    w=x;
    x=y;
    y=w;

}

int main()

{

    int test, a, b, r;

    cin >> test;
    cin >> a >> b;

    switch (test)

    {
    case 1:

        r = Maximum(a, b);

        cout << r;

        break;

    case 2:

        Swap(a, b);

        cout << a << " " << b;

        break;

    default:

        cout << "Invalid test option";

    }

    return 0;
}
// Patterns in DSA. 

void nForest(int n) {
	// Write your code here.
	for (int i=0; i<n; i++){
		for (int j=0; j<=i; j++){
			cout<< "* ";
		}
		cout << endl;

	}
}

void nTriangle(int n) {
	// Write your code here
	for (int i=1; i<=n; i++){
		for(int j=1;j<=i; j++){
			cout <<j<< " ";
		}
		cout<< endl;
	}
}

void seeding(int n) {
	for (int i=1; i<=n; i++){
		for (int j=0; j<n-i+1; j++){
			cout << "* ";
		}
		cout << endl;
	}
}

void nNumberTriangle(int n) {
    for (int i=1; i<=n; i++){
		for (int j=1; j<=n-i+1; j++){
			cout << j<< " ";
		}
		cout << endl;
	}
}

void nStarTriangle(int n) {
    for (int i=0; i<n; i++){
        //space
        for(int j=0; j< n-i-1; j++){
            cout << " ";

        }
        //stars
        for (int j=0; j< 2*i+1; j++){
            cout <<"*";
        }
        //space
        for(int j=0; j< n-i-1; j++){
            cout << " ";

        }

        cout<< endl;
    }
}

void nStarTriangle(int n) {
   for (int i=0; i<n; i++){
        //space
        for(int j=0; j<i; j++){
            cout << " ";

        }
        //stars
        for (int j=0; j< 2*n - (2*i+1); j++){
            cout <<"*";
        }
        //space
        for(int j=0; j<i; j++){
            cout << " ";

        }

        cout<< endl;
    }
}

void nStarTriangle(int N) {
    
    for(int i=1;i<=2*N-1;i++){
          
          // stars would be equal to the row no. uptill first half 
          int stars = i;
          
          // for the second half of the rotated triangle.
          if(i>N) stars = 2*N-i;
          
          // for printing the stars in each row.
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          
          cout<<endl;
      }
}