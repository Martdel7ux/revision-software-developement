/** \file revision.cpp
 *  \version   0.1
 *  \date      2021-2021
 *  \author     Martdeli
 *  \copyright University of Nicosia.
 */


#include <iostream>
#include<cassert>
using namespace std;

//function prototypes
void menu();
int sumofrange(int start_val,int end_val);
int productofrange(int start_val,int end_val);
bool ispositive(double value);


// main program
int main()
{
    //declaration of variables
    int choice=0;
    int num1;
    int num2;
    int num;
    
    
    
    
    while(choice!=4)//introducing while loop
    {
    menu(); //prints options to the user
    
    //prompts user to enter a choice
     
    cout<<"choose a choice"<<endl;
    cin>>choice;
    
    
    
    if(choice==1)//check if choice is equal to 1
    {
        cout<<"enter starting value "<<endl;//prompt user to enter the first number
        cin>>num1;
        
        cout<<"enter an end value"<<endl; //prompt user to enter the second number
        cin>>num2;
        
        sumofrange(num1, num2);//function call for sum of range
    }
    
    if(choice==2) //check if choice is equal to 2
    {
        cout<<"enter starting value "<<endl;//prompt user to enter the first number
        cin>>num1;
        
        cout<<"enter an end value"<<endl;//prompt user to enter the second number
        cin>>num2;
        
        productofrange(num1, num2);//function call for product of range
    }
    
    
    if(choice==3)//check if choice is equal to 3
    {
        cout<<"enter the number"<<endl; //prompt user to enter a value
        cin>>num;
        
        ispositive(num);//function call for ispositive
    }
    
    }//end of while loop
   
    
    
    return 0;

}//end of ,ain program

/**
 *Function <code>sumofrange</code>
 *Calculates the sum of range of values
 *<BR>
 *@param start_val contains starting numbers
 *@param end_val contains numbers to be summed upto
 *@return returns the function
 */
int sumofrange(int start_val,int end_val)
{
    //testing precondition
    assert(start_val > 0);
    
    int sum=0;//declaring of variable sum
    int i;
    //for loop to iterate end vals and start vals
    for(  i=start_val; i<=end_val; i++)
    {
        sum=sum+i; //algorithm for the sum of numbers
    }//end of for loop
    
    //outputs the sum to the screen of the user
    cout<<"sum of range is"<<sum<<endl;
    
    //testing post condition
    assert(start_val==i);
    
    return 0; //returns the function
}
/**
 *Function <code>sumofrange</code>
 *Calculates the product of range of values
 *<BR>
 *@param start_val contains starting numbers
 *@param end_val contains numbers to be summed upto
 *@return returns the function
 */
int productofrange(int start_val, int end_val)
{
    int product=1;//declare variable product
   
    //for loop to iterate the start val and end val
    for(int i=start_val; i<=end_val; i++)
    {
        product= product*i; //algorithm for product of the range
    }//end of for loop
    
    //outputs the product of sum to the screen of the user
    cout<<"product is "<<product<<endl;
    
    return 0; //returns the function
}

/**
 *function <code> ispositive </code>
 *check if anumber is positive
 *<BR>
 *@param value takes the number to be checked for.
 *@return <code>true</code> if number is positive
 *<code> false </code> otherwise
 */
bool ispositive(double value)
{
    //check if value is greater or equal to 0
    if(value>=0)
    {
         
        
        //prints the state of the value to the screen to the user
        cout<<"number is positive"<<endl;
        
        
    }
   
    else
    {
        cout<<"number is negative"<<endl;
         
        return false;//returns false if value is negative
    }
    
    return 0;
}//end of function

void menu()
{
    
    //prints options to the user
    cout<<"choose an option"<<endl;
    
    cout<<"1) to calculate range"<<endl;
    
    cout<<"2) to find product of range"<<endl;
    
    cout<<"3) to check if a number is positive"<<endl;
}
