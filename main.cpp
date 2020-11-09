/******************************************************************************

Bridget Naylor
Date: 11/9/2020
Lab: CECS 282 Lab Section Lab 10 Part 1

*******************************************************************************/

#include <iostream>

#include <vector>


#include<algorithm>

#include<numeric>//for accumulator operations

using namespace std;

 

int main()

{   // an array of doubles

    double arr[] = { 1.1, 2.2, 3.3, 2.2, 4.4 };

    //Determine the array size
    int size = *(&arr + 1) - arr;
       
    // initialize vector v1 to array arr
      
    vector<int> v1(arr, arr+size); 

        //Display the contents of vector v1
    cout<<"Vector Contents "<<endl;    
    for(int j=0; j<v1.size(); j++)
    {
        cout << v1[j] << ' ';
    }
    cout<<endl;
    // display all elements
        


     // Sorting the Vector in Ascending order
    sort(v1.begin(), v1.end());

    //Display the content of vector v1 after sorting
    
    cout<<"Ascending Order "<< endl;
    for(int j=0; j<v1.size(); j++)
    {
        cout << v1[j] << ' ';
    }
    cout<<endl;
    // Reversing the Vector v1
    reverse(v1.begin(),v1.end());

    //Display the content of vector v1

    cout<<"Reverse Order "<< endl;
    for(int j=0; j<v1.size(); j++)
    {
        cout << v1[j] << ' ';
    }
    cout<<endl;
    //Display the maximum element of vector v1
    cout<<"Max Element "<<*max_element(v1.begin(), v1.end())<<endl;
  
     //Display the minimum element of vector v1
    cout<<"Min Element "<<*min_element(v1.begin(), v1.end())<<endl;
    //Display the accumulation of all elements in vector v1
    cout<<"Accumulation "<< endl;
    for(int j=0; j<v1.size(); j++)
    {
        cout << v1[j] << ' ';
    }
    // Starting the summation from 0
    cout<<endl<<"Sum = "<<accumulate(v1.begin(), v1.end(), 0);

    // Counts the occurrences of 2.2 from 1st to last element
    int Two = count(arr, arr + size, 2.2);
    //Display the counts
    cout<<endl<<"Number of 2.2s = "<<Two<<endl;

    // Delete second element of vector
    v1.erase(v1.begin() + 1);//delete first would be + 0
  
    //Display the v1 after erasing the element
    cout<<"After Deleting Second Element "<< endl;
    for(int j=0; j<v1.size(); j++)
    {
        cout << v1[j] << ' ';
    }
   
//Remove the duplicate occurrences
    unique(v1.begin(), v1.end());

    cout<<endl<<"Removing duplicates "<< endl;
    for(int j=0; j<v1.size() - 1; j++)
    {
        cout << v1[j] << ' ';
    }
    return 0;

}
