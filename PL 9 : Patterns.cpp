/*
pattern 1:
* * *
* * *
* * *

*/  

void nForest(int n) {
	// Write your code here.
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

/*
pattern 2:
* 
* *
* * *

*/
void nForest(int n) {
	// Write your code here.
	for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

/*
pattern 3

1
1 2 
1 2 3

*/

void nTriangle(int n) {
	// Write your code here
	  for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j <<" ";
        }
        cout<<endl;
    }
}

/*
pattern 4

1
2 2 
3 3 3

*/


void triangle(int n) {
	// Write your code here
	for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

/*
pattern 5:

* * *
* *
*

*/


void seeding(int n) {
	// Write your code here.
	for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

/*
pattern 6:

1 2 3
1 2
1

*/

void nNumberTriangle(int n) {
    // Write your code here.
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

/*
pattern 7:
  *
 ***
*****

  */

void nStarTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}


/*
pattern 8

*****
 ***
  *

  */

void nStarTriangle(int n) {
    // Write your code here.
      for(int i = 0; i < n; i++){
        for(int j = 0; j<i; j++){
            cout << " ";
        }
        for(int j = 0; j<2*(n-i-1)+1; j++){
            cout << "*";
        }
        for(int j = 0; j<i; j++){
            cout << " ";
        }
        cout << endl;
    }
}


/*
pattern 9

*/




