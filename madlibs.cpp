 //Authors:oy King
#include <iostream>
#include <string>
using namespace std;

int main()
{
std::string lastname;
std::string adjectibe1;
std::string noun1;

//asks user to input values for story
  std::cout<<"Please enter a silly word:\n";
  std::cin>>lastname;
  std::cout<<"please enter an adjective\n";
  std::cin>>adjectibe1;
  std::cout<<"please enter a cool noun\n";
  std::cin>>noun1;
  
  //actual story
  std::cout<<"Dave " << lastname << " is looking for his dog, he put flyers on the street."":\n";
  std::cout<<"My " << adjectibe1 << " dog is missing if found i will reward you with 1000 " << noun1 << ":\n";


  return 0;
}
