#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> numbers; 
    vector <char> vowels{'a','e','i','o','u'};
    
  

    cout << "Element in Vowels vector" << endl;
    cout << vowels[0] << endl;
    cout << vowels[1] << endl;
    for(auto i = 2; i < vowels.size(); i++)
        cout << vowels.at(i) <<endl;
 
  // cout<<vowels[vowels.size()];
   
   numbers.push_back(10);
    numbers.push_back(20);
    
    cout<<"Elements in numbers vector:"<<numbers.size()<<endl;
    
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);
    
    int num = numbers.size();
    
    cout<<"Elements in numbers vector:"<<num<<endl;
    
    numbers.pop_back();
    
   cout<<"Elements in numbers vector after pop_back():"<<numbers.size()<<endl;
      
   
    
    
    return 0;
}