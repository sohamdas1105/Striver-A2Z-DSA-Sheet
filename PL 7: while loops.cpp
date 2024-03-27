/*https://www.naukri.com/code360/problems/sum-of-even-odd_624650?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf*/

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int digit,evensum=0,oddsum=0;
	cin >>digit;
	while(digit!=0){
		int moddig= digit%10;
		if(moddig%2 ==0){
			evensum+=moddig;
                } else {
                        oddsum += moddig;
                }
                digit /= 10;
        }
                cout<<evensum<<" "<<oddsum<<endl;

	}
