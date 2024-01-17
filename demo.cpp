#include<iostream>
using namespace std;

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