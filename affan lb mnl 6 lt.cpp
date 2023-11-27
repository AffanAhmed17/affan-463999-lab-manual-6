#include<iostream>
using namespace std;

int main(){
	//LAB TASK
	//task 1
	int x;
	cout<<"enter the number of terms:";
	cin>>x;
	
	int a=0, b=1;
		for (int i=0; i<x; i++){
			cout<<a;
			int sum=a;
			a=b;
			b= sum + a;
			
		} 
		
    //task 2
    cout<<"enter number of rows:";
    int num_rows;
    cin>>num_rows;
  
    for (int i = 0; i < num_rows; i++) {
        int coefficient = 1;
 
        for (int j = 0; j < num_rows - i - 1; j++) {
            cout << "   ";
        }
 
        for (int j = 0; j <= i; j++) {
            cout << "      " << coefficient;
            coefficient = coefficient * (i - j) / (j + 1);
        } 
        
        

        cout << endl;
    }
    
    //HOME TASK
    //task 1
     int sum = 0;

    for (int num = 2; num <= 50; ++num) {
        bool isPrime = true;

        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;  
            }
        }

        if (isPrime) {
            sum += num;
        }
    }

    cout << "Sum of prime numbers from 1 to 50: " << sum << endl;
    //task 2
     int rows = 5;  

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
          }
    //task 3
     int rows = 4;

    for (int i = 0; i < rows; i++)
	{
    	if (i == 0)
    	{
    		cout<<1;
		}
		else
		{
        	for (int j = 0; j < i*2 ; j++)
			{
        	    cout <<  i*2 << " ";
        	}
        }
        cout << endl;
    }


	
	return 0;
}

