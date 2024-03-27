/* https://www.naukri.com/code360/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
   int n;
    cin >> n;

    // Check if n is within the specified constraints
    if (n <= 0 || n > 10000) {
        cout << "Invalid input. n should be between 1 and 10000.\n";
        return 1; // Exit with error status
    }

    int prev = 1;
    int curr = 1;

    for (int i = 3; i <= n; ++i) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }

    cout << curr << endl;

    return 0;
       
}
