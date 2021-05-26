/** \file revision.cpp
 *  \version   0.1
 *  \date      2021-2021
 *  \author     Martdeli
 *  \copyright University of Nicosia.
 */


#include <iostream>

using namespace std;

//function prototypes
int sumofrange(int start_val,int end_val);
int productofrange(int start_val,int end_val);
bool ispositive(double value);


int main()
{
    int choice=0;
    int num1;
    int num2;
    
    cout<<"choose an option"<<endl;
    
    cout<<"1) to calculate range"<<endl;
    
    cout<<"2) to find product of range"<<endl;
    
    cout<<"3) to check if a number is positive"<<endl;
    
    cout<<"choose a choice"<<endl;
    cin>>choice;
    if(choice==1)
    {
        cout<<"enter starting value "<<endl;
        cin>>num1;
        
        cout<<"enter an end value"<<endl;
        cin>>num2;
        
        sumofrange(num1, num2);
    }
    
    if(choice==2)
    {
        cout<<"enter starting value "<<endl;
        cin>>num1;
        
        cout<<"enter an end value"<<endl;
        cin>>num2;
        
        productofrange(num1, num2);
    }
    
    
    if(choice==3)
    {
        
    }
    
    
}

int sumofrange(int start_val,int end_val)
{
    int sum=0;
    
    for(int i=start_val; i<=end_val; i++)
    {
        sum=sum+i;
    }
    
    cout<<"sum of range is"<<sum<<endl;
    
    return 0;
}

int productofrange(int start_val, int end_val)
{
    int product=1;
   
    for(int i=start_val; i<=end_val; i++)
    {
        product= product*i;
    }
    
    cout<<"product is "<<product<<endl;
    
    return 0;
}

